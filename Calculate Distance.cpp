#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
	int time;
	double acceleration = 32;
	cout << "Enter the time in seconds: ";
	cin >> time;
	double distance = acceleration * (time*time)/2;
	
	cout << "\nDistance is : " << distance << " feet" << endl;
	return 0;
}
