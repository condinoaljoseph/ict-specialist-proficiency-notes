// Write a program that outputs a diagonal pattern using an *. 
// Use an && or || logical operators.
#include <iostream>

int main () {
	int range;

	std::cout << "number here: ";
	std::cin >> range;

	for (int i = 1; i <= range; i++) 
    {
		for (int j = 1; j<=i; j++) 
        {
			if (j == 1 || j == i || i == range) 
            {
				std::cout << "+";
			} 
            else 
            {
				std::cout << "-";
			}
		}
		std::cout << "\n";
	}

	return 0;
}


// Box pattern
#include <iostream>

int main() {
    int x;
	std::cout << "box number: ";
	std::cin >> x;

	// algo
	for (int i = 1; i<=x; i++) {
		for (int j = 1; j<=x; j++) {
			std::cout << "*";
		}
		std::cout << "\n";
	}

	return 0;
}


// ++++++++++
// +        +
// +        +
// +        +
// +        +
// +        +
// +        +
// +        +
// +        +
// ++++++++++

#include <iostream>

int main() {
    int range = 10;

	for (int i = 1; i<=range; i++) {
		for (int j = 1; j<=range; j++) {
			if (j == 1 || j == range || i == 1 || i == range) {
				std::cout <<  "+";
			} else {
				std::cout << " ";
			}
		}
		std::cout << "\n";
	}
}