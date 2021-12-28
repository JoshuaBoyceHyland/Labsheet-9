// Joshua Boyce Hyland
// ID: C00270197
// Time started 19:20
// Time finished 19:34
// Date: 28/12/21
//------------------------------------------
// Program will intake as mant numbers as user want to enter an dend when user inputs a 0 and give them back the sum of all the numbers inputed

#include <iostream>

void sumTotal(); // will intake all the numbers and display the numbers added together

int main()
{
	sumTotal(); 
}

void sumTotal()
{
	int input = 1; 
	int sum = 0; 
	
	std::cout << "Please enter as many numbers as you like, enter 0 when you would liketo be given the sum of these numbers:" << std::endl;
	
	while (input != 0)
	{
		std::cin >> input; 
		
		sum = sum + input; 

	}

	std::cout << " The sum of all these numbers is " << sum << std::endl; 
}
