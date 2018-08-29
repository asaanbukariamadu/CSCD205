#include <iostream>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	int n, c=1; 
	cout<<"Please enter your number"<<endl;
	cin>>n;
	
	for( int i=2; i<n-1; i++){
		
		if(n%i!=0){
			
			continue;
			
		}
		else{
			
			c=0;
		}
		
	}
	if(c==0){
		cout<<endl;
		cout<<"number is not a prime"<<endl;
	}
	else{
		cout<<endl;
		cout<<"number is a prime"<<endl;
	}
	


	return 0;
}
