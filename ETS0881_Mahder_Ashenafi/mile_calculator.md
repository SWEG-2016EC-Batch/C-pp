# Problem Analysis
1. **Inputs:** Fuel tank capacity, miles per gallon.
3. **process:** Total miles = fuel tank capacity * miles per gallon.
4. **Output:** Total miles.

# Algorithm

## Steps:
1.  Accept the fuel tank capacity in gallons.
   - Validate the input:
     - If invalid (non-numeric or negative), display an error and terminate.

2. Accept the vehicle's fuel efficiency (miles per gallon).
   - Validate the input:
     - If invalid (non-numeric or negative), display an error and terminate.

3.  Compute the total miles that can be driven using the formula:
   
     `miles` = `capacity` * `miles_per_gallon`
   

4.  Display the total distance the automobile can travel without refueling.

5. End Program.

   # Flowchart:
```mermaid
   flowchart TD
    A((Start)) --> B[/Input fuel tank capacity in gallons/]
    B --> C{Is input valid?}
    C -->|No| D[/Display error and terminate/]
    C -->|Yes| E[/Input miles per gallon/]
    E --> F{Is input valid?}
    F -->|No| D
    F -->|Yes| G[Calculate total miles]
    G --> H[/Display total miles/]
    H --> I((End))
