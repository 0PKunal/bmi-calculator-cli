# Get weight in kilograms
weight = float(input("\nEnter your weight in kilograms: "))

# Get height in centimeters
height_cm = float(input("Enter your height in centimeters: "))

# Convert height from centimeters to meters
height_m = height_cm / 100

# Calculate BMI
bmi = weight / (height_m ** 2)

# Print the BMI
print(f"\nYour Body Mass Index (BMI) is: {bmi:.2f}")

# Interpret BMI
if bmi < 18.5:
    print("Category: Underweight\n")
elif bmi < 25:
    print("Category: Normal weight\n")
elif bmi < 30:
    print("Category: Overweight\n")
else:
    print("Category: Obese\n")