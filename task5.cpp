#include<iostream>
using namespace std;
main(){
	cout<<"Enter the Name of the Person: ";
	string name;
	cin>>name;
	cout<<"Enter the target weight loss in kilograms: ";
	float target_weight_loss;
	cin>>target_weight_loss;
	float no_of_days;
	no_of_days=15*target_weight_loss;
	cout<<name<<" will need "<<no_of_days<<" days to lose "<<target_weight_loss<<" kg of weight by following the doctor's suggestions";
}