#include<iostream>
#include<string>
using namespace std;
int main ()
{	string name;
	int salary;
	int sale;
	float com;
	cout<<"Enter name : ";
	cin>>name;
	cout<<"Enter Salary : ";
	cin>>salary;
	cout<<"Enter Sale : ";
	cin>>sale;
	cout<<"Enter Commission :";
	cin>>com;
	cout<<"***OUTPUT***\n"<<endl;
	cout<<"name"<<endl;
	cout<<"Total Revenue "<<salary+(sale*(com/100))<<endl;


	system("pause");
	return(0);
}