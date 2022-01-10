// Joshua Boyce Hyland
// ID: C00270917
// Time started  09:38
// Time finished 10:04
// Date: 08/12/21
//---------------------------------------------------
// Program will ask user o inout a first and second number, the program will then adds these number and the ones between them
//---------------------------------------------------
// bugs

#include <iostream>

int addNumbers(int t_firstNum, int t_secondNum); // function will add the numbers between the inputed numbers by the user

int main()
{

	int firstNum = 0; 
	int secondNum = 0; 
	int sum = 0; 

	std::cout << "Please input the first number: "; 
	std::cin >> firstNum; 

	std::cout << "Please input the second number: "; 
	std::cin >> secondNum; 

	sum = addNumbers(firstNum, secondNum); 

	std::cout << " The sum is " << sum << std::endl; 
	return 1; 
}

int addNumbers(int t_firstNum, int t_secondNum)
{
	int sum = 0; 

	while (t_firstNum <= t_secondNum)// parameters that will add the numbers between the inputed numbers
	{
		sum = sum + t_firstNum; 
		t_firstNum++; 
	}
	return sum;
}
