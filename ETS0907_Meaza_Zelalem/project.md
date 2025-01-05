```mermaid
flowchart TD
    A[Start] --> B[Initialize variables and arrays]
    B --> C[Input storekeeper details]
    C --> D[Display menu]
    D --> E{User Choice}
    E -->|1: Add Transaction Data| F[Validate ID and Input transaction details]
    F --> G[Update inventory]
    E -->|2: Edit Records| H[Validate ID and date]
    H --> I[Update product quantity]
    E -->|3: Delete Transaction Data| J{Delete all or specific record?}
    J -->|All| K[Clear all records]
    J -->|Specific| L[Input and delete specific record]
    E -->|4: Search for a Record| M{Search by?}
    M -->|Storekeeper| N[Display storekeeper data]
    M -->|Product| O[Display product data]
    E -->|5: Summary| P{Summary type?}
    P -->|Product/Storekeeper| Q[Calculate totals and bonuses]
    P -->|Warehouse/Product| R[Display warehouse data]
    E -->|6: Daily Report| S[Display daily sales report]
    E -->|7: Storekeeper Records| T[View or edit storekeeper details]
    E -->|8: Exit| U[End Program]
    F --> D
    G --> D
    I --> D
    K --> D
    L --> D
    N --> D
    O --> D
    Q --> D
    R --> D
    S --> D
    T --> D
    U --> End[Stop]
