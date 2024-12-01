# Problem Analysis
1. **Input:** base, exponent
2. **Process:** Use the pow() function to calculate the result of raising the base (x) to the power of the exponent (y)
3. **Output:** Result


# Algorithm
## Steps:
1.Accept the base (x).
   - Validate the input:
     - If the input is invalid (non-numeric), display an error and terminate.

2. Accept the exponent (y).
   - Validate the input:
     - If the input is invalid (non-numeric), display an error and terminate.

3. Compute the result of raising the base to the exponent using the formula:
 result = pow(x, y)
     

4.  Display the computed result.

5. End Program.
   # Flowchart
  ```mermaid
flowchart TD
    A[Start] --> B[Input Base]
    B --> C{Is input valid?}
    C -->|No| D[Display error and terminate]
    C -->|Yes| E[Input Exponent]
    E --> F{Is input valid?}
    F -->|No| D
    F -->|Yes| G[Calculate Exponentiation]
    G --> H[Display Result]
    H --> I[End]
