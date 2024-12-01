### Pseudocode Steps

1. **Start Program**

2. **Declare Variables**
   - Initialize `working_hour` as FLOAT
   - Initialize `bonus_rate` as FLOAT
   - Initialize `base_salary` as FLOAT
   - Initialize `net_salary` as FLOAT
   - Initialize `pension` as FLOAT
   - Initialize `tax` as FLOAT
   - Initialize `name` as STRING

3. **Prompt User for Name**
   - PRINT "Enter your name: "
   - READ `name`

4. **Input Base Salary**
   1. WHILE TRUE DO
      1. PRINT "Enter your base salary: "
      2. READ `base_salary`
      3. IF (`base_salary` is invalid OR `base_salary` < 0) THEN
         - CLEAR input error state (reset input stream)
         - IGNORE invalid input (discard the rest of the line)
         - PRINT "Enter a valid input!"
      4. ELSE
         - BREAK loop (exit the loop if input is valid)
      END IF
   END WHILE

5. **Input Weekly Working Hours**
   1. WHILE TRUE DO
      1. PRINT "Enter your weekly working hour: "
      2. READ `working_hour`
      3. IF (`working_hour` is invalid OR `working_hour` < 0) THEN
         - CLEAR input error state (reset input stream)
         - IGNORE invalid input (discard the rest of the line)
         - PRINT "Enter a valid input!"
      4. ELSE
         - BREAK loop (exit the loop if input is valid)
      END IF
   END WHILE

6. **Input Bonus Rate per Hour**
   1. WHILE TRUE DO
      1. PRINT "Enter your bonus rate per hour: "
      2. READ `bonus_rate`
      3. IF (`bonus_rate` is invalid OR `bonus_rate` < 0) THEN
         - CLEAR input error state (reset input stream)
         - IGNORE invalid input (discard the rest of the line)
         - PRINT "Enter a valid input!"
      4. ELSE
         - BREAK loop (exit the loop if input is valid)
      END IF
   END WHILE

7. **Calculate Financials**
   - Calculate pension:
     - `pension` = (`base_salary` + (`working_hour` * `bonus_rate`)) * 0.05
   - Calculate tax:
     - `tax` = (`base_salary` - `pension`) * 0.15
   - Calculate net salary:
     - `net_salary` = `base_salary` - `pension` - `tax` + (`working_hour` * `bonus_rate`)

8. **Display Results**
   - PRINT "Employee name: ", `name`
   - PRINT "Your gross salary is: ", (`base_salary` + (`working_hour` * `bonus_rate`))
   - PRINT "Your net salary is: ", `net_salary`
   - PRINT "Your bonus payment is: ", (`working_hour` * `bonus_rate`)

9. **End Program**

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



