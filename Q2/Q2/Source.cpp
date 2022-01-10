// Joshua Boyce Hyland
// ID: C00270917
// Time started 09:29
// Time finished 10:05
// Date: 02/12/21
//----------------------------------------------------
// Program will generate a random number and display 
//----------------------------------------------------
// bugs 

#include <iostream>
#include <cmath>
#include <random>

int generateRandomEven(); // function to generate random number 
int main()
{
	int sum = 0; 
	
	srand(time(nullptr)); // seed for random number generaor 

	sum = generateRandomEven(); 

	std::cout << "The sum of these random number is " <<sum << std::endl; 

	return 1; 
}

int generateRandomEven()
{
	
	int count = 1; 
	int random = 0; 
	int sum = 0;  

	while (count <= 10)
	{
		random = (rand() % 41) + 10; 
		
		if (random % 2 == 0)// ensure only even numbers get displayed 
		{
			std::cout << "" << random << std::endl; 
			sum = sum + random; 
				count++; 
		}
		
	}
	return sum;
}
