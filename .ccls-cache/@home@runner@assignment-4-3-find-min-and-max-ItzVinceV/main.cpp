// Make a program that finds the minimum and maximum values among three integer values.

// int num1, num2, num3;
// cin >> num1 >> num2 >> num3;
// Find the min and max among three values.
// Display the numbers with ascending order ( min, other, max).

#include <iostream>
using namespace std;

int main()
{
	int num1, num2, num3;

	cin >> num1 >> num2 >> num3;

	if (num1 > num2)
	{
		if ( num2 < num3)
			cout << num2 << "is min number\n";
		else // num2 >= num3
			cout << num3 << "is min number\n";
	}
	else // num1 <= num2
	{
		if (num1 < num3)
			cout << num1 << "is min number\n";
		else // num3 >= nu
			
	}
		
			
		
} 