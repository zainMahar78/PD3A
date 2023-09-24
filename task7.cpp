
#include<iostream>
using namespace std;
main(){
	cout<<"Enter the movie name: ";
	string movie_name;
	cin>>movie_name;
	cout<<"Enter the adult ticket price: $";
	float adult_ticket_price;
	cin>>adult_ticket_price;
	cout<<"Enter the child ticket price: $";
	float child_ticket_price;
	cin>>child_ticket_price;
	cout<<"Enter the number of adult tickets sold: ";
	float adult_tickets_sold;
	cin>>adult_tickets_sold;
	cout<<"Enter the number of child tickets sold: ";
	float child_tickets_sold;
	cin>>child_tickets_sold;
	cout<<"Enter the percentage of the amount to be donated to charity: ";
	float percentage;
	cin>>percentage;
	float total_amount;
	total_amount=(adult_ticket_price*adult_tickets_sold)+(child_ticket_price*child_tickets_sold);
	float amount_of_given_percentage;
	amount_of_given_percentage=(total_amount*percentage)/100;
	float remaining_amount=total_amount-amount_of_given_percentage;

	cout<<"Movie: "<<movie_name<<endl;
	cout<<"Total amount generated from ticket sales:  $"<<total_amount<<endl;
	cout<<"Donation to charity ("<<percentage<<"%)"<<": $"<<amount_of_given_percentage<<endl;
	cout<<"Remaining amount after donation: $"<<remaining_amount;
}