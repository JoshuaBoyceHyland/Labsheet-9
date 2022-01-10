// Joshua Boyce Hyland
// ID: C00270917
// Took 40mins
// Date 29/11/21
//--------------------------------------------------------------------
// Program will generate 10 random 
//--------------------------------------------------------------------
// bugs 

#include <iostream>
#include <random>

void generateRandom(); // function for generating and adding number

int main()
{
	srand(time(nullptr)); 

	generateRandom(); // calling function

	return 1;
}


void generateRandom()
{
	int count= 1; 
	int random = 0; 
	int sum = 0; 
	int answer = 0; 
	
	while (count <= 10)
	{
		random = (rand() % 40) + 1; 
		std::cout << "" << random << std::endl;
		sum = sum + random; // adds up random numbers
		count++; //adds 1 to count
	}
	std::cout << "The sum of the random numbers is  " << sum << std::endl; 
}
