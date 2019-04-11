//sinampperiod.cpp nrg
//g++ sinperiodamp.cpp -o sinperiodamp.o
#include <iostream>
#include <cmath>
using namespace std;

double round4(double var)
{
	double value;
	 if (var < 0 ){
		  value = (int)(var * 10000 - 0.00005);
	  }
	 else{
		  value = (int)(var * 10000 + 0.00005);
		 }
		return (double)value /10000;
}
int main (){
double PI=3.14159265359;
double a, p, t, rad, sr, aspr;
	//t(theta) rad(radian) sr(sine result)
	//aspr (amplitude * sine (period*t))
		cout<<"\n \t Input a Amplitude : ";
		cin>>a;
		cout<<"\n \t Input a Period : ";
		cin>>p;
		cout <<"Theta\tsin(t)\ta*sin(pt) \n";
		cout<<"\n";
		for ( t=0 ; t<=360 ; t = t + 15 ) 
	{
	  rad = t * (PI / 180);
	  sr = sin(rad);
	  aspr = a*sin(p*t);
	  cout<<t<<"\t"<<sr<<"\t"<<aspr<<"\n";
	
	}
	return 0;    
 
}
