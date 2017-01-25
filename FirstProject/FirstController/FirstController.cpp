//
//  FirstController.cpp
//  FirstProject
//
//  Created by Osborne, Jacob on 1/23/17.
//  Copyright © 2017 Osborne, Jacob. All rights reserved.
//

#include <iostream>
#include "FirstController.h"

using namespace std;

void FirstController :: start()
{
    cout << "C++ Rocks!" << endl;
    int myAge = 17;
    cout << "I am " << myAge << " years old." << endl;
    cout << "\n";
    
    this->specialOutput();
    
}

void FirstController:: specialOutput()
{
    cout << "How old are you?" << endl;
    int yourAge;
    cin >> yourAge;
    cout << "Oh, so you are " << yourAge << " years old!"<< endl;
    string myName;
    cin.ignore();
    cout << "Type in your name" << endl;
    getline(cin, myName);
    cout << "You typed: " << myName << endl;
    cout << "Type in your name and age" << endl;
    cin >> myName >> yourAge;
    cout << "You typed: " << myName << " and " << yourAge << endl;
}

