#include<stdio.h>
int main()
{
int attendance,assignment_scores,exam_result;
printf("Enter The attendance,assignment_scores,exam_result\n");
scanf("%d%d%d",&attendance,&assignment_scores,&exam_result);
if (attendance>=80 && assignment_scores>=80 && exam_result>=80){
if (attendance>=90 && assignment_scores>=90 && exam_result>=90){
printf ("Your Grade is A++!");
}
else {
printf ("Your Grade is A+");
}
}
else if(attendance>=70 && assignment_scores>=70 && exam_result>=70){
printf ("Your Grade is A");}
else if (attendance>=60 && assignment_scores>=60 && exam_result>=60){
printf ("Your Grade is B+");}
else if (attendance>=50 && assignment_scores>=50 && exam_result>=50){
printf("Your Grade is B"); }
else 
{
printf ("You are Fail");
}
return 0;
}