#include<string>

class Employee{
private:
	std::string name;
	std::int32_t id;
public:
	Employee(std::string, std::int32_t);
	virtual void display();
};