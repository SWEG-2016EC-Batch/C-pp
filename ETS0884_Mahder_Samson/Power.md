# Algorithm
## Steps:
1.Accept the base (x).
   - Validate the input:
     - If the input is invalid (non-numeric), display an error and terminate.

2. Accept the exponent (y).
   - Validate the input:
     - If the input is invalid (non-numeric), display an error and terminate.

3. Initialize product to 1.
4. Use a loop to calculate the power:
 - Repeat y times:
   - Multiply product by x and update product.
     
5.Display the result (product).

6. End the program.
   # Flowchart
  ```mermaid
flowchart TD
   A[Start] --> B[ Enter base number ]
   B --> C{Is base number valid?}
   C -- No --> D[Display error and terminate]
   C -- Yes --> E[ Enter power number ]
   E --> F{Is power number valid?}
   F -- No --> D
   F -- Yes --> G[Initialize product = 1]
   G --> H[Loop from i = 1 to y]
   H --> I[Update product: product = product * x]
   I --> J[Display the result: product]
   J --> K[End]
