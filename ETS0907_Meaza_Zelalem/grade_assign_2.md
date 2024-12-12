# Algorithm 

1. **Initialize Variables**:
   - `test`, `quiz`, `assignment`, `project`, `final_exam`, `total_mark`, and `continue_`.

2. **Start While Loop**:
   - Loop continues as long as `continue_ == 1`.

3. **Input Scores**:
   - Prompt the user to enter scores for:
     - `test`
     - `quiz`
     - `assignment`
     - `project`
     - `final_exam`.

4. **Calculate Total Mark**:
   - Use the formula:
     ```
     total_mark = (test * 0.15) + (quiz * 0.05) + (assignment * 0.1) + (project * 0.2) + (final_exam * 0.5)
     ```

5.Based on `total_mark`, assign grades:
     - `A+` for marks >= 90.
     - `A` for marks >= 80.
     - `B+` for marks >= 75.
     - `B` for marks >= 60.
     - `C+` for marks >= 55.
     - `C` for marks >= 45.
     - `D` for marks >= 30.
     - `F` for marks < 30.

6. Print `total_mark` and corresponding grade.

7. Ask the user if they want to grade another result.
   - If the user enters `1`, continue. Otherwise, exit.

8.  If `continue_ != 1`, terminate the program.


## Flowchart 

```mermaid
flowchart TD
    A[Start] --> B[Initialize Variables]
    B --> C[While continue_ == 1]
    C --> D[Input test, quiz, assignment, project, final_exam]
    D --> E[Calculate total_mark]
    E --> F{total_mark >= 90?}
    F -- Yes --> G[A+]
    F -- No --> H{total_mark >= 80?}
    H -- Yes --> I[A]
    H -- No --> J{total_mark >= 75?}
    J -- Yes --> K[B+]
    J -- No --> L{total_mark >= 60?}
    L -- Yes --> M[B]
    L -- No --> N{total_mark >= 55?}
    N -- Yes --> O[C+]
    N -- No --> P{total_mark >= 45?}
    P -- Yes --> Q[C]
    P -- No --> R{total_mark >= 30?}
    R -- Yes --> S[D]
    R -- No --> T[F]
    G --> U[Display total_mark and grade]
    I --> U
    K --> U
    M --> U
    O --> U
    Q --> U
    S --> U
    T --> U
    U --> V[Prompt: Continue?]
    V -- Yes (1) --> C
    V -- No --> W[End]
```

