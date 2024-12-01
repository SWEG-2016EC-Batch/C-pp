# Problem Analysis
1. **Input:** Fullname, Weekly working hour, Bonus rate per hour, Base salary.
2. **process:** bonus payment=weekly working hour*bonus rate per hour, gross salary=base salary+ bonus payment, pension =gross salary*0.05, tax=gross_salary*0.15, net salary=gross salary - tax - pension.
3. **output:** Fullname, Bonus payment, Gross Salary, Pension , Net Salary.

# Algorithm

## Steps:
1. Accept the user's  full name.

2. Accept the weekly working hours.

3. Acept the bonus rate per hour.

4. Accept base salary.

5.Compute the bonus payment using the formula:
      bonus_payment = weekly_working_hours * bonus_rate_per_hour
     

6. Compute the gross salary using the formula:
     gross_salary = base_salary + bonus_payment.

7. Compute the pension deduction using the formula:
     pension = gross_salary * 0.05

8. Compute the tax deduction using the formula:

tax = gross_salary * 0.15

10. Compute the net salary using the formula:
     net_salary = gross_salary - tax - pension
     

11.  Display the following:
      - Full Name
      - Bonus Payment
      - Gross Salary
      - Pension Deduction
      - Tax Deduction
      - Net Salary

12. End Program.

    # Flowchart
    ```mermaid
flowchart TD
    A[Start] --> B[Input Full Name]
    B --> C[Input Weekly Working Hours]
    C --> D[Input Bonus Rate per Hour]
    D --> E[Input Base Salary]
    E --> F[Calculate Bonus Payment]
    F --> G[Calculate Gross Salary]
    G --> H[Calculate Pension Deduction]
    H --> I[Calculate Tax Deduction]
    I --> J[Calculate Net Salary]
    J --> K[Display Results]
    K --> L[End]

