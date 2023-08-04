#include <iostream>
#include <string>
using namespace std;

int main()
{

	string sex;
	int age;
	float w;
	float h;
	float bmi;


		cout<<"Enter Gender";
		cin>>sex;
		cout<<"Enter age " ;
		cin>>age;
		cout<<"Enter weight";
		cin>>w;
		cout<<"Enter height";
		cin>>h;


		bmi =w/(h/100*h/100);

		cout<<"BMI="<<bmi<<endl;

		if (bmi<=18.5)cout <<"Underweight";
		else if(bmi<=25)cout<<"Normal";
		else if(bmi<=30)cout<<"Overweight";
		else if(bmi<=40)cout<<"Obesity";


			


	system ("pause");
	return (0);

}