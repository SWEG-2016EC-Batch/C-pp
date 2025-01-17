## Pseudocode for Power Calculation Program

### Step 1: Start
- **Initialize the program.**

### Step 2: Declare Variables
- **Declare variables:**
  - `base` (float)
  - `exponent` (float)
  - `result` (float)

### Step 3: Input Base Value
1. **Loop until valid input is received:**
   - Display "Enter the number (base):"
   - Input `base`
   
2. **Validate Input:**
   - IF input is invalid (`cin.fail()`) THEN:
     - Clear the error flag (`cin.clear()`)
     - Ignore invalid input until newline (`cin.ignore()`)
     - Display "Please enter a valid number!"
   - ELSE:
     - Exit loop (valid input received)

### Step 4: Input Exponent Value
1. **Loop until valid input is received:**
   - Display "Enter the exponent:"
   - Input `exponent`
   
2. **Validate Input:**
   - IF input is invalid (`cin.fail()`) THEN:
     - Clear the error flag (`cin.clear()`)
     - Ignore invalid input until newline (`cin.ignore()`)
     - Display "Please enter a valid number!"
   - ELSE:
     - Exit loop (valid input received)

### Step 5: Calculate Result
- **Compute the power:**
  - `result = pow(base, exponent)`

### Step 6: Output Result
- **Display the result:**
  - Output "The number", `base`, "raised to the power of", `exponent`, "is:", `result`

### Step 7: End
- **Terminate the program.**

# Flow Chart
```mermaid

flowchart TD
    Start([Start]) --> InputBase[/"Enter the base number (x):"/]
    InputBase --> InputPower[/"Enter the power (y):"/]
    InputPower --> CalculatePower["Calculate result = pow(x, y)"]
    CalculatePower --> DisplayResult[/"Display: 'x power of y = result'"/]
    DisplayResult --> End([End])

