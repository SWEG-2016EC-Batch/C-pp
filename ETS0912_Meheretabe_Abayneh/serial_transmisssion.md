### Problem

A serial transmission line can transmit 960 characters a second. Write a program that will calculate how long it will take to send a file, given the file size. Test your program on a 400MB (419,430,400 byte) file which may take days.

### Problem analysis

> - **Input**: file size(_MB_)

> - **Process**:
>   - change the file size to byte
>   - calculate time required
>   - change time to days, hours minutes and seconds

> - **Out put**: time required

## Algorithm

### Pseudocode

> **Step 1**: Start  
> **Step 2**: declare variable file size, byte, time, day, reminder, reminder2, second, hour, minutes  
> **Step 3**: read file size(_double_)  
> **Step 4**: check file size
>
> > 4.1: if input is invalid or less than 0, print invalid input  
> > 4.2: if input is valid and greater than or equal to 0, go to **Step 5**
>
> **Step 5**: change file size(MB) to byte as file size \* 1024 \* 1024 and save it as byte  
> **Step 6**: calculate time as byte / 960  
> **Step 7**: change the time(_double_) to type (_int_)  
> **Step 8**: calculate day as time / 86400  
> **Step 9**: calculate reminder as time % 86400  
> **Step 10**: calculate hour as reminder / 3600  
> **Step 11**: calculate reminder2 as reminder % 3600  
> **Step 12**: calculate minutes as reminder2 / 60  
> **Step 13**: calculate second as reminder2 % 60  
> **Step 14**: print day : hour : minute : second  
> **Step 15**: Stop

### FLow chart

![](serial_transmission.jpg)
