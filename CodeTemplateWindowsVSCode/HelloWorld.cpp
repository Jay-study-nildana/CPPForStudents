#include <iostream>
#include "HelloWorld.h"

using namespace std;

string HelloWorld::saysomething(int number)
{
    string outputsometring;

    outputsometring = "XXX 6969";
    cout<<"you have sent the number: "
        <<number
        <<endl;

    cout<<"we have returned the string: "
        <<outputsometring
        <<endl;

    return outputsometring;
}

HelloWorld::HelloWorld()
{

}


