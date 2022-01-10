// Joshua Boyce Hyland 
// ID: C00270917
// Time started 10:25
// Time finished 
// Date: 01/12/21
//-----------------------------------------------------------------------
// Program will ask user how many numbers they want to input and then let them put un that amount of numbers, add them and also pick out the odd number and add them
//-----------------------------------------------------------------------
// bugs 

#include <iostream>
#include <cmath>
#include <random>

void calculateNumber(); 

int main()
{
	calculateNumber(); 
	return 1; 
}

void calculateNumber()
{
	int amountOfNums = 0; 
	int num = 0; 
	int sum = 0; 
	int count = 1; 
	int oddSum = 0; 
	int oddCount = 0;

	std::cout << "How many numbers would you like to input? "; 
	std::cin >> amountOfNums; 

	while (count <= amountOfNums)
	{
		std::cout << "Please enter a number"; 
		std::cin >> num; 

		sum = sum + num; 

		count++; 

		if (num % 2 == 1 )
		{
			oddSum = num + oddSum; 
			oddCount++; 
		}

		

	}
std::cout << "The sum of all the numbers is " << sum << std::endl; 
		std::cout << "There was " << oddCount << " odd numbers and the sum of them is " << oddSum<<std::endl;

}
