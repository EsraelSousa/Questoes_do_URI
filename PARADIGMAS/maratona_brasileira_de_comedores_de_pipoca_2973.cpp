#include <iostream>
#include <cmath>

using namespace std;

unsigned long long soma;
int vet_p[100005];

int soma_pa(int x){
	int p=0, s=0;
	for(int i=0; vet_p[i]>0; i++){
		s+=vet_p[i];
		if(s>=x){
			p = max(p, s);
			s=0;
		}
	}
	p = max(p, s);
	return p;
}

int ans(int c, int t){
	int r=1, l=c, m=ceil((r+l)/2.0);
	int s1, s2, s3;
	s1=(int)ceil(1.0*soma_pa(soma/r)/t);
	s2=(int)ceil(1.0*soma_pa(soma/l)/t);
	//printf("%d %d %d %d %d\n", r, l, m, s1, s2);
	while(l-r == 1){
	    s3=(int)ceil(1.0*soma_pa(soma/m)/t);
	    if(s1 > s3){
	        r = m;
	        s1 = s3;
	    }else{
	        l = m;
	        s2 = s3;
	    }
	    m=ceil((r+l)/2.0);
	}
	s1 = min(s1, s2);
	return s1;
}

int main(){
	int sacos, comp, tem;
	ios_base::sync_with_stdio(false);
	cin >> sacos >> comp >> tem;
	for(int i=0; i<sacos;i++){
		cin >> vet_p[i];
		soma+=vet_p[i];
	}
	cout << ans(comp, tem) << endl;
	return 0;
}
