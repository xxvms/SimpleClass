// SimpleClass.cpp : Defines the entry point for the console application.
//

#include <iostream>

class SmallObject //defining a call
{
private:
	int someData; //class data
public:
	void setData(int d) // member function to set data
	{
		someData = d;
	}
	void showData()
	{
		std::cout << "Data is " << someData << std::endl;
	}
};


int main()
{
	SmallObject SmallObject1, SmallObject2; //define two objects of class SmallObject

	SmallObject1.setData(1066); //call member function to set data
	SmallObject2.setData(1776);

	SmallObject1.showData(); // call member function to display data
	SmallObject2.showData();

	system("pause");
    return 0;
}

