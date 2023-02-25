// WAP implementing a class Shape. Inherit Classes Circle, Square and triangle from Shape with data types and functions for input and display. Use base class pointer and a display the area of the three

#include<iostream>
#include<cmath>
using namespace std;
class shape
{	public:
	int dimension;
	float area;
	virtual void show()
	{
		cout<<"Area was not found "<<endl;
	}
};
class Circle:public shape
{
	public:
		void getdata()
		{	cout<<"Enter radius ";
			cin>>dimension;
		}
		void areacalc()
		{
			area= 3.14*dimension*dimension;
	
		}
		void show()
		{
			cout<<"Area = "<<area<<endl;
		}
};
class Square:public shape
{
	public:
		void getdata()
		{	cout<<"Enter side of square ";
			cin>>dimension;
		}
		void areacalc()
		{
			area=dimension*dimension;

		}
		void show()
		{
			cout<<"Area = "<<area<<endl;
		}
};
class Triangle:public shape
{	int side2,side3,s;
	public:
		void getdata()
		{	cout<<"Enter 3 sides";
			cin>>dimension>>side2>>side3;
		}
		void areacalc()
		{	s=(side2+side3+dimension)/2;
			area= sqrt(s*(s-side2)*(s-side3)*(s-dimension));
		//	return area;
		}
		void show()
		{
			cout<<"Area = "<<area<<endl;
		}
};
int main()
{
	shape *bptr;
	shape ob;
	bptr=&ob;
	bptr->show();
	
	Circle c;
	bptr=&c;
	c.getdata();
	c.areacalc();
	bptr->show();
	
	Square s;
	bptr=&s;
	s.getdata();
	s.areacalc();
	bptr->show();
	
	Triangle t;
	bptr=&t;
	t.getdata();
	t.areacalc();
	bptr->show();
	
	bptr=&ob;
	bptr->show();
}

