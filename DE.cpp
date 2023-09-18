#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
int main ()
{

	string name[4];
	int num[4],total=0, max=0, min;
	for( int i = 0; i<4;i++)
	{
		cout<<"Enter Name : ";
		cin>>name[i];
		cout<<"Enter Score["<<i<<"] : ";
		cin>>num[i];
		total+=num[i];
	}
cout<<"**********************"<<endl;
cout<<"Name		Score"<<endl;
cout<<"**********************"<<endl;
min=num[0];
	for(int i = 0; i<4;i++)

	{
		cout<<name[i]<<"\t\t"<<num[i]<<endl;
		if(num[i]>max)
			max = num[i];
	
		else if(num[i]<min)
				min = num[i];
	}


	

	cout<<setfill('-')<<setw(30)<<" "<<endl;
	cout<<"Max Score = "<<max<<endl;
	cout<<"Min score = "<<min<<endl;
	cout<<"Total = "<<total<<endl;
	cout<<"Average = "<<(float)total/4<<endl;

 
	system("pause");
	return (0);

}