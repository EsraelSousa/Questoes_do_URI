#include "iostream"
using namespace std;

// Memoization for the state results
long long dp[20][180][2];

// Stores the digits in x in a vector digit
long long getDigits(long long x, vector <int> &digit)
{
    while (x)
    {
        digit.push_back(x%10);
        x /= 10;
    }
}

// Return sum of digits from 1 to integer in
// digit vector
long long digitSum(int idx, int sum, int tight,
                          vector <int> &digit)
{
    // base case
    if (idx == -1)
       return sum;

    // checking if already calculated this state
    if (dp[idx][sum][tight] != -1 and tight != 1)
        return dp[idx][sum][tight];

    long long ret = 0;

    // calculating range value
    int k = (tight)? digit[idx] : 9;

    for (int i = 0; i <= k ; i++)
    {
        // caclulating newTight value for next state
        int newTight = (digit[idx] == i)? tight : 0;

        // fetching answer from next state
        ret += digitSum(idx-1, sum+i, newTight, digit);
    }

    if (!tight)
      dp[idx][sum][tight] = ret;

    return ret;
}
