#include<iostream>
using namespace std;
main(){
	cout<<"Enter the size of the fertilizer bag in pounds: ";
	int size_of_bag;
	cin>>size_of_bag;
	cout<<"Enter the cost of the bag: $";
	int cost_of_bag;
	cin>>cost_of_bag;
	cout<<"Enter the area in square feet that can be covered by the bag: ";
	float area;
	cin>>area;
	float cost_per_pound;
	cost_per_pound=cost_of_bag/size_of_bag;
	float cost_per_square;
	cost_per_square=cost_of_bag/area;
	cout<<"Cost of fertilizer per pound: $"<<cost_per_pound<<endl;
	cout<<"Cost of fertilizing per square foot: $"<<cost_per_square<<endl;
}