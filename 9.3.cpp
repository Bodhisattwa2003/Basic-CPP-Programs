// WAP to input time in hours and mins and return total time in mins using operator overloading 

#include <iostream>
using namespace std;
class Time {
	int hrs, mins;

public:
	Time(int a, int b){
	hrs = a;
	mins = b;
}

	operator int(){
	return (hrs*60+mins);
}
};
int main()
{
	int hour, mins;
	cout<<"Enter time in hours and then minuets";
	cin>>hours;
	cin>>mins;
Time t(hour,mins);
	int tot=t.operator int();
	cout<<tot<<" mins";

	return 0;
}

