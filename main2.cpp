// ConsoleApplication1.cpp : Defines the entry point for the console application.
//

//#include "stdafx.h" //for header
#include <iostream>
#include <fstream>	//file access
#include <iomanip>

using namespace std;


int main()
{
	ifstream inFile;
	//open instructor file
	inFile.open("C:\\Users\\okeohane01\\Desktop\\instructor.txt");

	int id;
	string instructor, department;

	//read values from file
	inFile >> id;

	/*while (inFile.good())
	{
		getline(inFile, id, ',');
	}*/

	//close instructor file
	inFile.close();

	//open department file
	inFile.open("C:\\Users\\okeohane01\\Desktop\\department.txt");

	string name, location;
	int budget;

	//read values from file

	//close department file
	inFile.close();

	//displaying menu
	bool exit = false;	//if user chooses to exit or not
	int option;	//option user chooses

				//prompts user with menu and options to choose from
	while (!exit)
	{
		cout << "MENU" << endl;
		cout << "1. Enter the instructor ID and I will provide you with the name of the instructor, affiliated department and the location of that department." << endl;
		cout << "2. Enter the department name and I will provide you with the loacation, budget and names of all instructors that work for the department." << endl;
		cout << "3. Insert a record about a new instructor." << endl;
		cout << "4. Exit" << endl << endl;
		cout << "Enter 1, 2, 3 or 4: " << endl;
		cin >> option;

		if (option == 1)	//if option 1 is chosen
		{
			cout << "Enter the instructor ID: ";
			//cin >> variable for instructor ID
		}
		else if (option == 2)	//if option 2 is chosen
		{
			cout << "Enter the department name: ";
			//cin >> variable for department name
		}
		else if (option == 3)	//if option 3 is chosen
		{
			cout << "Enter the instructor id: ";
			//cin >> instructor ID
			cout << "Enter the instructor name: ";
			//cin >> instructor name
			cout << "Enter the affiliated department name: ";
			//cin >> department name
		}
		else if (option == 4)	//if option 4 is chosen (EXIT)
