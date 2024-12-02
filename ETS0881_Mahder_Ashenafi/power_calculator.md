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
    B --> C{Is input for x valid?}
    
    C -->|No| D[/Display "Invalid input" and Exit Program/]
    C -->|Yes| E[/Input y/]
    
    E --> F{Is input for y valid?}
    
    F -->|No| G[/Display "Invalid input" and Exit Program/]
    F -->|Yes| H{Is x == 0?}
    
    H -->|Yes| I{Is y <= 0?}
    I -->|Yes| J[/Display "Undefined" and Exit Program/]
    I -->|No| K[/Display "0 ^ y is 0" and Exit Program/]
    
    H -->|No| L{Is y > 0?}
    L -->|Yes| M[Loop: Multiply product by x, y times]
    L -->|No| N{Is y < 0?}
    N -->|Yes| O[Loop: Multiply product by 1/x, absolute y times]
    N -->|No| P[Set product = 1]
    
    M --> Q[/Display result: x ^ y = product/]
    O --> Q
    P --> Q
    J --> R((End))
    K --> R
    Q --> R((End))
    D --> R
    G --> R

```

