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
// +
// ++
// +-+
// +--+
// +---+
// +----+

#include <stdio.h>

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

### Sample 4

```c
#include <stdio.h>

int main() {
	int time, hr, min;

	printf("enter time in 24hr format: \n");
	scanf("%d", &time);

	min = time % 100;
	hr = (time - min) / 100;

	if (hr > 12) {
		printf("%d:%.2d PM", hr - 12, min);
	} else {
		printf("%d:%.2d AM", hr, min);
	}

    return 0;
}
```

### Sample 5

```c
#include<stdio.h>
int main()
{
    int a[10], b[10], c[10], i, j, k=0, x, count;
    printf("Enter 10 elements for array A: ");
    for(i=0; i<10; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Enter 10 elements for array B: ");
    for(i=0; i<10; i++)
    {
        scanf("%d", &b[i]);
    }
    for(i=0; i<10; i++)
    {
        for(j=0; j<10; j++)
        {
            if(a[i]==b[j])
            {
                count = 0;
                for(x=0; x<k; x++)
                {
                    if(a[i]==c[x])
                        count++;
                }
                if(count==0)
                {
                    c[k] = a[i];
                    k++;
                }
            }
        }
    }
    printf("\nArray C (Contains Common Elements from two given Array):\n");
    for(i=0; i<k; i++)
    {
        printf("%d ", c[i]);
    }
    return 0;
}
```
