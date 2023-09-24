#include<iostream>
using namespace std;
main(){
	cout<<"Enter the person's age: ";
	int age;
	cin>>age;
	cout<<"Enter the number of times they've moved: ";
	int time_they_moved;
	cin>>time_they_moved;
	float average_number_of_years;
	average_number_of_years=age/(time_they_moved+1);
	cout<<"Average number of years lived in the same house: "<<average_number_of_years;
}