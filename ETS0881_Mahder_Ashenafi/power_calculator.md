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
    A((Start)) --> B[/Input x/]
    B --> C[/Input y/]
    
    C --> D{Is x == 0?}
    
    D -->|Yes| E{Is y <= 0?}
    E -->|Yes| F[/Display "Undefined" and Exit Program/]
    E -->|No| G[/Display "0 ^ y is 0" and Exit Program/]
    
    D -->|No| H{Is y > 0?}
    H -->|Yes| I[Loop: Multiply product by x, y times]
    H -->|No| J{Is y < 0?}
    J -->|Yes| K[Loop: Multiply product by 1/x, absolute y times]
    J -->|No| L[Set product = 1]
    
    I --> M[/Display result: x ^ y = product/]
    K --> M
    L --> M
    F --> N((End))
    G --> N
    M --> N((End))

```

