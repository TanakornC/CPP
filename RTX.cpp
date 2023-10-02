//การสร้าง Dynamic Arrray
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
int main()
{   
	int num[2][3];
	cout<<"Enter Array 2D 2x3 "<<endl;
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<3;j++)
		{
			cout<<"Array 2d["<<i<<"]["<<j<<"]";
			cin>>num[i][j];
		}

	}
	
	for(int i=0;i<2;i++){
			
		for(int j=0;j<3;j++)
		{
			cout<<num[i][j]<< " ";
		
		}cout<<endl;
	}


	cout<<"Transpose Martix 2d 2x3"<<endl;

	
	for(int i=0;i<3;i++){
			
		for(int j=0;j<2;j++)
		{
			cout<<num[j][i]<< " ";
		
		}cout<<endl;
	}
	




    system("pause");
    return 0;
}