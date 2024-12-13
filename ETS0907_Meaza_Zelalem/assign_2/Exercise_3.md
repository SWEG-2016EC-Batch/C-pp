```mermaid
flowchart TD
    A[Start] --> B[Input Number]
    B --> C{Valid Number?}
    C -- No --> D[Retry 3 Times] --> E{Retries Exceeded?}
    E -- Yes --> F[Exit]
    E -- No --> B
    C -- Yes --> G[Display Menu]
    G --> H[Input Task Choice]
    H --> I{Valid Task?}
    I -- No --> J[Retry 3 Times] --> K{Retries Exceeded?}
    K -- Yes --> F
    K -- No --> H
    I -- Yes --> L{Selected Task}
    L -- 1 --> M[Reverse the Number]
    L -- 2 --> N[Count the Digits]
    L -- 3
```
