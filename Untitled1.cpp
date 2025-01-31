#include <iostream>
using namespace std ;
int a[] = {25 , 10 , 9 , 2 , 1} ;
int k = 12 ;
void print_sol(int x[] , int n ) {
	int sum = 0 ; 
	for (int i =1; i<= n; i++) {
		//cout<<x[i]<<" " ;
		//cout<<a[i-1]<<" " ;
		sum += x[i] * a[i-1] ;
		
	}
	//cout<<endl;
	//cout<<" = "<<sum<<endl ;
	
	if ( sum == k) {
		for(int i=1; i<=n; i++) {
			if(x[i] == 1) {
				cout<<a[i-1]<<" " ;
			}
		}
		cout<<" = "<<sum<<endl ;
		
		
	}
}
void subset1(int x[] , int l , int r) {
	if( l == r) {
		print_sol(x , r) ;
		
	}else {
		x[l + 1] = 0 ;
		subset1(x , l+1 ,r) ;
		x[l + 1] = 1 ;
		subset1(x, l +1 ,r) ;
		
	}
}
int main() {
	int n = 5 ;
	int x[n+1] ;
	subset1(x , 0 , n) ;
	return 0 ;
}
