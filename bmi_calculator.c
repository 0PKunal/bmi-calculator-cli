#include <stdio.h>

int main() {
    float weight, height_cm, height_m, bmi;

    // Get weight in kilograms
    printf("\nEnter your weight in kilograms: ");
    scanf("%f", &weight);

    // Get height in centimeters
    printf("Enter your height in centimeters: ");
    scanf("%f", &height_cm);

    // Convert height from centimeters to meters
    height_m = height_cm / 100;

    // Calculate BMI
    bmi = weight / (height_m * height_m);

    // Print the BMI
    printf("\nYour Body Mass Index (BMI) is: %.2f\n", bmi);

    // Interpret BMI
    if (bmi < 18.5) {
        printf("Category: Underweight\n\n");
    } else if (bmi < 25) {
        printf("Category: Normal weight\n\n");
    } else if (bmi < 30) {
        printf("Category: Overweight\n\n");
    } else {
        printf("Category: Obese\n\n");
    }

    return 0;
}