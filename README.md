# Positve-Decimal-to-Binary
This is an object-oriented program which was created to display on the screen the binary equivalent of a positive decimal number by using two different methods;

the first method was a recursive function and the second method was an iterative function implementing Stack. 


Summary of approach


 To begin the first program, the Stack class was implemented. The Dec2Bin class was also created; this class included no private components (all 
were public). 

 First, an int variable called decNum was created which would store the decimal integer to be converted to binary. 

 Next, a void function called readDecNum() was created, which prompts the user to enter the decimal number to be converted to binary and sets decNum to the input. 

 Next, a void function called dec2bin_rcv(int d) was created; this function uses recursion to find and display the binary equivalent of argument d. This value (d) initially takes the value of decNum. To do so, an int variable called bin was created, which takes the value of d. If this value is equal to 0, the function returns. Else, the function calls itself with bin/2 as the argument, then displays the remainder of bin/2. 

 Next, a void function called dec2bin_itr() was created; this function displays the binary equivalent of decNum using an iterative method utilizing the Stack class. To do so, an object of the Stack class was created along with an int variable called dec which stores decNum. Next, a while loop gets the remainder of dec when divided by 2, sets dec equal to itself divided by 2, and pushes the remainder in the Stack. This while loop continues until dec is equal to zero. Another while loop was also used, which stores the top of the stack value into an int, pops the top of the stack, and displays the stored int. this while loop continues until the Stack is empty. 

 Finally, a main function was used to test the created program.
