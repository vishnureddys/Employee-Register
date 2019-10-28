#include <iostream>
using namespace std;

class Employee{
private:
	int number;
	string name;
	int basic,allowance,it,net;
public:
	static int total;
	static int average;
	void data()
	{
		cout<<"Enter EN, Name, Basic Salary, Allowance, IT"<<endl;
		cin>>number,name,basic,allowance,it;
	}
	void netsal()
	{
		cout<<"Name: "<<name<<endl;
		cout<<"Number: "<<number<<endl;
		cout<<"Basic Salary: "<<basic<<endl;
		net=basic+allowance-it;
		cout<<"Net Salary: "<<net<<endl;

	}
	void total()
	{
		total=total+net;
	}

	void avg()
	{
		average=0;
		average=total/5;
	}
};

int main()
{
	Employee e[5];
	for(int i=0;i<5;i++)
	{
		e[i].data();
		e[i].netsal();
	}
	e::total();


}