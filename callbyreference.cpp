#include <iostream>
void getnum(int& num1,int& num2);
void swapnum(int& num1, int& num2);
void shownum(int& num1, int& num2);

using namespace std;
int main()
{
	int n1 =0, n2 =0;
	getnum(n1,n2);
	swapnum(n1,n2);
	shownum(n1,n2);

	return 0;
}

void getnum(int& num1,int& num2)
{
	cout<<"please enter two numbers :";
	cin>>num1
	   >>num2;
}

void swapnum(int& num1, int& num2)
{
	int other;
	other = num1;
	num1 = num2;
	num2 = other;
}

void shownum(int& num1, int& num2)
{

	cout<<"the numbers in reverse order are :"
		<<num1<<" and "
		<<num2<<endl;

}