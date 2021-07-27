# Program Simulation

## Conditional Statement

```c
#include <stdio.h>

int main() {
	int year;

    printf("enter year: ");
	scanf("%d", &year);

	if (year % 4 == 0) {
		printf("yes");
	} else {
		printf("no");
	}

    return 0;
}

```

## Loops

### Sample 1

```c
#include <stdio.h>

// +
// ++
// +-+
// +--+
// +---+
// +----+

int main () {
	int range;

	printf("number here: ");
	scanf("%d", &range);

	for (int i = 1; i<=range; i++) {
		for (int j = 1; j<=i; j++) {
			if (j == 1 || j == i || i == range) {
				printf("+");
			} else {
				printf("-");
			}
		}
		printf("\n");
	}

	return 0;
}
```

### Sample 2

```c
#include <stdio.h>

int main() {
    int x;
	printf("box number: ");
	scanf("%d", &x);

	// algo
	for (int i = 1; i<=x; i++) {
		for (int j = 1; j<=x; j++) {
			printf("*");
		}
		printf("\n");
	}

	return 0;
}

```

### Sample 3

```c

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

#include <stdio.h>

int main() {
    int range = 10;

	for (int i = 1; i<=range; i++) {
		for (int j = 1; j<=range; j++) {
			if (j == 1 || j == range || i == 1 || i == range) {
				printf("+");
			} else {
				printf(" ");
			}
		}
		printf("\n");
	}
}
```
