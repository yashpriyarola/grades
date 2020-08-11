#include<stdio.h>
main()
{
    int marks=0;
    printf("enter your marks:");
    scanf("%d",&marks);
    if(marks>=85&&marks<=100)
    {
        printf("Grade A");
    }
    else if(marks>=70&&marks<85)
    {
        printf("Grade B");
    }
    else if(marks>=55&&marks<70)
    {
        printf("Grade C");
    }
    else if(marks>=40&&marks<55)
    {
        printf("Grade D");
    }
    else if(marks>=0&&marks<40)
    {
        printf("Grade F. you have failed ");
    }   
    else
    {
        printf("please enter valid marks");
    } 
}