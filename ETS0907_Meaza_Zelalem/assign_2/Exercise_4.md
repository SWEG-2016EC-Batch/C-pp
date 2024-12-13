```mermaid
flowchart TD
    A((Start)) --> B[/Input number of rows/]
    B --> C[/Input number of columns/]
    C --> D[/Input pattern choice/]
    D --> E{Valid choice?}
    E -- Yes --> F[Generate selected pattern]
    F --> G[/Display pattern/]
    E -- No --> H[/Display Invalid choice/]
    H --> D
    G --> I[/Continue? 1: Yes, 0: No/]
    I -- Yes --> C
    I -- No --> J((End))

# Algorithm
## steps

1. Display a menu of pattern options.

2. -Input the number of rows (`row`).
   - Input the number of columns (`column`).

3. -Display menu options numbered 1 to 12.
   - Input the user's choice of pattern (`choice`).

4.-If the choice is valid (1–12), proceed to the selected pattern logic.
   - Otherwise, display "Invalid choice" and ask again.

5. Based on the choice:
     - Generate the respective pattern (e.g., rectangles, pyramids, etc.).
     - Use nested loops for rows and columns as needed.
   - Display the generated pattern.

6. Ask the user if they want to continue (`cont`).
   - If `cont == 1`, repeat from step 2.
   - Otherwise, end the program.

7. Display a thank-you message.
8. End.
