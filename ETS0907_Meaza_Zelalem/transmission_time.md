# File Transmission Time Flowchart

```mermaid
flowchart TD
    A[Start] --> B[Input file size in bytes]
    B --> C{Is the input valid?}
    C -->|No| D[Display error message]
    D --> E[Terminate program]
    C -->|Yes| F[Set transmission rate to 960 bytes/second]
    F --> G[Calculate total transmission time in seconds]
    G --> H[Convert total seconds into days, hours, minutes, and seconds]
    H --> I[Output formatted transmission time]
    I --> J[End]
