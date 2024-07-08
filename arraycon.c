/*1. write a c program to find the number of occurrences of 2nd input in 1st input.        
sample input: 19998 , 9                                                                    
output:3*/

#include <stdio.h>

int main() {
    int n, m, c= 0;  
    scanf("%d %d", &n, &m); //19998 9

    while (n > 0) {
        if (n % 10 == m) {
            c++;
        }
        n /= 10;
    }
    printf(" %d\n", c); //3
    
    return 0;
}

______________________________________________________________________________________________________________________________________________________________________________________________________________________
/*2. write a c program to print prime number with in a range dividing with a coama.*/

#include <stdio.h>

int main() {
    int low, high, i, flag;

    scanf("%d %d", &low, &high);

    printf("Prime numbers between %d and %d are: ", low, high);

    while (low < high) {
        flag = 0;

        if (low <= 1) {
            ++low;
            continue;
        }

        for (i = 2; i <= low / 2; ++i) {
            if (low % i == 0) {
                flag = 1;
                break;
            }
        }

        if (flag == 0)
            printf("%d, ", low);  // 2,3,5,7...
      
        ++low;
    }

    return 0;
}

______________________________________________________________________________________________________________________________________________________________________________________________________________________
/*3. write a c program to sort the given elements in ascending order*/

#include <stdio.h>

void bubbleSort(int arr[], int n) {
	int i,j;
    for (i = 0; i < n-1; i++) {
        for (j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

void printArray(int arr[], int size) {
    int i;
	for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(arr)/sizeof(arr[0]);

    bubbleSort(arr, n);
    printf("Sorted array in ascending order: \n");
    printArray(arr, n);    //11 12 22 25 34 64 90
    
    return 0;
}

______________________________________________________________________________________________________________________________________________________________________________________________________________________
/*4. write a cprogram to sort the given elements in ascending order alternatively*/

#include <stdio.h>

void bubbleSort(int arr[], int n) {
	int i,j;
    for (i = 0; i < n-1; i++) {
        for (j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

void printArray(int arr[], int size) {
    int i;
	for (i = 0; i < size; i+=2) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(arr)/sizeof(arr[0]);

    bubbleSort(arr, n);
    printf("Sorted array in ascending order of alternate elements: \n"); //11 22 34 90
    printArray(arr, n);
    
    return 0;
}

______________________________________________________________________________________________________________________________________________________________________________________________________________________
/*5. write a c program to sort first half in ascending order and second half in descending.*/

#include <stdio.h>

void bubbleSortAscending(int arr[], int n) {
	int i,j;
    for (i = 0; i < n-1; i++) {
        for (j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                // Swap arr[j] and arr[j+1]
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

void bubbleSortDescending(int arr[], int n) {
	int i,j;
    for (i = 0; i < n-1; i++) {
        for ( j = 0; j < n-i-1; j++) {
            if (arr[j] < arr[j+1]) {
                // Swap arr[j] and arr[j+1]
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

// Function to print an array
void printArray(int arr[], int size) {
	int i;
    for ( i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[] = {64, 34, 25, 12, 22, 11, 90, 55, 45, 78};
    int n = sizeof(arr)/sizeof(arr[0]);
    int mid = n / 2;

    printf("Original array: \n");
    printArray(arr, n);

    bubbleSortAscending(arr, mid);

    bubbleSortDescending(arr + mid, n - mid);

    printf("Array after sorting first half in ascending and second half in descending order: \n");
    printArray(arr, n);

    return 0;
}

______________________________________________________________________________________________________________________________________________________________________________________________________________________
/*6. write a c program to add two matrices */

#include <stdio.h>

int main() {
    int matrix1[2][2], matrix2[2][2], result[2][2];


    printf("Enter elements for the first 2x2 matrix:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("Enter element [%d][%d]: ", i, j);
            scanf("%d", &matrix1[i][j]);
        }
    }

    printf("Enter elements for the second 2x2 matrix:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("Enter element [%d][%d]: ", i, j);
            scanf("%d", &matrix2[i][j]);
        }
    }

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            result[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }

    printf("The resultant matrix after addition is:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}

______________________________________________________________________________________________________________________________________________________________________________________________________________________
/* 7.write a c program to find the coordinates of the element in a 2d array and "print element not found" if element is not there.*/

#include <stdio.h>

void findElement(int arr[3][3], int rows, int cols, int element) {
    int found = 0;

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (arr[i][j] == element) {
                printf("Element %d found at coordinates (%d, %d)\n", element, i, j);
                found = 1;
                break;
            }
        }
        if (found) break;
    }

    if (!found) {
        printf("Element not found\n");
    }
}

int main() {
    int rows = 3, cols = 3;
    int arr[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int element;
    printf("Enter the element to find: ");
    scanf("%d", &element);

    findElement(arr, rows, cols, element);

    return 0;
}
______________________________________________________________________________________________________________________________________________________________________________________________________________________
/*8.write a c program to take n number of array elements and print the number of occurrences  for all elements(digit frequency)*/

#include <stdio.h>
void countFrequency(int arr[], int n) {
    int visited[n];
    for (int i = 0; i < n; i++) {
        visited[i] = 0;
    }

    // Count the frequency of each element
    for (int i = 0; i < n; i++) {
        if (visited[i] == 1)
            continue;

        int count = 1;
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;
                visited[j] = 1;
            }
        }
        printf("Element %d occurs %d times\n", arr[i], count);
    }
}

int main() {
    int n;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Frequency of elements:\n");
    countFrequency(arr, n);

    return 0;
}
_____________________________________________________________________________________________________________________________________________________________________________________________________________________
