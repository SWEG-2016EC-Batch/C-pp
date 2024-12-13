```mermaid
flowchart TD
    A((Start)) --> B[/Input Basic Salary/]
    B --> C[/Input Worked Hours/]
    C --> D[/Input Bonus Rate/]
    D --> E{Worked Hours > 40?}
    E -- Yes --> F[/Input Extra Hours/]
    E -- No --> G[Set Extra Hours = 0]
    F --> H[Calculate Bonus = Extra Hours * Bonus Rate]
    G --> H
    H --> I[Calculate Gross Salary = Basic Salary + Bonus]
    I --> J[Calculate Pension = Basic Salary * 0.07]
    J --> K{Determine Tax Rate}
    K -- Salary <= 200 --> L[Tax Rate = 0]
    K -- Salary <= 600 --> M[Tax Rate = 0.1]
    K -- Salary <= 1200 --> N[Tax Rate = 0.15]
    K -- Salary <= 2000 --> O[Tax Rate = 0.2]
    K -- Salary <= 3500 --> P[Tax Rate = 0.25]
    K -- Salary > 3500 --> Q[Tax Rate = 0.3]
    L --> R[Calculate Tax = Gross Salary * Tax Rate]
    M --> R
    N --> R
    O --> R
    P --> R
    Q --> R
    R --> S[Calculate Net Pay = Gross Salary - Pension - Tax]
    S --> T[/Output Bonus, Gross Salary, Tax, Pension, and Net Pay/]
    T --> U((End))
```
# Algorithm to Calculate Net Pay of an Employee

1.Prompt the user to enter the basic salary.
   - Store it in `basic_salary`.

2.  Prompt the user to enter the number of worked hours.
   - Store it in `worked_hours`.

3. Prompt the user to enter the bonus rate.
   - Store it in `bonus_rate`.

4. If `worked_hours > 40`, prompt the user to enter extra hours worked.
   - Store it in `extra_hour`.

5. Compute `bonus = extra_hour * bonus_rate`.

6. Compute `gross_salary = basic_salary + bonus`.

7. Compute `pension = basic_salary * 0.07`.

8. -If `basic_salary <= 200`, set `tax_rate = 0`.
   - Else if `basic_salary <= 600`, set `tax_rate = 0.1`.
   - Else if `basic_salary <= 1200`, set `tax_rate = 0.15`.
   - Else if `basic_salary <= 2000`, set `tax_rate = 0.2`.
   - Else if `basic_salary <= 3500`, set `tax_rate = 0.25`.
   - Otherwise, set `tax_rate = 0.3`.

9. Compute `tax = gross_salary * tax_rate`.

10. Compute `net_pay = gross_salary - pension - tax`.

11.  Display `bonus`, `gross_salary`, `tax`, `pension`, and `net_pay`.
