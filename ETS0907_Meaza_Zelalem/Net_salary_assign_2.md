# Algorithm 

1. Prompt the user to enter their basic salary.
   - Store the input in `basic_salary`.

2. Compute `pension_deduction` as 7% of `basic_salary`.

3. **Input Worked Hours**:
   - Prompt the user to enter total hours worked.
   - Store the input in `worked_hour`.

4.If `worked_hour > 40`:
     - Prompt the user to enter the bonus rate.
     - Compute the bonus as `(worked_hour - 40) * bonus_rate`.
   - Else:
     - Set `bonus` to 0.

5.Based on the range of `basic_salary`, set `tax_rate`:
     - `0` if salary is `< 200`.
     - `0.1` if salary is between `200` and `600`.
     - `0.15` if salary is between `600` and `1200`.
     - `0.2` if salary is between `1200` and `2000`.
     - `0.25` if salary is between `2000` and `3500`.
     - `0.3` if salary is `> 3500`.

6. `gross_salary = basic_salary + bonus`.

7.If `tax_rate == 0`:
     - `net_pay = basic_salary - pension_deduction` (for no overtime).
     - `net_pay = gross_salary - pension_deduction` (for overtime).
   - Else:
     - Calculate `tax_deduction = gross_salary / (basic_salary * tax_rate)`.
     - Compute `net_pay = gross_salary - pension_deduction - tax_deduction`.

8. Display gross salary, tax deduction, and net pay.

# Flowchart 

```mermaid
flowchart TD
    A[Start] --> B[Input Basic Salary]
    B --> C[Calculate Pension Deduction: 7% of Basic Salary]
    C --> D[Input Worked Hours]
    D --> E{Worked Hours > 40?}
    E -- Yes --> F[Input Bonus Rate]
    F --> G[Calculate Bonus: Worked Hours - 40 * Bonus Rate]
    E -- No --> H[Set Bonus to 0]
    G --> I[Determine Tax Rate]
    H --> I
    I --> J{Basic Salary Range}
    J --> K[Tax Rate = 0 if Basic Salary < 200]
    J --> L[Tax Rate = 0.1 if Basic Salary 200-600]
    J --> M[Tax Rate = 0.15 if Basic Salary 600-1200]
    J --> N[Tax Rate = 0.2 if Basic Salary 1200-2000]
    J --> O[Tax Rate = 0.25 if Basic Salary 2000-3500]
    J --> P[Tax Rate = 0.3 if Basic Salary > 3500]
    K --> Q[Calculate Gross Salary: Basic Salary + Bonus]
    L --> Q
    M --> Q
    N --> Q
    O --> Q
    P --> Q
    Q --> R{Tax Rate == 0?}
    R -- Yes --> S{Worked Hours > 40?}
    S -- Yes --> T[Net Pay = Gross Salary - Pension Deduction]
    S -- No --> U[Net Pay = Basic Salary - Pension Deduction]
    R -- No --> V[Calculate Tax Deduction: Gross Salary / Basic Salary * Tax Rate]
    V --> W[Net Pay = Gross Salary - Pension Deduction - Tax Deduction]
    T --> X[Output Results]
    U --> X
    W --> X
    X --> Y[End]


   
   











