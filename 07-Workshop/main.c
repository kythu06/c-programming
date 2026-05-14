#include <stdio.h>

#define MAX_SIZE 100

//Function prototypes
void inputArray(int arr[], int *size);
void displayArray(int arr[], int size);
int searchValue(int arr[], int size, int target);
void calculateStatistics(int arr[], int size);

int main() {
    int arr[MAX_SIZE], size = 0, target, index, choice;

	// Menu Loop
    do {
    	//Display the menu
        printf("\n--- Menu ---\n");
        printf("1. Input data\n");
        printf("2. Display array\n");
        printf("3. Search for a number\n");
        printf("4. Calculate statistics (Sum, Average, Max, Min)\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
            	// Input data
                inputArray(arr, &size);
                break;
            case 2:
            	// Display array
                if (size > 0)
                    displayArray(arr, size);
                else
                    printf("No data to display. Please input data first.\n");
                break;
            case 3:
                if (size > 0) {
                    printf("Enter number to search: ");
                    scanf("%d", &target);
                    index = searchValue(arr, size, target);
                    if (index != -1)
                        printf("Value %d found at index %d\n", target, index);
                    else
                        printf("Value %d not found in array\n", target);
                } else {
                    printf("No data to search. Please input data first.\n");
                }
                break;
            case 4:
                if (size > 0)
                    calculateStatistics(arr, size);
                else
                    printf("No data to calculate. Please input data first.\n");
                break;
            case 5:
                printf("Exiting program...\n");
                break;
            default:
                printf("Invalid choice. Please select from 1 to 5.\n");
        }
    } while (choice != 5);

    return 0;
}

void inputArray(int arr[], int *size) {
    int n;
    do {
        printf("Enter the number of elements (1-100): ");
        scanf("%d", &n);
        if (n < 1 || n > 100)
            printf("Invalid size! Please enter a number between 1 and 100.\n");
    } while (n < 1 || n > 100);

    printf("Enter %d numbers:\n", n);
    for (int i = 0; i < n; i++) {
        printf("Number %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    *size = n;
}

void displayArray(int arr[], int size) {
    printf("Array: ");
    for (int i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");

    int hasEven = 0;
    printf("Even numbers: ");
    for (int i = 0; i < size; i++) {
        if (arr[i] % 2 == 0) {
            printf("%d ", arr[i]);
            hasEven = 1;
        }
    }
    if (!hasEven)
        printf("No even numbers found.");
    printf("\n");
}

int searchValue(int arr[], int size, int target) {
    int index = -1;
    for (int i = 0; i < size; i++) {
        if (arr[i] == target)
            index = i;
    }
    return index;
}

void calculateStatistics(int arr[], int size) {
    int sum = 0, min = arr[0], max = arr[0];

    for (int i = 0; i < size; i++) {
        sum += arr[i];
        if (arr[i] < min) min = arr[i];
        if (arr[i] > max) max = arr[i];
    }

    float avg = (float)sum / size;

    printf("Sum = %d\n", sum);
    printf("Average = %.2f\n", avg);
    printf("Maximum = %d\n", max);
    printf("Minimum = %d\n", min);
}
