# Lock

## Introduction
In this report we will see both the circuit simulation and the actual programming of a safe. Next, we will look at both the general and individual flow diagrams.

### General flow chart.
![](Images/1.jpg)

### Circuit diagram.
![](Images/3.jpg)

We read the voltage of the pins as follows.
### Read push buttons.
![](Images/4.jpg)

They would give us this data according to the buttons (from left to right).
### Voltaje data.
![](Images/5.jpg)

### The data read according to the voltage of the pins.
![](Images/6.jpg)

Once we have all the data from the buttons, we configure the reading of pins

### Lectura de pines
![](Images/7.jpg)

The buttons are loaded as follows (There are two parts that we will explain later)

### Load keyboard
![](Images/8.jpg)

We show the data pressed both on the display and in the virtual Proteus terminal
### Example
![](Images/9.jpg)

First we have a special code, if the special code is inserted we have to enter a 4-digit password to our liking.
We have to compare two arrangements. For this we have to load an array called against []. (this is the array that contains the momentary data). Once this fix is loaded, we have to go through both the fix that we load and the one we have as "Special Code".
We compare each figure in the arrangement according to position. Every time a number matches in the same position of both, it will be incremented by one in a variable called "k". (This in the function called "FourNumbers" at the end of the report).

### Part of the function
![](Images/10.jpg)

In the event that the password is incorrect, it would show us the following on the screen
### Wrong case

![](Images/11.jpg)

In the event that the four digits are equal, both in value and in position, the following function will be executed to be able to enter a new password.

### Fuction
![](Images/13.jpg)

### New password
![](Images/12.jpg)

In the "Open" function, we set both the "change" and "changeContra" variables to true. 
We use the "change" function to be able to use the "traverseContra" function and the keyboard takes "ChangeContra" as true to use the other part of the function.

### Password update
![](Images/14.jpg)

Once we choose the 4 numbers for our password, it restarts, but with our password saved. If we put the password that we choose after putting the special code, the servomotor has to be turned on.

### We check new password
![](Images/15.jpg)

Since the servo part was in my topics, I left it to my partner. Even so, I printed a message of what would happen if it was activated.
### Conclusion.
EIn this job I had problems in the part where I had to load a new arrangement. I implemented all the tools that we saw these years in addition to some things that were personal research.
