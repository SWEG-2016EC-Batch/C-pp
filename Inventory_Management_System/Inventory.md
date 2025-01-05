
### Algorithm: Inventory Management System

1. **Initialize variables**:
   - Constants: `s = 4` (number of storekeepers)
   - Arrays: `sk_id[]`, `sk_username[]`, `price[]`, `inventory[][][][]`
   - Variables: `tryal`, `choice`, `day`, `product_n`, `warehouse_n`, `quantity`, etc.

2. **Input storekeeper details**:
   - For each storekeeper:
     - Input `ID` and check for duplicates.
     - Input `username`.

3. **Display menu options**:
   - 1: Add Transaction Data
   - 2: Edit records
   - 3: Delete Transaction Data
   - 4: Search for a record
   - 5: Summary of the month
   - 6: Daily Warehouse Transaction Report
   - 7: Storekeeper Records
   - 8: Exit

4. **Process user choice**:
   - **Add Transaction Data**:
     - Validate storekeeper ID.
     - Input transaction details (date, product, warehouse, quantity).
     - Update inventory.

   - **Edit Records**:
     - Validate storekeeper ID and date.
     - Update product quantity in inventory.

   - **Delete Transaction Data**:
     - Delete specific or all records based on user choice.

   - **Search for a Record**:
     - By storekeeper ID or product number, display relevant data.

   - **Summary**:
     - By product/storekeeper or warehouse/product, calculate and display totals and bonuses.

   - **Daily Report**:
     - For a given day, show sales per storekeeper and warehouse.

   - **Storekeeper Records**:
     - View or edit storekeeper details (username/ID).

5. **Exit on user command**.




























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
