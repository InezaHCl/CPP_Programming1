//C++ program where we check if a person is eligible to vote or not
#include<iostream>
using namespace std;
int main()
{
	int age;
	cout<<" Voting Center\n";
	cout<<"----------------\n";
	cout<<" Enter your age: ";
	cin>> age;
	if(age>=18)
		cout<<"\nYou are eligible for voting!";
	else
		{
		cout<<"\nSorry!\tYou are not eligible for voting!";
		cout<<"\nWait for "<< 18-age<<" years\n";
		}
return 0;	
}
