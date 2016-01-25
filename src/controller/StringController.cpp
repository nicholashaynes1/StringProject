/*
 * StringController.cpp
 *
 *  Created on: Jan 25, 2016
 *      Author: nhay7834
 */
#include "StringController.h"
#include <iostream>
#include <string>
using namespace std;

StringController::StringController()
{
	printThis = "hello world";
}


void StringController::start()
{
	cout<< printThis << endl;
	cout<< printThis.length() << endl;
	cout<< printThis[10] << endl;
	cout<< printThis.at(6) << endl;
	cout<< printThis.empty() << endl;
	cout<< printThis.substr(0, 11) <<endl;
	cout<< printThis.substr(0) << endl;
	cout<< printThis.compare(printThis) << endl;

}
