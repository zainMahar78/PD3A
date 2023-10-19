#include <iostream>
using namespace std;
int main(){
	cout<<"Enter a 4-digit number: ";
	int num;
	cin>> num;
	int a1,b1;
	int sum;
	a1 = num % 10;
	sum = a1;
	a1 = num /10;
	b1 = a1 % 10;
	sum = sum + b1;
	a1=num/100;
	b1=a1%10;
	sum=sum+b1;
	a1=num/1000;
	b1=a1%10;
	sum=sum+b;
	cout<<"Sum of the individual digits: "<<sum;
}
