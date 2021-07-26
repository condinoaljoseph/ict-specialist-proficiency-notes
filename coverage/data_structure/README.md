# Data Structure

## Arrays

### Sorting Arrays

```c
#include <stdio.h>

void printArr(int arr[], int l) {
	for(int i = 0; i<=l - 1; i++) {
		printf("%d\n", arr[i]);
	}
}

int main() {
    int arr[5] = {32, 23, 3, 12, 43};
	int arr_count;

	arr_count = sizeof(arr) / sizeof(arr[0]);

	for (int i = 0; i < arr_count; i++) {
		for (int j = 0; j < arr_count; j++) {
			if (arr[j] > arr[j + 1]) {
				int temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	}

	printArr(arr, arr_count);

    return 0;
}
```

### Loop with Array

```c
#include <stdio.h>

int main() {
    int marks[5];
	int n;
	int sum = 0;
	int average;

	printf("enter: ");
	scanf("%d", &n);

	if (n > 5) {
		printf("must not greater than 5");
		return 0;
	}

	for (int i=0; i<n; i++) {
		scanf("%d", &marks[i]);

		sum += marks[i];
	}

	average = sum / n;
	printf("average: %d", average);

	return 0;
}

```
