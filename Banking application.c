#include <stdio.h>
int main()
{
//An application menu...I'll make a bank interface
int menu;
int amount;
int balance=0;
printf("\n>>>Alvan's Bank<<<\n");
printf("Welcome.");
do{
printf("\n>>>>==Menu==<<<<\n");
printf("1. Deposit money\n");
printf("2. Withdraw money\n");
printf("3. Check balance\n");
printf("4. Exit\n");
printf("Enter your choice:");
scanf("%d", &menu);

switch (menu)
{
 case 1:
printf("Enter amount to deposit\n");
scanf("%d", &amount);
balance+=amount;
printf("You have deposited %d shillings succesfully", amount);

break;
 case 2:
printf("Enter amount to withdraw:\n");
scanf("%d", &amount);
if(amount<=balance)
{printf("You have withdrawn %d shillings succesfully", amount);

balance-=amount;

}else{
    printf("Insufficient funds\n");
}
break;
 case 3:
    printf("Account balance: %d", balance);
break;
 case 4:
    printf("Exiting application\n");
    break;

 default:
    printf("Invalid option");
break;
}
getchar();
getchar();
}while (menu != 4);
return 0;
}
