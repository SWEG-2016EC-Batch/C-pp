# Algorithm 
## steps

1. Set `cont = 1` to enable continuous grading until the user opts out.

2. **Repeat While `cont == 1`**:
     - Prompt the user to enter scores for the following:
       - `test` (15%)
       - `quiz` (5%)
       - `project` (20%)
       - `assignment` (10%)
       - `final_` (50%)
     - Compute `total = test + quiz + project + assignment + final_`.

3. **Validate Total Score**:
   - If `total > 100` or `total < 0`:
     - Display an error message: "Invalid assessment result!"
     - Terminate the program using `exit(0)`.

4. **Determine Grade**:
   - Based on the `total`, assign a grade:
     - `90 <= total <= 100`: Grade `A+`.
     - `80 <= total < 90`: Grade `A`.
     - `75 <= total < 80`: Grade `B+`.
     - `60 <= total < 75`: Grade `B`.
     - `55 <= total < 60`: Grade `C+`.
     - `45 <= total < 55`: Grade `C`.
     - `30 <= total < 45`: Grade `D`.
     - `total < 30`: Grade `F`.

5. Show the `total` score and corresponding grade letter.

6.Ask if the user wants to calculate another grade.
   - If the user inputs `1`, repeat the process; otherwise, terminate the program.

7. **End**.

  ```mermaid
flowchart TD
    A((Start)) --> B[Set cont = 1]
    B --> C{cont == 1?}
    C -- Yes --> D[/Input Test, Quiz, Project, Assignment, Final/]
    D --> E[Calculate Total = Test + Quiz + Project + Assignment + Final]
    E --> F{Total > 100 or Total < 0?}
    F -- Yes --> G[/Display "Invalid Assessment Result!" and Exit/]
    F -- No --> H{Determine Grade}
    H -- Total >= 90 --> I[Grade = A+]
    H -- 80 <= Total < 90 --> J[Grade = A]
    H -- 75 <= Total < 80 --> K[Grade = B+]
    H -- 60 <= Total < 75 --> L[Grade = B]
    H -- 55 <= Total < 60 --> M[Grade = C+]
    H -- 45 <= Total < 55 --> N[Grade = C]
    H -- 30 <= Total < 45 --> O[Grade = D]
    H -- Total < 30 --> P[Grade = F]
    I --> Q[/Display Total and Grade/]
    J --> Q
    K --> Q
    L --> Q
    M --> Q
    N --> Q
    O --> Q
    P --> Q
    Q --> R[Prompt Calculate Another Grade? ]
    R --> S{Input == 1?}
    S -- Yes --> C
    S -- No --> T((End))
```
   
   
