#include<stdio.h>

int main(){
    float balance=100000.00;
    int choice;
    while(1){
    printf("MENU\n1.Show balance\n2.Ask for deposit\n3.Print Goodbye\n");
    printf("Enter your choice:-> ");
    scanf("%d",&choice);
    if(choice==1)
    {
        printf("Your balance is %.2f\n",balance);
    }
    else if (choice==2)
    {
        float deposit_amt;
        printf("Enter the amount to be deposited:");
        scanf("%f",&deposit_amt);
        if(deposit_amt>0){
        balance=balance+deposit_amt;
        printf("New balance is %.2f\n",balance);
        }else{
            printf("invalid deposit amount.\n");
        }
    }
    else if (choice==3)
    {
        printf("Goodbye\n");
        break;
    }
    else
    {
        printf("Invalid choice\n");
    }
}
    return 0;
}



// SAME ATM CODE BUT BY USING SWITCH CASE AND WHILE

// #include<stdio.h>

// int main(){
//     int balance=10000000;
//     int choice;

// while (1)
// {
//     printf("MENU\n1.Show balance\n2.Ask for deposit\n3.Print Goodbye\n");
//     printf("Enter your choice:-> ");
//     scanf("%d",&choice);
//     switch (choice)
//     {
//     case 1:
//         printf("Your balance is %d\n",balance);
//         break;
//     case 2:
//         {
//             int deposit;
//             printf("Enter the amount to be deposited:");
//             scanf("%d",&deposit);
//             balance=balance+deposit;
//             printf("New balance is %d\n",balance);
//         }
//         break;
//     case 3:
//         printf("Goodbye\n");
//         return 0;
//         break;
//     default:
//         printf("Invalid choice\n");
//         break;
//     }
// }
// return 0;
// }   