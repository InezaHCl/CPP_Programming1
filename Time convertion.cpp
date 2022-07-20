//C++ program to read time in HH:MM:SS format and convert into total seconds using class
#include<iostream>
#include <iomanip>
using namespace std;
class Time {
	protected :
		int seconds;
		int hh,mm,ss;
	public :
		get_time();
		convert_time();
		display_time(){
			cout << "The time is = " 	<< setw(2) << setfill('0') << hh << ":"
                             			<< setw(2) << setfill('0') << mm << ":"
                             			<< setw(2) << setfill('0') << ss << endl;
    cout << "Time in total seconds: " << seconds;
		}
};

Time::get_time(){
	cout<<"Enter Time: ";
	cout<<"\n1. Hours: ";		cin>>hh;
	cout<<"\n2. Minutes: ";		cin>>mm;
	cout<<"\n3. Seconds: ";		cin>>ss;
}
Time::convert_time(){
	seconds = hh*3600 + mm*60 + ss;
}

main()
{
	Time abc;
	abc.get_time();
	abc.convert_time();
	abc.display_time();
}
