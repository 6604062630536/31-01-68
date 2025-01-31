#include <iostream>
using namespace std ;
#include <iostream>
using namespace std ;
int a[] = {12 , 5 , 4 , 2 } ;
int b[] = {8 , 7 , 4 , 2} ;
int k = 18 ;
int maxvalue =  0; 
int w = 0;
int c[4];
void print_sol(int x[] , int n ) {
	int sumwt = 0 ; 
	int sumvl = 0 ;
	for (int i =1; i<= n; i++) {
		//cout<<x[i]<<" " ;
		sumwt += x[i] * a[i-1] ;
		sumvl += x[i] * b[i-1] ;
		
	}
	
	//cout<<endl;
	//cout<<" = "<<sum<<endl ;

	if ( sumwt <= k) {
		w = sumwt;
		//cout<<" sumvl : "<<sumvl<<" maxvl : "<<maxvalue<<endl  ;
		if( sumvl > maxvalue ) {
			maxvalue = sumvl ;
			
			for(int i=1; i<=n; i++) {
				if(x[i] == 1) {
					c[i-1] = a[i-1] ;
					cout<<c[i-1]<<" " ;
				}
			}
			cout<<endl ;
			
		}

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
	int n = 4;
	int x[n+1] ;
	subset1(x , 0 , n) ;
	
	cout<<" Weight : "<<w<<" Value : "<<maxvalue<<endl  ;
	return 0 ;
}
