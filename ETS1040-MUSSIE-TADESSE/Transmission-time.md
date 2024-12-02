# Problem Analysis:
1. **Input:**  file size (double, in bytes).
2. **Process:** Transmission Time = file size (in bytes)/ (960 bytes/second), Days =Transmission time/(24*3600) , Hours = Transmission time /3600, Minutes= Transmission time /60, Seconds = Transmission time% 60.
3.**Output:** Days, Hours, Minutes, Seconds.
   
# Algorithm

This algorithm computes the time required to transmit a file over a network at a given transmission rate, converting the total time into days, hours, minutes, and seconds.

---

## Steps

1. **Input File Size:**
   - Accept the size of the file in bytes.
   - Validate the input:
     - Ensure it is a numeric value.
     - Ensure the value is non-negative.
     - If the input is invalid, display an error message and terminate the program.

2. **Define Transmission Rate:**
   - Set the transmission rate to a constant value (e.g., 960 bytes/second).

3. **Calculate Transmission Time:**
   - Compute the total transmission time in seconds:
     \[
     \text{transmission\_time} = \frac{\text{file\_size\_in\_bytes}}{\text{transmission\_rate}}
     \]
   - Convert the transmission time to an integer for subsequent calculations.

4. **Convert Time Units:**
   - Determine the number of **days**:
     \[
     \text{days} = \frac{\text{total\_seconds}}{24 \times 3600}
     \]
   - Update the remaining seconds:
     \[
     \text{total\_seconds} \%= (24 \times 3600)
     \]
   - Determine the number of **hours**:
     \[
     \text{hours} = \frac{\text{total\_seconds}}{3600}
     \]
   - Update the remaining seconds:
     \[
     \text{total\_seconds} \%= 3600
     \]
   - Determine the number of **minutes**:
     \[
     \text{minutes} = \frac{\text{total\_seconds}}{60}
     \]
   - Calculate the remaining **seconds**:
     \[
     \text{seconds} = \text{total\_seconds} \% 60
     \]

5. **Output the Results:**
   - Display the transmission time in the format:
     
     X days Y hours Z minutes and W seconds
     

6. **End Program:**
   - Terminate the program.

---



## File Transmission Time Flowchart

``` mermaid
flowchart 
    id1([Start])-->id2[Set run time]
    id2-->id3{Do While answer is not '0'}
    id3-->id4[/input: choice/]         
    id4-->id5[/input: size/]
    id5-->id6[Convert size to bytes]
    id6-->id7[run time = file size / 960]
    id7-->id8[Convert run time to days, hours, minutes, and seconds]
    id8-->id9[/output: run time/]
    id9-->id10[/"Would you like to continue"/]
    id10-->id11[/input: answer/]
    id11-->id12{If answer is not = 0}
    id12--True-->id3
    id12--False-->id13([End])
