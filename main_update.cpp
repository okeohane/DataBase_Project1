#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>

using namespace std;

void main_Interface();
void search_ID(int id);
void search_Dept(string dept);
string search_dept(string dept);
void search_instructor(string dept);
void add_instructor();





int choice = 0;

int main() {


	
	
	
	string deptName;

	
	char ans = 'Y';
	cout << "ENTER DEPARTMENT NAME: ";
	cin >> deptName;

	search_Dept(deptName);

	cout << "\n\n TO EXIT PRESS (0)";
	cin >> choice;
	
	/*
	do
	{

		main_Interface();


		switch (choice)
		{
		case 1:
			
			int ID;
			char ans = 'Y';
			cout << "Enter instructor ID : ";
			cin >> ID;

			search_ID(ID);

			cout << "\n\n TO EXIT PRESS (0)";
			cin >> choice;
			
			break;

		case 2:

			
			char ans = 'Y';
			cout << "ENTER DEPARTMENT NAME: ";
			cin >> dept_name;

			search_Dept(dept_name);

			cout << "\n\n TO EXIT PRESS (0)";
			cin >> choice;


			break;

		case 3:

			break;

		case 4:

			break;




		}

	} while (choice == 0);
	*/

	return 0;
}

void main_Interface()
{

	cout << "============================================" << endl;
	cout << "\t  WELCOME TO MANHATTAN COLLEGE DATABASE \t" << endl;
	cout << "============================================" << endl << "\n\n";

	cout << "1. SEARCH FOR INSTRUCTOR \n";
	cout << "2. SEARCH FOR DEPARTMENT \n";
	cout << "3. ADD NEW INSTRUCTOR \n\n\n";
	cout << "4. EXIT \n";

	cin >> choice;


}

void search_ID(int id)
{
	int ID; 
	string name;
	string dept_name;
	fstream datafile_I;
	datafile_I.open("instructor.txt", ios::in);

	if (datafile_I)
	{
		while (datafile_I >> ID)
		{
			getline(datafile_I, name, ',');
			getline(datafile_I, name, ',');
			getline(datafile_I, dept_name);
			
			if (ID == id)
			{
				getline(datafile_I, name,',');
				getline(datafile_I, name, ',');
				getline(datafile_I, dept_name);
				
				
				cout << "INSTRUCTOR ID: " << ID << endl;
				cout << "INSTRUCTOR NAAME: " << name << endl;
				cout << "INSTRUCTOR DEPARTMENT: " << dept_name << endl;
				cout << "DEPARTMENT LOCATION: " << search_dept(dept_name) << endl;
				 
				break;
				
			}

			
			
		}

		if(ID!=id)
			cout << "YOU HAVE ENTERED THE WRONG INSTRUCTOR ID";
	}
	else 
	{
		cout << "FILE COULD NOT BE OPENED" << endl;
		
	}

	
	datafile_I.close();
	

}

void search_Dept(string dept)
{
	int budget;
	string building;
	string dept_name;
	fstream datafile_D;
	datafile_D.open("department.txt", ios::in);

	if (datafile_D)
	{
		while (getline(datafile_D, dept_name, ','))
		{
			getline(datafile_D, building, ',');
			datafile_D >> budget;

			if (dept_name == dept)
			{
				

				cout << "DEPARTMENT NAME: " << dept_name <<endl;
				cout << "DEPARTMENT LOCATION: " << building <<endl;
				cout << "DEPARTMENT BUDGET: " << budget <<endl;
				cout << "LIST OF INSTRUCTORS IN THIS DEPARTMENT" << endl;
				search_instructor(dept_name);

				break;

			}
			
			

			

		}

		if (dept_name != dept)
			cout << "YOU HAVE ENTERED THE WRONG DEPARTMENT NAME";
	}
	else
	{
		cout << "FILE COULD NOT BE OPENED" << endl;

	}


	datafile_D.close();




}

string search_dept(string dept)
{
	string dept_name;
	string building;
	int budget;
	fstream datafileD;
	datafileD.open("department.txt", ios::in);

	if (datafileD)
	{
		while (getline(datafileD, dept_name, ','))
		{
			getline(datafileD, building, ',');
			datafileD >> budget;

			if (dept_name == dept)
			{
				getline(datafileD, building,',');
				datafileD >> budget;
				
				break;

			}

			

			

		}

		
	}
	else
	{
		cout << "FILE COULD NOT BE OPENED" << endl;

	}

	datafileD.close();

	return building;
}

void search_instructor(string dept)
{
	int id;
	string name;
	string dept_name;
	fstream datafileI;

	datafileI.open("instructor.txt",ios::in);
	if (datafileI)
	{
		while (datafileI >> id)
		{
			getline(datafileI, name, ',');
			getline(datafileI, name, ',');
			getline(datafileI, dept_name);

			if (dept_name == dept)
			{
				cout << name << endl;
			}

			

		}

	}

	else
		cout << "FILE COULD NOT BE OPENED" <<endl;

	datafileI.close();
	
	
}
