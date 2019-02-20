#include<string>

class Employee{
private:
	std::string name;
	int id;
public:
	Employee(std::string, int);
	virtual void display();
};