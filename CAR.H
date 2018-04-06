#include<iostream>
#include<string>
using namespace std;

enum status {ENOUGH, FULL,EMPTY};//enum is just like define
class car 
{
public:
	car()//writing null constructor is good programming practice
	{
		this->make = "foxy";
		this->kmperlitre = 10;
		this->maxfuelcapacity = 15;
		this->fuellevel = ENOUGH;
	}
	double getcost()
	{
		return this->cost;
	}
	void setcost(double price)
	{
		this->cost =500;
	}
	string getmake()
	{
		return this->make;
	}
	void setmake(string brand)
	{
		 this->make = brand;
	}
	double getkmperlitre()
	{
		return this->kmperlitre;
}
	void setkmperlitre(double dist)
	{
		this->kmperlitre = dist;
	}
	status getfuelstatus()
	{
		return this->fuellevel;
	}
	void setfuelstatus(status s)
	{
		this->fuellevel = s;
	}

	void displaycar()
	{
		cout << "hi i am the best car in the world" << endl;
		cout << "my cost is $2.9 million" << endl;
		cout << "any objection" << endl;
		cout << this->cost<< endl;
		cout << this->fuellevel<< endl;
		cout << this-> kmperlitre<< endl;
		cout << this-> make<<endl <<endl <<endl <<endl <<endl;

	}
private:
	double cost;
	string make;
	double kmperlitre;
	int maxfuelcapacity;

	status fuellevel;
};
