// Joshua Boyce Hyland
// ID: C00270917
// Time started 13:12
// Time finished 
// Date: 
//-------------------------------
// Program will take in number and give back every third number leaving 
//-------------------------------
// Bugs

#include <iostream>
using namespace std; 

void reverseDisplay(int t_num); 
int main()
{
	int num = 0; 
	cout << "please enter a number: "; 
	while ((num == 0)||(num<0))
	{
		cin >> num; 
		cout << "Please enter a number greater than 0" <<endl; 
	}

	reverseDisplay(num); 

	return 1; 
}

void reverseDisplay(int t_num)
{

	for (int count = t_num; count >= 0; count--)
	{
		if (t_num % 3 <= 1)
		{
			cout << count << endl; 
		}
	}
}
