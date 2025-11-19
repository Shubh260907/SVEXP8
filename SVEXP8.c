#include <stdio.h>

int main() {


    const int MINIMUM_ELIGIBLE_AGE = 18;

    int age;

    printf("--- Spark Savings Bank Eligibility Checker ---\n");
    printf("Please enter your age: ");

    scanf("%d", &age);

    printf("\n--- Checking Status ---\n");

    if (age <= 0) {
        printf("Error: Invalid Age.\n");
        printf("Please enter a valid, positive number.\n");
    }
    else if (age < MINIMUM_ELIGIBLE_AGE) {
        printf("Status: NOT ELIGIBLE YET\n");
        printf("We apologize, but you must be %d or older to open an account.\n", MINIMUM_ELIGIBLE_AGE);
        printf("We look forward to having you as a customer in the future!\n");
    }
    else {
        printf("Status: ELIGIBLE\n");
        printf("Congratulations! You are eligible to open a savings account.\n");
        printf("Welcome to Spark Savings Bank!\n");
    }

    return 0;
}
