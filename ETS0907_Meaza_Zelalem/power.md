# Problem Analysis
1. **Input:** base(x), exponent(y).
2. **Process:** multiplying x by itself y times.
3. **Output:** Result


# Algorithm
## Steps:
1. **Start**
2. **Input the base number (x)**
   - If the input is invalid, display "Invalid input!" and terminate the program.
3. **Input the power number (y)**
   - If the input is invalid, display "Invalid input!" and terminate the program.
4. **Check if the power number (y) is greater than or equal to 0:**
   - If `y >= 0`, calculate `x^y` using a loop:
     - Initialize `product = 1`.
     - Multiply `product` by `x` for `y` times.
     - Display the result.
   - If `y < 0`, calculate `1 / x^(-y)`:
     - Initialize `result = 1.0`.
     - Multiply `result` by `x` for `-y` times.
     - Display the result as `1 / result`.
5. **End**

   # Flowchart
 ```mermaid
flowchart TD
    A((Start)) --> B[/Input base number x/]
    B --> C{Is input valid?}
    C -->|No| D[/Display "Invalid input!"/]
    C -->|Yes| E[/Input power number y/]
    E --> F{Is input valid?}
    F -->|No| D
    F -->|Yes| G{Is y >= 0?}
    G -->|Yes| H[Calculate x^y]
    H --> I[/Display result/]
    G -->|No| J[Calculate 1 / x^-y]
    J --> I
    I --> K((End))
```


