#include<iostream>
#include"extApi.h"
void main()
{

	using namespace std;

	int Port = 19997;

	int clientID = simxStart("127.0.0.1", Port, 1, 1, 1000, 5);

	if (clientID != -1)
	{
		cout << "V-rep connected.";
		simxStartSimulation(clientID,simx_opmode_oneshot);
	}
	else
	{
		cout << "V-rep can't be connected.";
	}

	cin.get();
	return;
}
