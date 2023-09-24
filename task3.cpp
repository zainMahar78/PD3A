#include<iostream>
using namespace std;
main(){
	cout<<"Enter Initial Velocity (m/s): ";
	float initial_velocity;
	cin>>initial_velocity;
	cout<<"Enter Acceleration (m/s^2): ";
	float acceleration;
	cin>>acceleration;
	cout<<"Enter Time (s): ";
	float time;
	cin>>time;
	float final_velocity;
	final_velocity=acceleration*time+initial_velocity;
	cout<<"Final Velocity (m/s): "<<final_velocity;
}