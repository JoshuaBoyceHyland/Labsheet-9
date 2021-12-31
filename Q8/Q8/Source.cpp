// Joshua Boyce Hyland 
// ID: C00270197
// Time started 23:48
// Time finished 00:21
// Date: 30/12/21
//-----------------------------------------
// Program will take in how many numbers in the user will be entering, in the funtion the user will then enter the number and will be given the smallest, largest, average and sum of all the numbers
//-----------------------------------------
// Bugs

#include <iostream>

double processNumbers(int t_numOfNum); 

int main()
{
	int numOfNum = 0; 
	double average = 0; 

	std::cout << "Please enter the number of numbers you would like to enter: " << std::endl;

	while (numOfNum <= 0)
	{
		std::cin >> numOfNum;
		
		if (numOfNum <= 0)// Error checking for if user puts in a number too low 
		{
			std::cout << "Please enter a valid number" << std::endl; 
		}
	}

	average = processNumbers(numOfNum); 

	std::cout << "The average of all these numbers is: " << average << std::endl; 

	return 1; 
}

double processNumbers(int t_numOfNum)// Finds the smallest, largest, sum and average of the numbers entered
{
	double num = 0; 
	double smallest = 0; 
	double largest = 0; 
	double sum = 0; 
	double average = 0; 

	std::cout << "Please enter " << t_numOfNum << " between 1 and 10"<< std::endl;

	for (int count = 1; count <= t_numOfNum; count++)
	{
		std::cin >> num; 
		if ((num < 1) || (num > 10))// Error checking 
		{
			std::cout << "Please enter a valid number" << std::endl;
			count--; // Ensures the count doesnt go up when user inputs a number outside of range
			continue;
		}
		if (count == 1)
		{
			smallest = num; 
		}
		if (smallest > num)
		{
			smallest = num; 
		}
		if (count == 1)
		{
			largest = num; 
		}
		if (largest < num)
		{
			largest = num; 
		}

		sum = sum + num; 
	}

	std::cout << "The smallest number is:" << smallest << std::endl; 
	std::cout << "The largest number is: " << largest << std::endl; 
	std::cout << "The sum of all the numbers is: " << sum << std::endl; 

	average = sum / t_numOfNum; 

	return average;
}
