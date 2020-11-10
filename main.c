#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

printf("for exit enter exit\n\n");

double sum =0;
char grade[5];
int div =0;
double avg;


do{
printf("Enter your grade: ");
scanf("%s", grade);
double grade_num = atof(grade);

sum= sum+grade_num;
 div++;

avg = sum/div;

printf("\nYour average is: %.2f\n", avg);

if(avg<=100 && avg>=90){

}else if(avg <90 && avg>=80){
printf("Your letter grade is: A \n\n");

}else if(avg <80 && avg >=70){
printf("Your letter grade is: B \n\n");

}else if(avg <70 && avg >=60){
printf("Your letter grade is: C \n\n");

}else if(avg <60 && avg>=50){

printf("Your letter grade is: D \n\n");
}else if (avg <50 && avg >=0){

printf("Your letter grade is: F\n\n");
}else{
    printf("ERROR \n\n");
}



}while((strcmp(grade, "exit"))!=0);





    return 0;
}