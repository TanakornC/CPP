#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
using namespace std;
int Menu();
void AddStudent(string FN);
void DisplayStudent(string FN);
int main()
{
	const string Filename = "student.dat";
	ifstream InFile;
	ofstream OutFile;
	int c;
	do {
	system("cls"); // call external command
	c = Menu();
switch(c)
{
	case 1 : AddStudent(Filename); break;
	case 2 : DisplayStudent(Filename); break;
}
} while(c != 0);
		cout << "Exit program." << endl;
	return(0);
}


int Menu()
{
	string line(25,'=');
	int Choose;
	cout << "Program Add-Display Student Data\n";
	cout << line << endl;
	cout << ": Main Menu :\n";
	cout << line << endl;
	cout << ": 0 - Exit :\n";
	cout << ": 1 - Add Student :\n";
	cout << ": 2 - Display Student :\n";
	cout << line << endl;
	cout << " Enter choose : ";
	cin >> Choose;

	system("pause");
	return(Choose);
}
void AddStudent(string FN) {
    
    ofstream OutFile(FN.c_str(), ios_base::out | ios_base::app);
    if (OutFile.is_open()) {
        string Id, Name;
        double Score; 
        cout << "\n Add Student \n";
        cout << "Enter id: ";
        cin >> Id;
        cout << "Enter name: ";
        cin >> Name;
        cout << "Enter score: ";
        cin >> Score; 

        
        OutFile << Id << " " << Name << " " << Score << endl;
        OutFile.close();
        char Wait;
        cin.get(Wait);
        cout << "\nSaved already. Press Enter to continue";
        cin.get(Wait);
    } else
        cout << "File could not be opened." << endl;
}
void DisplayStudent(string FN) {
    ifstream InFile(FN.c_str(), ios_base::in); 
    if (InFile.is_open()) {
        string Id, Name;
        double Score; 
        string line(40, '=');
        int n = 0;
        cout << "\nList Student\n";
        cout << line << endl;
		cout << " No.	Id	Name\tScore\tGrade\n "; 

        cout << line << endl;
        
        InFile >> Id >> Name>>Score;
		char grade;
		while (!InFile.eof()) { 
            n = n + 1;
			if(Score>80) grade='A';
			else if(Score>=70) grade='B';
			else if (Score>=60)grade='C';
			else if (Score>=50)grade='F';
			else grade ='F';
            cout << right << setw(3) << n << " : ";
            cout << left << setw(6) << Id;
            cout << "\t " << Name;
            cout << "\t " << Score;
			cout << "\t "<<grade<< endl;
			InFile >> Id >>Name>>Score;
        }
        InFile.close();
        char Wait;
        cin.get(Wait);
        cout << "\nPress Enter to continue";
        cin.get(Wait);
    } else
        cout << "File could not be opened." << endl;
}

