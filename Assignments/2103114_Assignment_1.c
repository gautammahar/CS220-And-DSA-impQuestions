/*           --> Assignment 1 <--

Student Information -
- Our aim is to read a student information from the user, find his/her CPI and prints student details
  on screen.
The output sequence should be as follows.
Enter Student Name: AXB
Enter Student RollNo: 2345
Enter Student Grade for Course 1 (0 to 10): 10
Enter Student Grade for Course 2 (0 to 10): 8
Enter Student Grade for Course 3 (0 to 10): 8
Enter Student Grade for Course 4 (0 to 10): 10
Enter Student Grade for Course 5 (0 to 10): 8
Enter Student Grade for Course 6 (0 to 10): 10
The student details are as follows.
Name: AXB
Roll number: 2345
CPI: 9
You are allowed to assume the following.
1. Student name is atmost 100 characters (and no space in between)
2. Student roll number is an integer.
3. There are exactly 6 course grades to be entered
4. CPI is calculated as the average of the grades.

*/

#include <stdio.h> // Adding hreader file

/* AUTHOR - Gautam kumar Mahar
   Roll Number - 2103114
   Department - CSE
   Date - 14 Sep 2022  */

float CPI(float grade[6]) // Use this function for calculate the cpi and Using float for decimal numbers
{

    float sum = 0;
    // start for loop
    for (int i = 0; i < 6; i++)
    {
        sum += grade[i]; // using operator sum '+=' grade[i] thats mean sum = sum + grade[i]
    }
    // end for loop

    return sum / 6; // return value of CPI(float1)
}

int main() // main function
{
    char name[100];
    float grade[6];
    printf("Enter Student Name:");
    scanf("%s", &name); // use scanf for scan char (string)
    int RollNo;
    printf("Enter Student RollNo: ");
    scanf("%d", &RollNo); // scanning input

    for (int i = 1; i < 7; i++) // for loop start
    {
        printf("Enter Student Grade for Course %d (0 to 10) :", i); // printing output
        scanf("%f", &grade[i - 1]);                                 // scanning input
    }                                                               // for loop end

    // printf for printing int,float,char

    printf("The student details are as follows.\n Name:%s \n Roll number:%d \n CPI: %f \n", name, RollNo, CPI(grade));

    return 0; // return value
} // main function end

// Thank you