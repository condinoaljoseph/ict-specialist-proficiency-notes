#include <iostream>
using namespace std;
 
#include <iomanip>
using std::setw;
 
int main () {

   int n[ 5 ] = {54, 3, 4, 9, 7};

   for(int i = 0; i < 5; i++){
       std::cout << n[i] << "\n";
   }
   
   return 0;
}


#include <iostream>

#include <iomanip>
using std::setw;

void cout (int arr[], int l)
{
	for (int i = 0; i<=l - 1; i++){
		std::cout << "%d\n" << arr[i];
	}
};
int main(){
    int arr[5] = {32, 23, 3, 12, 43};
	int arr_count;

	arr_count = sizeof(arr) / sizeof(arr[0]);

	for (int i = 0; i < arr_count; i++) 
    {
		for (int j = 0; j < arr_count; j++) 
        {
			if (arr[j] > arr[j + 1]) 
            {
				int temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	}

	std::cout << arr << arr_count;
    return 0;
}



// LOOP WITH ARRAY |DONE|
#include <iostream>

int main() {
    int marks[5];
	int n;
	int sum = 0;
	int average;

	std::cout << "enter: ";
    std::cin >> n;

	if (n > 5){
		std::cout << "must not greater than 5";
		return 0;
	}

	for (int i = 0; i < n; i++){
        std::cin >> marks[i];

		sum += marks[i];
	}

	average = sum / n;
	std::cout << "average: " << average;

	return 0;
}