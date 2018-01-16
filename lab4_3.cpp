#include<iostream>

using namespace std;

int findDivisor(int x){
		
	for(int i = 2;i<=x;i++){
		
		if(x%i == 0){
			
			return i;
		}
		else{
			x++;
		}
	}
	

}

int main(){
	
	int x;
	
	cout<<"Enter x: ";
	cin>>x;
	
	if(x>1){
	
		cout<<"the smallest number that can be divided by "<<x<<" is "<<findDivisor(x)<<".";
	}
	
	return 0;
}
