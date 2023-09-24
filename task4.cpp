#include<iostream>
using namespace std;
main(){
	cout<<"Enter Imposter Count: ";
	float i;
	cin>>i;
	cout<<"Enter Player Count: ";
	float p;
	cin>>p;
	float chance_of_being_an_imposter;
	chance_of_being_an_imposter=100*(i/p);
	cout<<"Chance of being an imposter: "<<chance_of_being_an_imposter<<"%";
}