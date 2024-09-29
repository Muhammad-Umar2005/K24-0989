#include<stdio.h>
int main(){
  int age;
  printf("Enter your age");
  scanf("%d",&age);
  if(age>=20){
  if(age>=65){
  printf("senior!");}
  else{
   printf("Adult!");}
}else if(age>=0){
 if (age>=13){
  printf ("Teenager!");}
  else
  {
  printf ("Child!");}
}
  else{
  printf ("  ");
}
   return 0;
}
