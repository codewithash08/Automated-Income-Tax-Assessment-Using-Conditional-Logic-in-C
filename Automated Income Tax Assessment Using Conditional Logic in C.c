
#include <stdio.h>

int main(){
printf("\n@if.elif.else_\n");
int amount;   
printf("Income Tax Paid By Employee\n\n");
printf("Submit Your Income Amount :");

scanf("%d", &amount);
int Tax_amount = amount;

if (Tax_amount >= 250000 && Tax_amount <= 500000 ){
    printf("%d" , Tax_amount*5/100);
}
else if (Tax_amount > 500000 && Tax_amount <= 1000000 ){
    printf("%d" , Tax_amount*20/100);
}
else if (Tax_amount > 1000000 ){
    printf("%d" , Tax_amount*30/100);
}
else if (Tax_amount < 250000){
    printf("There is no tax on your amount below 250000\n");
    printf("Your Amount Is %d" , Tax_amount);
}
else{
    printf("Invalide Amount Try Again...");
}
return 0;
}












