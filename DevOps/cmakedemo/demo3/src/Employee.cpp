#include <iostream>
#include "Employee.h"
using namespace std;

Employee::Employee(string name, int32_t id):name(name),id(id){}

void Employee::display(){
	cout << "A employee with name " << this->name << " id " << this->id<< endl;
}

