#include <iostream>
using namespace std ;
int a[] = {25 , 10 , 9 , 2 , 1} ;
int k = 36 ;
void pss(int x[], int l) {
	int sum = 0 ;
	for(int i=1; i<=l; i++) {
		sum += a[x[i]-1] ;
		//cout<<x[i]<<" " ; 
	}
	//cout<<endl ;
	//cout<<" = "<<sum<<endl ;
	if ( sum == k) {
		for(int i=1; i<=l; i++) {
			cout<<a[x[i]-1]<<" " ;
		}
		cout<<" = "<<sum<<endl ;
	}
}
void subset(int x[] , int l , int n) {
	pss(x , l) ;
	int j ;
	if( l == 0) {
		j = 1 ;
	} else {
		j = x[l] + 1 ;
		
	}
	for(int i=j; i<=n; i++) {
		x[l+1] = i ;
		subset(x , l+1 , n) ;
		
	}
}
int main() {
	int n = 5 ;
	int x[n+1] ;
	subset(x , 0 , n) ;
	return 0 ;
}
