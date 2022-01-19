// ConsoleApplication12.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>
#include <windows.h>


using namespace std;
int main()
{
	struct Student
	{
		char Name[20];
		char Surname[20];
		int Age;
		double Grade;
	}info[5];
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	ifstream f;
	ofstream f1;
	f.open("text1.txt");
	f1.open("text2.txt");
	if (!f.is_open() && !f1.is_open())
	{
		cout << "Error!!! The file has not been opened !!!" << endl;
	}
	else
	{
		cout << "The file has been opened !!!" << endl;
		for (int i = 0; i < 5; i++)
		{
			f >> info[i].Name >> info[i].Surname >>
				info[i].Age >> info[i].Grade;
		}
		f1 << "-------------------------------------------------------" << endl;
		for (int i = 0; i < 5; i++)
		{
			f1 << "Student # " << i << " : " << endl <<
				"Name : " << info[i].Name << endl <<
				"Surname : " << info[i].Surname << endl <<
				"Age : " << info[i].Age << endl <<
				"Grade : " << info[i].Grade << endl
				<< "-------------------------------------------------------" << endl;
		}
	}
	system("pause");
	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
