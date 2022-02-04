//============================================================================
// Name        : HelloWorldEclipseIDETemplate.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <string.h>
#include <iostream>
#include "HelloWorld.h"
using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
    HelloWorld tempHelloWorld;
    int somenumber;
    string returnedstring;
    somenumber = 10;

    //you can use
    //cin>>somenumber;
    //to collect input from user.

    returnedstring = tempHelloWorld.saysomething(somenumber);

    //do something with returnedstring

    string somelastline = "did you see this?";
    cout << somelastline
         << endl;
    return 0;
}
