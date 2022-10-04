#include <stdio.h>
#include <stdlib.h>

int main() {
    int choice;
    float Num1,Num2;
    label:
    system("cls");
    printf("###########CALCULATOR##########\n");
    printf("Press 1 for  Addition(+)\n");
    printf("Press 2 for  Substraction(-)\n");
    printf("Press 3 for  Multiplication(*)\n");
    printf("Press 4 for  Division(/)\n");
    printf("Press 0 for  EXIT\n");
    scanf("%d",&choice);
    switch(choice){
        case 1:
                printf("Enter 1st Number : ");
                scanf("%f",&Num1);
                printf("Enter 2nd Number : ");
                scanf("%f",&Num2);
                printf("Addition of %0.2f and %0.2f is %0.2f\n",Num1,Num2,Num1+Num2);
                system("pause");
                goto label;
                break;
        case 2:
                printf("Enter 1st Number : ");
                scanf("%f",&Num1);
                printf("Enter 2nd Number : ");
                scanf("%f",&Num2);
                printf("Substraction of %0.2f and %0.2f is %0.2f\n",Num1,Num2,Num1-Num2);
                system("pause");
                goto label;
                break;
        case 3:
                printf("Enter 1st Number : ");
                scanf("%f",&Num1);
                printf("Enter 2nd Number : ");
                scanf("%f",&Num2);
                printf("Multiplication of %0.2f and %0.2f is %0.2f\n",Num1,Num2,Num1*Num2);
                system("pause");
                goto label;
                break;
        case 4:
                printf("Enter 1st Number : ");
                scanf("%f",&Num1);
                printf("Enter 2nd Number : ");
                scanf("%f",&Num2);
                printf("Division of %0.2f and %0.2f is %0.2f\n",Num1,Num2,Num1/Num2);
                system("pause");
                goto label;
                break;
        case 0:
                exit(0);
                break;
        default:
                printf("Invalid enter again\n");
                system("pause");
                goto label;
    }
    return 0;
}
