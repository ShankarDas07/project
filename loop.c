#include<stdio.h>
int main(){
    int day;
    printf("enter the day :");
    scanf("%d",&day);
    switch (day)
    {case 1:
             printf("the day is Sunday \n");
                    break;
    case 2:
            printf("the day is Monday \n");
                    break;
    case 3:
            printf("the day is Tuesday \n");
                    break; 
    case 4:
            printf("the day is Wednesday \n");
                    break;
    case 5:
            printf("the day is Thursday \n"); 
                    break;
    case 6:
            printf("the day is Friday \n");
                    break;
    case 7:
            printf("the day is Saturday \n");  
                    break;              
    default:printf ("wrong number :");
    }
    return 0;

}