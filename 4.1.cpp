// WAP to find the area of rectangle and a cirlce using funtion overloading

#include<iostream>
using namespace std;
float area( int s);
float area(int l, int b);
int main()
{
	int s,l,b;
	cout<<"Enter the radius of the circle ";
	cin>>s;
	
	cout<<"Enter the lengnth and base of the rectangle ";
	cin>>l>>b;
	
	cout<<"The area of the circle is "<<area(s)<<"sq units"<<endl;
	cout<<"The area of the rectangle is "<<area(l,b)<<"sq units"<<endl;
	return 0;
}
float area(int r)
{
	float a;
	a= 3.14*r*r;
	return a;
}
float area(int l, int b)
{
	float a;
	a=l*b;
	return a;
}

