// Joshua Boyce Hyland 
// ID: C00270917
// Time taken 2hr
// Date 29/12/21 & 30/12/21
//---------------------------------
// Program will have menu and 3 of the options will convert value, 4th shall  exit the program
//---------------------------------

#include <iostream>
bool fahreToCel(); 
bool celToFahre(); 
bool inchToCent(); 


int main()
{
	int input = 0; 
	bool menu = true; 

	//menu 
	std::cout << "1. Fahrenheit to celcius" << std::endl; 
	std::cout << "2. Celcius to fahrenheit" << std::endl; 
	std::cout << "3. Inches to centimeters" << std::endl; 
	std::cout << "4. Exit program" << std::endl; 
	std::cin >> input; 
	
	//input bringing user to diiferent functions  
	do 
	{
		switch (input)
		{
		case 1:
			menu = fahreToCel(); 
			break; 
		case 2:
			menu = celToFahre(); 
			break; 
		case 3:
			menu = inchToCent(); 
			break; 
		case 4:
			menu = false; 
			break; 
		}
		
	}
	while (menu == true); 
	
	return 1; 
}

bool fahreToCel()// fahrenheit to celcius 
{
	double fahr = 0; 
	double cel = 0;
	int input = 0;  
	
	std::cout << "Please enter the fahrenheit: ";
	std::cin >> fahr;

	cel = (fahr - 32) * 5 / 9;
	std::cout << "This value in celcius is: " << cel << std::endl; 

	 //menu 
	std::cout << "1.Menu" << std::endl; 
	std::cout << "2.Exit" << std::endl; 
	std::cin >> input; 

	 //bring user back to main menu or exit program 
	switch (input)
	{
	case 1:
		main(); 
	case 2:
		return false; 
	}

}

bool celToFahre()// celcius to fahrenheit 
{
	double cel = 0; 
	double fahr = 0; 
	int input = 0; 

	std::cout << "Please enter the celcius: "; 
	std::cin >> cel; 
	
	fahr = (cel * 9 / 5) + 32; 
	
	std::cout << "This value in fahrenheit is: " << fahr << std::endl;

	std::cout << "1.Menu" << std::endl;
	std::cout << "2.Exit" << std::endl;
	std::cin >> input;

	// bring user back to menu or exit program 
	switch (input)
	{
	case 1:
		main();

	case 2:
		return false; 
	}

}

bool inchToCent()// inches to centimeter 
{
	
	double inch = 0; 
	double centimeter = 0; 
	int input = 0; 

	std::cout << "Please enter the inches: ";
	std::cin >> inch; 

	centimeter = inch * 2.54; 

	std::cout << "This value in centimeters is: " << centimeter << std::endl; 

	//menu 
	std::cout << " 1.Menu " << std::endl; 
	std::cout << "2.Exit" << std::endl; 

	std::cin >> input; 
	
	// bring user back menu or exit program 
	switch (input)
	{
	case 1:
		main(); 
	case 2:
		return false; 
	}
 
}
