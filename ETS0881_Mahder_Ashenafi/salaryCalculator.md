Problem:
    Design an algorithm and write a to read an employee name weekly working hours, bonus rate per hour and base salary and find the employees gross-salary, net salary and bonus payment. (Hint: pension rate – 5%, tax: 15%).
Problem Analysis:
    Input : base_salary(float), bonus_rate(float), weekly_working_hours(float)
    Process : 
        Bonus_Payment = (bonus_rate / 100) * weekly_working_hours
        Gross_Salary = base_salary + bonus_payment
        tax = Gross_salary * 0.15
        pension = Gross_salary * 0.05
        net_salary = Gross_salary - pension - tax
    Output : 
        print(Bonus_payment, tax, pension, and net_salary)
Algorithm Design:
    Pseudocode:
        Step 1 : Start
        Step 2 : Accept inputs - base_salary(float), bonus_rate(float), and base_salary(float).
        Step 3 : bonus_payment = (bonus_rate / 100) * base_salary
        Step 4 : gross_salary = base_salary + bonus_payment
        Step 5 : tax = 0.15 * gross_salary
        Step 6 : pension = 0.05 * gross_salary
        Step 7 : net_salary = gross_salary - tax - pension
        Step 8 : Print(bonus_payment, tax, pension, net_salary)
        Step 9 : Stop
         

