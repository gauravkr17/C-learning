# include<stdio.h>

int main(){

    /* Write a Program to give grades to students
       marks <30 is C
       30 <= marks <70 is B
       70 <= marks <90 is A
       90 <= marks <=100 is A+ 
    */


   int marks;
   printf("Enter the marks (0-100) : ");
   scanf("%d" , &marks);

   if(marks <=30){
    printf("C \n");
   } else if(marks >=30 && marks <70){
    printf("B \n");
   } else if(marks >=70 && marks <90){
    printf("A \n");
   } else if(marks >=90 && marks <=100){
    printf("A+ \n");
   } else{
    printf("Sabasss 👏👏👏👏, aapke charan kaha hai gyani baba?");
   }







    return 0;

}