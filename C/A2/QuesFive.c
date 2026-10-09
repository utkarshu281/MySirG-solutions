#include<stdio.h>
int main()
{
  float cp_per_dozen,sp_per_dozen,cp_25,sp_25;
  //this program will assume that user will enter value above 0
  printf("enter cost and selling price per dozen:");
  scanf("%f,%f",&cp_per_dozen,&sp_per_dozen);
   cp_25=(cp_per_dozen/12)*25;
   sp_25=(sp_per_dozen/12)*25;
   char *result;
   float value;
   if(cp_25>sp_25){
     result="Loss";
    value=((cp_25-sp_25)/cp_25)*100;
   }else if (cp_25<sp_25){
     result="profit";
     value=((sp_25-cp_25)/cp_25)*100;
   }else{
     result="no profit no loss";
     value=0.0;
   }
  printf("%s for selling 25 banana is %f",result,value);
  return 0;
}
