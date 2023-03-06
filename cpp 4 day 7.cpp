#include<iostream>
using namespace std;
int main(){
	int a=6;
	int*b=&a;
	//******Address of operator******
	cout<<"the address of a is: "<<&a<<endl;
	cout<<"the address of a is: "<<b<<endl;
	//*********dereference operator*******
	cout<<"the value at address b is: "<<*b<<endl;
	
	
	
	return 0;
}
