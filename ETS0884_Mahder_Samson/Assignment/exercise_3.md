# Algorithm 
## steps

1. Prompt the user to enter an integer (`number`).
   - Validate the input; if invalid:
     - Clear input buffer.
     - Allow up to 3 retries; otherwise, exit.

2. Provide options for operations (e.g., reverse, digit count, even digit product, etc.).

3. Prompt the user to choose a task from the menu.
   - Validate the input; if invalid:
     - Clear input buffer.
     - Allow up to 3 retries; otherwise, exit.

4. - **Option 1**: Reverse the number.
   - **Option 2**: Count the number of digits.
   - **Option 3**: Calculate the product of even digits.
   - **Option 4**: Print the first and last digit and their sum.
   - **Option 5**: Swap the first and last digits.
   - **Option 6**: Check if the number is a palindrome.
   - **Option 7**: Find the frequency of each digit.
   - **Option 8**: Check if the number is a Strong number.
   - **Option 9**: Check if the number is a Perfect number.
   - **Any Other Input**: Exit the program.

5. Display results based on the selected task.

6.  Return to the menu for another operation unless exited.

7. **End**.

```mermaid
flowchart TD
    A((Start)) --> B[/Input Number/]
    B --> C{Valid Number?}
    C -- No --> D[Retry 3 Times] --> E{Retries Exceeded?}
    E -- Yes --> F[Exit]
    E -- No --> B
    C -- Yes --> G[/Display Menu/]
    G --> H[Input Task Choice]
    H --> I{Valid Task?}
    I -- No --> J[Retry 3 Times] --> K{Retries Exceeded?}
    K -- Yes --> F
    K -- No --> H
    I -- Yes --> L{Selected Task}
    L -- 1 --> M[Reverse the Number]
    L -- 2 --> N[Count the Digits]
    L -- 3 --> O[Calculate Even Digit Product]
    L -- 4 --> P[Print First and Last Digits]
    L -- 5 --> Q[Swap First and Last Digits]
    L -- 6 --> R[Check Palindrome]
    L -- 7 --> S[Find Digit Frequency]
    L -- 8 --> T[Check Strong Number]
    L -- 9 --> U[Check Perfect Number]
    L -- Default --> F
    M --> V[/Display Results/]
    N --> V
    O --> V
    P --> V
    Q --> V
    R --> V
    S --> V
    T --> V
    U --> V
    V --> W[Prompt Another Operation?]
    W -- Yes --> G
    W -- No --> F
```   
