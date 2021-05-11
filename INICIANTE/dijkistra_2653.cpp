#include <iostream>

using namespace std;

bool e_composto[10000010];

void crivo(int n){
  e_composto[1] = 1; // 1 n�o � composto, mas o vetor na verdade guarda os n�meros que n�o s�o primos
  for(int i = 2; i <= n; ++i){
    if(!e_composto[i]){
      for(int j = 2; j*i <= n; ++j){
        e_composto[i*j] = 1;
      }
    }
  }
  return;
}

int main(){
  int N=10000000, Q=10000000, a;
  //cin >> N >> Q;
  crivo(N); // Complexidade O(n*log(log(n)))
  for(int i = 0; i < Q; ++i){ // Complexidade O(Q)
    //cin >> a;
    if(!e_composto[i])
        cout << i << "\n"; //Se composto � falso, ent�o � primo, caso contr�rio � composto.
  }

	return 0;
}

