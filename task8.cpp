#include<iostream>
using namespace std;
main(){
	const float conversion_rate=1.94;
	cout<<"Enter vegetable price per kilogram (in coins): ";
	float vegetable_price;
	cin>>vegetable_price;
	cout<<"Enter fruit price per kilogram (in coins): ";
	float fruit_price;
	cin>>fruit_price;
	cout<<"Enter total kilograms of vegetables: ";
	int total_kg_vegetable;
	cin>>total_kg_vegetable;
	cout<<"Enter total kilograms of fruits: ";
	int total_kg_fruits;
	cin>>total_kg_fruits;
	float total_earning;
	total_earning=((vegetable_price*total_kg_vegetable)+(fruit_price*total_kg_fruits))/conversion_rate;
	cout<<"Total earnings in Rupees (Rps): "<<total_earning;
}