#include<stdio.h>
int main(){
    int var_a,var_b;
    float Celsius, Fahrenheit;//declaration of the variable

    int op;
    int i=1;
    while(i)
    {
        printf("\n1.Addition\n");
        printf("2.Subtraction\n");
        printf("3.Multiply\n");
        printf("4.Division\n");
        printf("5.Convert Celcius to Fahrenheit \n");
        printf("6.Exit\n");
        fflush(stdin);//the flush statements is used to flush all different higher data to lower data for input
        printf("Enter a OPERATION :\n");
        scanf("%d",&op);//giving the symbol for the arethmetic opration

        switch(op){
        case 1:
            printf("Enter a first element:");
            scanf("%d",&var_a);
            printf("Enter a second element:");
            scanf("%d",&var_b);
            printf("The addition of the two number is %d ",var_a+var_b);
            break;
        case 2:
            printf("Enter a first element:");
            scanf("%d",&var_a);
            printf("Enter a second element:");
            scanf("%d",&var_b);
            printf("\n The substraction of the two number is %d",var_a-var_b);
            break;
        case 3:
            printf("Enter a first element:");
            scanf("%d",&var_a);
            printf("Enter a second element:");
            scanf("%d",&var_b);
            printf("\nThe multiplication of the two number is %d ",var_a*var_b);
            break;
        case 4:
            printf("Enter a first element:");
            scanf("%d",&var_a);
            printf("Enter a second element:");
            scanf("%d",&var_b);
            printf("\nThe division of the two number is %d ",var_a/var_b);
            break;
        case 5:
            printf("Enter the value of Celsius:\n");
            scanf("%f",&Celsius);//entering the input of the celsuis
            Fahrenheit=(Celsius*9.0/5.0)+32;//giving the operation
            printf("The converted value of the celsius to fahrenheit  %f\n",Fahrenheit);
            break;
        case 6:
            printf("Exit");
            i=0;
            break;
        default:
            printf("THE INPUT IS INVALID\n");
        }
    }
    return 0;
}

