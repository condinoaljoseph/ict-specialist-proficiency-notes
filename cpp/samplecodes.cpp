/* Takes a year as input.
Checks to see if the year is a four-digit number.
Displays whether or not the year falls on a leap year.
*/
#include <iostream>

int main() {
    int y = 0;
    
    std::cout << "Enter year: ";
    std::cin >> y;
    
    if (y < 1000 || y > 9999) {
    
        std::cout << "Invalid entry.\n";
    
    }
    else if (y % 4 == 0 && y % 100 != 0 || y % 400 == 0) {
    
        std::cout << y;
        std::cout << " falls on a leap year.\n";
    
    }
    else {
        std::cout << y;
        std::cout << " is not a leap year.\n";
    
    }
 
}



/*
calculate and print a simple list of squares of each numbers.
*/

#include <iostream>

int main() {
  
  int i = 0;
  int square = 0;
  
  // Write a while loop here:
  while (i < 10){
    square = i * i;
    std::cout << i << "   " << square << "\n";
    i++;
  }
  
}



/*
Let's the user inputs a number and guess from 1-10 
till they guess the right answer which is 8! Use a while loop 
to do the program, so they can guess up to 50 times.
*/
#include <iostream>

int main() {

  int guess;
  
  int tries = 0;

  std::cout << "I have a number 1-10.\n";
  std::cout << "Please guess it: ";
  std::cin >> guess;
 
  // Write a while loop here:
  
  while (guess != 8 && tries < 50) {
    std::cout << "Wrong guess, try again: ";
    std::cin >> guess;

    tries++;
  }
  
  if (guess == 8) {
    
    std::cout << "You got it!\n";
  
  }  
  
}



/*
Create a program that prints ther verses of the "99 Bottles" song, 
using decrementing for loop.
*/
#include <iostream>

int main() {

  // Write a for loop here:
  for (int i = 99; i > 0; i--){
    std::cout << i << " bottles of pop on the wall.\n" ;
    std::cout << "Take one down and pass it around.\n" ;
    std::cout << i - 1 <<" bottles of pop on the wall.\n \n";
  }
 
}