#include <stdio.h>

// Step 1: Function to print numbers from 1 to N
void printOneToN(int n){
    printf("\n--- Printing 1 to %d ---\n", n);
    // Step 9: Using a loop inside the function
    for (int i = 1; i <= n; i++){
        printf("%d ", i);
    }
    printf("\n");
}

// Step 2: Function to print even numbers up to N
void printEven(int n){
    printf("\n--- Printing Even Numbers up to %d ---\n", n);
    // Step 9: Using a loop inside the function
    for (int i = 1; i <= n; i++){
        if (i % 2 == 0){
            printf("%d ", i);
        }
    }
    printf("\n");
}

// Step 3: Function to print odd numbers up to N
void printOdd(int n){
    printf("\n--- Printing Odd Numbers up to %d ---\n", n);
    // Step 9: Using a loop inside the function
    for (int i = 1; i <= n; i++){
        if (i % 2 != 0){
            printf("%d ", i);
        }
    }
    printf("\n");
}

int main(){
    int choice, n;

    // Step 4: Display a menu
    printf("MENU:\n");
    printf("1. Print numbers from 1 to N\n");
    printf("2. Print even numbers up to N\n");
    printf("3. Print odd numbers up to N\n");

    // Step 5: Ask user for choice
    printf("Enter your choice (1-3): ");
    // Step 6: Store choice in a variable
    scanf("%d", &choice);

    // Asking for the limit N (Required for all functions)
    if (choice >= 1 && choice <= 3){
        printf("Enter the value for N: ");
        scanf("%d", &n);
    }
    else{
        printf("Invalid choice!\n");
        return 1; // Exit if choice is bad
    }

    // Step 7: Use switch-case to match choice
    switch (choice){
    case 1:
        // Step 8: Call corresponding function
        printOneToN(n);
        break;
    case 2:
        printEven(n);
        break;
    case 3:
        printOdd(n);
        break;
    default:
        printf("Invalid Option selected.\n");
    }

    // Step 10: The program ends here naturally
    return 0;
}