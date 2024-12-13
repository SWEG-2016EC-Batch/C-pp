```mermaid
flowchart TD
    A[Start] --> B[Set cont = 1]
    B --> C{cont == 1?}
    C -- Yes --> D[Input Test, Quiz, Project, Assignment, Final]
    D --> E[Calculate Total = Test + Quiz + Project + Assignment + Final]
    E --> F{Total > 100 or Total < 0?}
    F -- Yes --> G[Display "Invalid Assessment Result!" and Exit]
    F -- No --> H{Determine Grade}
    H -- Total >= 90 --> I[Grade = A+]
    H -- 80 <= Total < 90 --> J[Grade = A]
    H -- 75 <= Total < 80 --> K[Grade = B+]
    H -- 60 <= Total < 75 --> L[Grade = B]
    H -- 55 <= Total < 60 --> M[Grade = C+]
    H -- 45 <= Total < 55 --> N[Grade = C]
    H -- 30 <= Total < 45 --> O[Grade = D]
    H -- Total < 30 --> P[Grade = F]
    I --> Q[Display Total and Grade]
    J --> Q
    K --> Q
    L --> Q
    M --> Q
    N --> Q
    O --> Q
    P --> Q
    Q --> R[Prompt "Calculate Another Grade?"]
    R --> S{Input == 1?}
    S -- Yes --> C
    S -- No --> T[End]
```
