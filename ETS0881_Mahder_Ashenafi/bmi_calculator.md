Problem:
    Make a program that calculates the Body Mass Index (BMI) of a person and determine weather the person is in normal weight, under weight or over weight. BMI is calculated as (BMI = w/h*h). Make the program to work for multiple person before terminated.
Problem analysis:
    1. Input : Height(float, in meters), Weight(float, in Kilograms)
    2. Process : BMI = Weight / (Height * Height)
    3. Output : BMI
Algorithm Design:
    Pseudocode:
        Step 1 : Start.
        Step 2 : Declare variables BMI(float), Height(float), Weight(float) and cont(int).
        Step 3 : Accept inputs Height, and Weight.
        Step 4 : Calculate BMI as Weight / (height * height).
        Step 5 : print(BMI).
        Step 6 : Check BMI
            Step 6.1 : if BMI < 18.5 Print(You are under weight)
            Step 6.2 : if 18.5 <= BMI < 24.9 Print(You are normal weight)
            Step 6.3 : else Print(You are over weight)
        Step 7 : cont = if the user wants to continue(1) or not(0).
            Step 7.1 : if cont == 1 goto Step 3
            Step 7.2 : else goto Step 8.
        Step 8 : Stop.
        flowchart TD
    A[Start] --> B[Initialize variables]
    B --> C[Input height]
    C --> D{Is height valid?}
    D -->|No| E[Display error and restart loop]
    D -->|Yes| F[Input weight]
    F --> G{Is weight valid?}
    G -->|No| E
    G -->|Yes| H[Calculate BMI]
    H --> I{Determine BMI status}
    I -->|Underweight| J[Display 'Underweight']
    I -->|Normal weight| K[Display 'Normal weight']
    I -->|Overweight| L[Display 'Overweight']
    I -->|Obesity| M[Display 'Obesity']
    J --> N[Ask user to continue?]
    K --> N
    L --> N
    M --> N
    N --> O{Continue?}
    O -->|Yes| C
    O -->|No| P[End]
