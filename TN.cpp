#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
//Define prototype function

void DisplayMenu();
float Area(const float Radius);
float Area(const float Length, const float Widht);
float Area(const float base, const double height);
float Area(const float High, const float base1, const float base2);
int main()
{
	char Choice;
	bool Flag = true;
	do{
		DisplayMenu();
		cin>>Choice;
		if(Choice == '1'){
			float Radius;
			cout<<"\nEnter radius : ";
			cin>>Radius;
			cout<<"Area of Cicle = "<<fixed;
			cout<<setprecision(2)<<Area(Radius)<<endl;
		}
		else if(Choice == '2'){
			float Length,Widht;
			cout<<"Enter length and width";
			cin>>Length>>Widht;
			cout<<"Area of Rectangle = "<<fixed;
			cout<<setprecision(2)<<Area(Length,Widht);
			cout<<endl;
		}
		else if(Choice == '3'){
			float base;
			double height;
			cout<<"Enter base and height ";
			cin>>base>>height;
			cout<<"Area of Triangle = "<<fixed;
			cout<<setprecision(2)<<(base,height);
			cout<<endl;


		}
		else if(Choice == '4'){
			float h,b1,b2;
			
			cout<<"Enter lenght and height ";
			cin>>h>>b1>>b2;
			cout<<"Area of Triangle = "<<fixed;
			cout<<setprecision(2)<<Area(h,b1,b2);
			cout<<endl;
		}else if(Choice == '5')Flag=false;
		else{
			cout << "\nYou choose out of range is ";
            cout << "not process.\n";
		}

		


	}while(Flag);
		cout<<"\n...Exit Program\n";

		system("pause");
		return (0);
}



float Area(const float Radius)
{

	return(3.14159F * Radius * Radius);
}
float Area(const float Length, const float Widht)
{
	return(Length * Widht);
}
float Area( const float base , const double height){
	
	return(0.5*base*height);

}
float Area(const float High, const float base1, const float base2);{

	return(0.5*High*(base1+base2));
}

void DisplayMenu()
{
	cout<<endl;
	cout<<"Program Calculate Area"<<endl;
	cout<<" 1. Cicle"<<endl;
	cout<<" 2. Rectangke"<<endl;
	cout<<" 3. Triangle"<<endl;
	cout<<" 4. Trapezoid"<<endl;
	cout<<" 5. Exit"<<endl;
	cout<<"Enter your choose number: ";


}