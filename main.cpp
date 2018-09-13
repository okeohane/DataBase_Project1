//
//  main.cpp
//  DataB Project 1
//
//  Created by Daniel Vilajeti on 9/12/18.
//  Copyright © 2018 Daniel Vilajeti. All rights reserved.
//

#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
using namespace std;

void main_Interface();

string name;
char dept_name;
char building;
int ID;
int budget;

int choice=0;

int main() {
    
    
    
    
    do
    {
        
        main_Interface();
        
        
        switch (choice)
        {
            case 1:
                
                break;
                
            case 2:
                
                break;
                
            case 3:
               
                break;
                
            case 4:
                
                break;
                
            
                
                
        }
        
    } while (choice == 0);
    
    return 0;
}

void main_Interface()
{
    
    cout << "============================================" << endl;
    cout << "\t  WELCOME TO MANHATTAN COLLEGE DATABASE \t" << endl;
    cout << "============================================" << endl << "\n\n";
    
    cout << "1. ENTER INSTRUCTOR ID FOR MORE INFO \n";
    cout << "2. ENTER DEPARTMENT NAME FOR MORE INFO \n";
    cout << "3. ENTER INSTRUCTOR INFO \n\n\n";
    cout << "4. EXIT\n";
    
    cin >> choice;
    
    
}
