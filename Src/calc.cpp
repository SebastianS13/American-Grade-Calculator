#include <iostream>

char BasicCalculate(int Percentage)
{
	char Grade = 'F';

	if (Percentage >= 90)
	{
		Grade = 'A';
	}
	else if (Percentage >= 80)
	{
		Grade = 'B';
	}
	else if (Percentage >= 70)
	{
		Grade = 'C';
	}
	else if (Percentage >= 60)
	{
		Grade = 'D';
	}
	else
	{
		Grade = 'F';
	}
	
	return Grade;
}

std::string AdvancedCalculate(int Percentage)
{
	std::string Grade = "F";

	if (Percentage >= 97)
	{
		Grade = "A+";
	}
	else if (Percentage > 93)
	{
		Grade = "A";
	}
	else if (Percentage > 90)
	{
		Grade = "A-";
	}
	else if (Percentage > 87)
	{
		Grade = "B+";
	}
	else if (Percentage > 83)
	{
		Grade = "B";
	}
	else if (Percentage > 80)
	{
		Grade = "B-";
	}
	else if (Percentage > 77)
	{
		Grade = "C+";
	}
	else if (Percentage > 73)
	{
		Grade = "C";
	}
	else if (Percentage > 70)
	{
		Grade = "C-";
	}
	else if (Percentage > 67)
	{
		Grade = "D+";
	}
	else if (Percentage > 63)
	{
		Grade = "D";
	}
	else if (Percentage > 60)
	{
		Grade = "D-";
	}
	else
	{
		Grade = "F";
	}

	return Grade;
}

int main()
{
	// Main Variables
	int Percentage;
	bool Advanced = false;
	bool CalculatePercentage;

	// Choose if advanced or basic grades should be given
	std::string Choice;
	std::cout << "Advanced grades? (y/n) ";
	std::cin >> Choice;
	
	if (Choice == "y")
	{
		Advanced = true;
	}
	else 
	{
		Advanced = false;
	}

	// Get percentage from user
	// Used to calculate grade
	std::cout << "Percentage: ";
	std::cin >> Percentage;

	if (Advanced)
	{
		std::cout << "Grade: " << AdvancedCalculate(Percentage) << std::endl;
	}
	else
	{
		std::cout << "Grade: " << BasicCalculate(Percentage) << std::endl;
	}

	system("Pause");
	return 0;
}