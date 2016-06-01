// Lab3: In this lab, you are to finish a C program that, when completed, will
//compute the GPA of a student after the lettergardes for several courses are given as input.

//lab3.c is a partial solution to the problem. You should complete the program by following the DO tasks. There
//are 7 DOs. Complete each DO task according to the comments. Do not change any other part of the program!



//DO_1: Dylan Cook



#include <stdio.h>

// Function that returns a letter grade, anything apart from A, B, C, D, or F is considered as an invalid grade. In other words, the while 
//loop continues as long as the user does not enter a valid letter grade.

char GetGrade()
{
   char lettergrade;
   
   printf("Enter a letter grade ( A, B, C, D or F ): ");
   scanf(" %c", &lettergrade);

//DO_2: fill out the condition for while loop

  while (lettergrade != 'A' && lettergrade!= 'B' && lettergrade != 'C' && lettergrade != 'D' && lettergrade != 'F' )
   {
      printf("Invalid grade...enter A, B, C, D or F: ");

      //DO_3: read in the lettergrade from the user
      scanf(" %c", &lettergrade);

   }

   //DO_4: write the return statement of the function
   return lettergrade;


}

// This function returns the number of points for the grade
// 4 for A, 3 for B, 2 for C, 1 for D and 0 for F

float Points( char letter)


{
   if ( letter == 'A' )
     return 4.0;
   else if(letter == 'B')
     return 3.0;
   else if(letter == 'C')
     return 2.0;
   else if(letter == 'D')
     return 1.0;
   else
     return 0.0;
//DO_5: fill out the rest of the function body
}

int main()
{
  
  float numberofcourses, total;
  float gpa;
  char grade, timetoquit;

  total = 0.0;
  numberofcourses = 0.0;
  timetoquit = 'n';
  
  while ( timetoquit != 'y')
  {
    grade = GetGrade();
    numberofcourses = numberofcourses + 1;
    //DO_6: update the variable total in a single assignment statement
    total += Points(grade);
    printf("Enter y to end: ");
    scanf(" %c", &timetoquit);
  }
  //DO_7:calculate the gpa
  gpa = total/numberofcourses;


  printf("Your GPA is: %f",gpa);
return 0;  
}
