//C++ Program to Find Size of int, float, double and char in my system
#include<iostream>
#include<conio.h>
using namespace std;
int main(void)
{
	char n;
	int a;
	float b;
	double c;
	cout<<"size of char: "<<sizeof(n)<<"\n";
	cout<<"Size of integer: "<< sizeof(a)<<"\n";
	cout<<"Size of float: "<< sizeof(b)<<"\n";
	cout<<"Size of double: "<< sizeof(c)<<"\n";
	return 0;
}
