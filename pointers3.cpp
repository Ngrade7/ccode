//pointer3.cpp nrg

#include <iostream>
using namespace std;

int main(){
	int integers[10];
	int * pointer;
	pointer = integers; *integers = 11;
	pointer++; *pointer = 22;
	pointer = &integers[2];	*pointer = 33;
	pointer = integers + 3; *pointer = 44;
	pointer = integers; *(pointer+4) = 55;

	for (int n = 0; n < 5; n++)
		cout << integers[n]<<" ";

		cout<<endl;
		return 0;

}
