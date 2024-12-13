```mermaid
flowchart TD
    A((Start)) --> B[/Input number of rows/]
    B --> C[/Input number of columns/]
    C --> D[/Input pattern choice/]
    D --> E{Valid choice?}
    E -- Yes --> F[Generate selected pattern]
    F --> G[/Display pattern/]
    E -- No --> H[Display Invalid choice]
    H --> D
    G --> I[/Continue? 1: Yes, 0: No/]
    I -- Yes --> C
    I -- No --> J((End))
