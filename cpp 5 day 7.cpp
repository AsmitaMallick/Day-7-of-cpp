#include<iostream>
using namespace std;
int main(){
	int a=8;
	int *b=&a;
	int **c=&b;
	cout<<"the address of b is: "<<&b<<endl;
	cout<<"the address of b is: "<<c<<endl;
	cout<<"the value at address c is: "<<*c<<endl;
	cout<<"the value at address of address of c is: "<<**c<<endl;
	
	
	return 0;
}
