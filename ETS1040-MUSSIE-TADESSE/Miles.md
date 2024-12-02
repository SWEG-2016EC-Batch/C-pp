The provided C++ program that calculates the number of miles an automobile can drive without refueling. The pseudocode breaks down the logic into clear, structured steps.

## Pseudocode for Automobile Fuel Calculation Program

### Step 1: Start
- **Initialize the program.**

### Step 2: Declare Variables
- **Declare variables:**
  - `fuelTankCapacity` (float)
  - `milesPerGallon` (float)
  - `totalMiles` (float)

### Step 3: Input Fuel Tank Capacity
1. **Loop until valid input is received:**
   - Display "Enter the capacity of your automobile fuel tank in gallons:"
   - Input `fuelTankCapacity`
   
2. **Validate Input:**
   - IF input is invalid (`cin.fail()`) OR `fuelTankCapacity < 0` THEN:
     - Clear the error flag (`cin.clear()`)
     - Ignore invalid input until newline (`cin.ignore()`)
     - Display "Please enter a valid positive number!"
   - ELSE:
     - Exit loop (valid input received)

### Step 4: Input Miles Per Gallon
1. **Loop until valid input is received:**
   - Display "Enter the miles per gallon your automobile can achieve:"
   - Input `milesPerGallon`
   
2. **Validate Input:**
   - IF input is invalid (`cin.fail()`) OR `milesPerGallon < 0` THEN:
     - Clear the error flag (`cin.clear()`)
     - Ignore invalid input until newline (`cin.ignore()`)
     - Display "Please enter a valid positive number!"
   - ELSE:
     - Exit loop (valid input received)

### Step 5: Calculate Total Miles
- **Compute total miles that can be driven without refueling:**
  - `totalMiles = milesPerGallon * fuelTankCapacity`

### Step 6: Output Result
- **Display the result:**
  - Output "The number of miles your automobile can drive without refueling is:", `totalMiles`, "miles"

### Step 7: End
- **Terminate the program.**

# Flow Chart
```mermaid
flowchart TD
    Start([Start]) 
    --> InputTank[/"Enter the tank capacity (gallons):"/]
    InputTank 
    --> InputMilePerGallon[/"Enter the miles per gallon the automobile can drive:"/]
    InputMilePerGallon 
    --> ReadInput["Read the capacity of the tank and miles per gallon"]
    ReadInput 
    --> CalculateTotalMiles["Calculate total miles = tank capacity * miles per gallon"]
    CalculateTotalMiles 
    --> DisplayResult[/"Display: 'The number of miles the automobile can drive without refueling is: total miles'"/]
    DisplayResult 
    --> End([End])



