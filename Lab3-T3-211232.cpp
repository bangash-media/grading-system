#include <iostream>

using namespace std;

int main() 
{
	double marks;
	cout<<"\n\n\n\t\tEnter your Obtained marks: "; cin>>marks;
	cout<<endl<<endl;
	cout<<"*******************************************************\n\n";
	if (marks>=90&&marks<=100)
	{
	cout<<"\t\tAcquired Grade= A\n";
	}
	if (marks>=80&&marks<=89)
	{
		cout<<"\t\tAcquired Grade= B\n";
	}
	if (marks>=70&&marks<=79)
	{
		cout<<"\t\tAcquired Grade= B-\n";
	}
	if (marks>=60&&marks<=69)
	{
		cout<<"\t\tAcquired Grade= C\n";
	}
	if (marks>=50&&marks<=59)
	{
		cout<<"\t\tAcquired Grade= C-\n";
	}
	if (marks>=40&&marks<=49)
	{
		cout<<"\t\tAcquired Grade= D\n";
	}
	if (marks>=0&&marks<40)
	{
		cout<<"\t\tAcquired Grade= F\n";
	}
	if (marks<0||marks>100) 
	{
		cout<<"\t\tERROR\n";
	}
	
	
	return 0;
}
