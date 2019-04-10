// g++ sin0.cpp -o sin0.o
#include <iostream>
#include <cmath>
using namespace std;

double round4(double var)
{	double value;
	if (var < 0){
		value = (int)(var * 10000 - 0.00005);
		}
	else{
		value = (int)(var * 10000 + 0.00005);
	}
	return (double)value / 10000;
}

int math(){
double PI = 3.14159265;
double rad = 0;
double a,p,t, rad, aspr, sr;
//t(theta) rad(radian) sr(sine result) 
// aspr (amplitude * sine (period*t))
   cout<<"Input an amplitude : ";
   cin>>a;
   cout<<"Input a period : ";
   cin>>p;
	cout <<"Theta\tsin(t)\ta*sin(pt) \n";
	for ( t=o ; t<=360 ; t = t + 15 ){
		rad = t * (PI / 180);
		sr = sin(rad);
		aspr = a * sin(p*t);
		cout<<t<<"\t"<<round4(sr)<<"\t"<<aspr<<"\n";
	}			
	return 0;
}
