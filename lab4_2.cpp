#include<iostream>

using namespace std;

double findDistance(double u,double a,double t){
	double s = (u*t) + (0.5*a*t*t);
	return s;
}

int main(){
	
	double u,a,t;
	
	cout<<"Enter u(m/s): ";
	cin>>u;
	
	cout<<"Enter a(m/s^2): ";
	cin>>a;
		
	cout<<"Enter t(s): ";
	cin>>t;
	
	cout<<"Distance s is "<<findDistance(u,a,t)<<" m.";
	
	return 0;
}
