// Joshua Boyce Hyland
// ID: C00270917
// Time started 09:39
// Time Finished 10:28
// Date: 06/12/21
//----------------------------------------------------------
//Program will ask user how many numbers they would like to input, have them input them and give back the sum, the largest number, the smallest number and the aveage 
//----------------------------------------------------------
//bugs 

#include <iostream>

double calculationsNum(int t_amountOfNum); 

int main()
{
	int amountOfNum = 0;
	double average = 0.0; 
	
	std::cout<< "How many numbers would you like to input? "; 
	std::cin >> amountOfNum;

	average = calculationsNum(amountOfNum);

	std::cout << " The average of these numbers is " << average << std::endl; 

	return 1; 
}

double calculationsNum(int t_amountOfNum) // fucntion to find sum, smallest number, biggest number and the average which is returned into the main
{
	int count = 1; 
	int smallCount = 0; // count for the smallest number to be initially assigned to a variable 
	double num = 0.0; 
	double sum = 0; 
	double smallNum = 0.0; 
	double bigNum = 0.0; 
	double average = 0.0; 

	while (count <= t_amountOfNum)
	{
		std::cout << "Please enter a number "; 
		std::cin >> num; 
		
		sum = sum + num; 

		if (num > bigNum)
		{
			bigNum = num; 
		}

		if (count== 1)
		{
			smallNum = num;
		}
			
		if (num < smallNum)
		{
				smallNum = num; 
		}
		count++; 
		
	}
	
	
		
	std::cout << "The smallest number you entered was " << smallNum << std::endl; 
	std::cout << " The largest number you entered was " << bigNum << std::endl; 
	std::cout << " The sum of the numbers you entered was " << sum << std::endl; 

	average = sum / t_amountOfNum;

	return average;
}

	 
	
	

