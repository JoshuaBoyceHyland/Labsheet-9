// Joshua Boyce Hyland 
// ID: C00270917
// Time taken 40mins 
// Date: 01/01/22
//-------------------------------
// Program will have user enter as many number as they like and then pick out the first time they entered 9 and the last time they entered 9
//-------------------------------
// No known bug

#include <iostream>

void findOccurences(); 

int main()
{
	findOccurences(); 
	return 1; 
}

void findOccurences()// counts what number the 9 was entered on 
{
	int num = 0; 
	int numOfNum = 0; 
	int first9 = 0; 
	int last9 = 0; 
	int nineCount = 0; 

	std::cout << "How many numbers would you like to enter?" << std::endl; 
	std::cin >> numOfNum; 

	for (int count = 1; count <= numOfNum; count++)
	{
		std::cin >> num; 

		if ((num == 9) && (nineCount == 0))// first nine assignment
		{
			first9 = count; 
			nineCount++;
		}
		if (num == 9)// will assign the count to last9 so iuntil for loop end which will make it the last 9  
		{
			last9 = count; 
			nineCount++; 
		}
	}

	if (nineCount > 0)
	{
		std::cout << "First 9 entered was the " << first9 << " number entered" << std::endl;	
	}
	if (nineCount > 1)
	{
		std::cout << "The last 9 entered was the " << last9 << " number entered" << std::endl;
	}
	if ((nineCount>0)&&(nineCount < 2))
	{
		std::cout << "There was no other 9s entered" << std::endl; 
	}

	if (nineCount == 0)
	{
		std::cout << "No 9s were entered" << std::endl; 
	}

}
