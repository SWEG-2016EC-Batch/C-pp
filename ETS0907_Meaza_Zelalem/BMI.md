# Problem Analaysis
1. **Input:** height(float, in meters) and weight (float, in killograms).
2. **Process:** BMI= weight / (height * height).
3. **Output:** BMI.

# Algorithm

---

## Steps:

1. Define variables for `height`, `weight`, `BMI`, and a control variable `cont` set to `1`.

2.  Enter a loop that continues while `cont == 1`.

3.  Accept height.
   - Validate the input:
     - If the height is non-numeric or less than or equal to 0 and tryal < 3:
       - Display an error message.
       - redo step 3
       - else if tryal >= 3 exit(0).

4. Accept weight.
   - Validate the input:
     - If the weight is non-numeric or less than or equal to 0 and tryal < 3:
     - restart step 4.
     - else if tryal >= 3 exit(0).
       

5.Compute the BMI using the formula:
     \[
     BMI = \frac{\text{weight}}{\text{height}^2}
     \]

6. Compare the BMI to the following categories:
     - **Underweight:** If `BMI < 18.5`, display "Underweight".
     - **Normal Weight:** If `18.5 ≤ BMI ≤ 24.9`, display "Normal weight".
     - **Overweight:** If `25 ≤ BMI ≤ 29.9`, display "Overweight".
     - **Obesity:** If `BMI ≥ 30`, display "Obesity".

7. Ask the user if they want to continue:
     - If the user inputs `1`, restart the loop.
     - For any other input, exit the loop.

8. Terminate the program after exiting the loop.

---

# Flowchart : Body Mass Index
```mermaid
flowchart TD
    A((Start)) --> B[Initialize variables]
    B --> C[/Input height/]
    C --> D{Is height valid?}
    D -->|No| E[Display error and restart loop]
    D -->|Yes| F[/Input weight/]
    F --> G{Is weight valid?}
    G -->|No| E
    G -->|Yes| H[Calculate BMI]
    H --> I{Determine BMI status}
    I -->|Underweight| J[/Display 'Underweight'/]
    I -->|Normal weight| K[/Display 'Normal weight'/]
    I -->|Overweight| L[/Display 'Overweight'/]
    I -->|Obesity| M[/Display 'Obesity'/]
    J --> N[Ask user to continue?]
    K --> N
    L --> N
    M --> N
    N --> O{Continue?}
    O -->|Yes| C
    O -->|No| P((End))
