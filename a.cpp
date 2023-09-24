#include<iostream>
using namespace std;
main(){
	cout<<"Enter weight in pounds: ";
	int pound;
	cin>>pound;
	float kilograms;
	kilograms=pound*0.45 ;
	cout<< pound <<" pounds is equal to " <<kilograms<<" kilograms.";
}