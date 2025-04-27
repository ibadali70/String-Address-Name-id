This is a simple C++ console application that takes user information (name, age, address, and roll number) as input and displays it neatly.
Features
Takes input for:

Name
Age
Address
Roll Number

Displays the entered information clearly.

Properly handles mixed input (cin and getline) using cin.ignore().

How to Run
Make sure you have a C++ compiler installed (like g++).

Save the code in a file, for example: user_info.cpp.

Open terminal or command prompt.

Compile the code:

Copy
Edit
g++ user_info.cpp -o user_info
Run the program:

bash
Copy
Edit
./user_info
Example Output
yaml
Copy
Edit
Enter your name: Ibad Ali
Enter your age: 20
Enter your address: Lahore, Pakistan
Enter your roll number: 12345

--- User Information ---
Name: Ibad Ali
Age: 20
Address: Lahore, Pakistan
Roll Number: 12345
Notes
cin.ignore() is used after reading age to clear the newline character left in the input buffer.

getline() is used for reading full lines for name and address, supporting spaces properly.

Author
Ibad Ali
