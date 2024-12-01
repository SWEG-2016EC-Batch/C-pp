# Problem Analaysis
1. Input: height(float, in meters) and weight (float, in killograms).
2. Process: BMI= weight / (height * height).
3. Output: BMI.

# Algorithm

---

## Steps:

1. Define variables for height, weight, BMI, and a control variable continue_ set to 1.

2.  Enter a loop that continues while continue_ == 1.

3.  Accept height.
   - Validate the input:
     - If the height is non-numeric or less than or equal to 0:
       - Display an error message.
       - Clear the input buffer and ignore invalid input.
       - Restart the loop.

4. Accept weight.
   - Validate the input:
     - If the weight is non-numeric or less than or equal to 0:
       - Display an error message.
       - Clear the input buffer and ignore invalid input.
       - Restart the loop.

5.Compute the BMI using the formula:
     \[
     BMI = \frac{\text{weight}}{\text{height}^2}
     \]

6. Compare the BMI to the following categories:
     - Underweight: If BMI < 18.5, display "Underweight".
     - Normal Weight: If 18.5 ≤ BMI ≤ 24.9, display "Normal weight".
     - Overweight: If 25 ≤ BMI ≤ 29.9, display "Overweight".
     - Obesity: If BMI ≥ 30, display "Obesity".

7. Ask the user if they want to continue:
     - If the user inputs 1, restart the loop.
     - For any other input, exit the loop.

8. Terminate the program after exiting the loop.

---

# Flowchart : Body Mass Index
```mermaid
flowchart TD
    A[Start] --> B[Initialize variables]
    B --> C[Input height]
    C --> D{Is height valid?}
    D -->|No| E[Display error and restart loop]
    D -->|Yes| F[Input weight]
    F --> G{Is weight valid?}
    G -->|No| E
    G -->|Yes| H[Calculate BMI]
    H --> I{Determine BMI }
    I -->|Underweight| J[Display 'Underweight']
    I -->|Normal weight| K[Display 'Normal weight']
    I -->|Overweight| L[Display 'Overweight']
    J --> N[Ask user to continue?]
    K --> N
    L --> N
  
    N --> O{Continue?}
    O -->|Yes| C
    O -->|No| P[End]
