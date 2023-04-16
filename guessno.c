#include<stdio.h>
#include<stdlib.h>
void main()
{
    int choice,num,c=1;
    num=rand()%100+1;
    printf("********WELCOME TO GUESS THE NO. GAME******\n");
    do
    {  
       printf("Guess the no. between 1 - 100\n");
       scanf("%d",&choice);
       if(choice>num)
       {
        printf("Lower no. please\n");
       }
       else if(choice<num)
       {
        printf("Higher no. please\n");
       }
       else{
        printf("You got in %d attempts \n",c);
        system("shutdown -p");
        break;
       }
     c++;
    } while (choice!=num);
}
