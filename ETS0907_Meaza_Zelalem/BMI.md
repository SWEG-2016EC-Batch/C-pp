# Algorithm: Body Mass Index (BMI) Calculator

This algorithm calculates the Body Mass Index (BMI) based on user inputs for height and weight, determines the BMI status, and allows the user to repeat the process.

---

## Steps:

1. **Initialize Variables:**
   - Define variables for `height`, `weight`, `BMI`, and a control variable `continue_` set to `1`.

2. **Loop Execution:**
   - Enter a loop that continues while `continue_ == 1`.

3. **Input Height:**
   - Prompt the user to input their height.
   - Validate the input:
     - If the height is non-numeric or less than or equal to 0:
       - Display an error message.
       - Clear the input buffer and ignore invalid input.
       - Restart the loop.

4. **Input Weight:**
   - Prompt the user to input their weight.
   - Validate the input:
     - If the weight is non-numeric or less than or equal to 0:
       - Display an error message.
       - Clear the input buffer and ignore invalid input.
       - Restart the loop.

5. **Calculate BMI:**
   - Compute the BMI using the formula:
     \[
     BMI = \frac{\text{weight}}{\text{height}^2}
     \]

6. **Determine BMI Status:**
   - Compare the BMI to the following categories:
     - **Underweight:** If `BMI < 18.5`, display "Underweight".
     - **Normal Weight:** If `18.5 ≤ BMI ≤ 24.9`, display "Normal weight".
     - **Overweight:** If `25 ≤ BMI ≤ 29.9`, display "Overweight".
     - **Obesity:** If `BMI ≥ 30`, display "Obesity".

7. **Prompt to Continue:**
   - Ask the user if they want to continue:
     - If the user inputs `1`, restart the loop.
     - For any other input, exit the loop.

8. **End Program:**
   - Terminate the program after exiting the loop.

---

## Notes:
- Input validation ensures the program handles invalid or non-numeric inputs gracefully.
- The loop allows users to calculate BMI for multiple entries until they choose to exit.
- The BMI status categories are based on standard ranges.

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
