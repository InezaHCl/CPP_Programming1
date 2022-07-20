//C++ program to access the elements of an Array using pointers
#include <iostream>
using namespace std;
main()
{
	cout<<"Enter five integer numbers: \n";
	int arr[5];
	int *ptr=arr;
	for(int i=0; i<5; i++)
	{
		cout<<"Element["<<i<<"]: ";
		cin >>*(ptr+i);
	}
	cout<<"\n";
	cout<<" You entered: \n";
	for(int i=0; i<5; i++)
		cout<<"\t"<<*(ptr+i);
}
