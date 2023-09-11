#include<iostream>
#include<iomanip>
using namespace std;
float update_balance(string command,float dollars,float balance);
{ if command

 
int main(){

	float balance = 10000;
	

do{

	cout<<"Input command (1 or withdraw, 2 deposit)";
	int command;
	cin>>command;
	if(command == 0){
	
		break;
	
	}else if (command == 1){
	
		float dollars;
		cout<<"Input amount";
		cin>>dollars;
		balance = update_balance("withdraw",dollars,balance);

		cout<<"Your balance : "<<balance<<"bath"<<endl;

	
	}else if (command == 2)
	{
		float dollars;
		cout<<"Input amount";
		cin>>dollars;
		balance = update_balance("deposit",dollars,balance);
		cout<<"Your balance"<<balance<<"bath"<<endl;

		
	}else 
	{
		cout<<"No command"<<endl;
	
	
	
	}
		
	
}while(command == 0) break;
	
	system("pause");
	return (0);