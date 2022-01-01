// Joshua Boyce Hyland 
// ID: C00270917
// Time taken 1hr 34mins
// Date: 31/12/21 & 01/01/22
//------------------------------
// Program will ask user for how many numbers it would like to enter and then give back the smallest number and largest number and the amount of times it happened 
//------------------------------

#include <iostream>

void countOccurences(); 
int main()
{
	countOccurences(); 
	return 0; 
}

void countOccurences()
{
	int num = 0; 
	int numOfNum = 0; 
	int smallest = 0; 
	int largest = 0; 
	int smallCount = 0; 
	int largeCount = 0; 
	 

	std::cout << "How many numbers would you like to enter, within 1 to 10?" << std::endl; 

	while ((numOfNum < 1) || (numOfNum > 10))
	{
		std::cin >> numOfNum; 
		if ((numOfNum < 1) || (numOfNum > 10))
		{
			std::cout << "Please enter a number within the range" << std::endl; 
		}
	}

	std::cout << "Please enter the your numbers " << std::endl; 
	
	for (int count = 1; count <= numOfNum; count++)
	{
		std::cin >> num; 
		if ((num < 1) || num > 10)
		{
			std::cout << "Please enter a valid number with in the range of 1 to 10" << std::endl; 
			count--; 
			continue; 
		}
		// smallest
		if (count == 1) //assigns first entry as smallest 
		{
			smallest = num; 
		}
		if (smallest>num)// resets the count if greater number is entered
		{
			smallCount = 0;
		}
		
		if (smallest > num)
		{
			smallest = num; 
		}
		
		if (smallest == num)// ups the count if same numebr is entered
		{
			smallCount++; 
		}
		// Largest 
		if (count == 1)// assigns first entry to smallest so it can compare to the following numbers instead of 0 
		{
			largest = num; 
		}
		if (largest < num)//  resets the count if a higher number is entered
		{
			largeCount = 0; 
		}
		if (largest < num)
		{
			largest = num; 
		}
		
		if (largest == num)// ups the count if highest reappears 
		{
			largeCount++; 
		}
	}

	if (largest != smallest)
	{
		std::cout << "The highest number is " << largest << " and it occured " << largeCount << " times." << std::endl; 
		std::cout << "The lowest number is " << smallest << " and it occured " << smallCount << " times." << std::endl; 
	}
	if (largest == smallest)// if the same number is inputed multiple times it will ouptut this instead of a broken version of the above code 
	{
		std::cout << " You enter the same number (" << num << "), " << numOfNum << " times." << std::endl; 
	}
}
