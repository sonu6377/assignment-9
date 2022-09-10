/* 1
#include<stdio.h>
int main()
{
    int x;
    printf("enter month numbers");
    scanf("%d",&x);
    switch(x)
    {
        case 1: printf("january\n days 31");
                break;
        case 2: printf("february\n days 28||29");
                break;
        case 3: printf("march\n days 31");
                break;
        case 4: printf("april\n days 30");
                break;
        case 5: printf("may\n days 31");
                break;
        case 6: printf("june\n days 30");
                break;
        case 7: printf("july\n days 31");
                break;
        case 8: printf("august\n days 31");
                break;
        case 9: printf("september\n days 30");
                break;
        case 10: printf("october\n days 31");
                break;
        case 11: printf("november\n days 30");
                break;
        case 12: printf("december\n days 31");
                break;

    }
    return 0;
}*/
/* 2
#include<stdio.h>
int main()
{
    int x,a,b;
    while(1)
 {

    printf("\nenter your choice\n");
    scanf("%d",&x);
    printf("a. addition\n");
    printf("b. subtraction\n");
    printf("c. multiplication\n");
    printf("d. division");
    printf("e. exit\n");
    switch(x)
    {
        case 1: printf("\n 2enter two numbers");
                scanf("%d%d",&a,&b);
                printf("addition is %d\n",a+b);
                break;
      case 2: printf("enter two numbers");
                scanf("%d%d",&a,&b);
                printf("subtraction is %d",a-b);
                break;
    case 3: printf("enter two numbers");
                scanf("%d%d",&a,&b);
                printf("multiplication is %d",a*b);
                break;
    case 4: printf("enter two numbers");
                scanf("%d%d",&a,&b);
                printf("division is %d",a/b);
                break;
    case 5:
         break;
}
if(x>=5)
    break;
 }
}*/
/* 3
#include<stdio.h>
int main()
{
    int x;
    printf("enter number in weak series");
    scanf("%d",&x);
    switch(x)
    {
        case 1: printf("monday");
                break;
        case 2: printf("tuesday");
                break;
        case 3: printf("wednesday");
                break;
        case 4: printf("thursday");
                break;
        case 5: printf("friday");
                break;
        case 6: printf("saturday");
                break;
        case 7: printf("sunday");
                break;
    }
    return 0;
}*/
/* 4
#include<stdio.h>
int main()
{
    int x,a,b,c;
    printf("\n enter your choice");
    scanf("%d",&x);
    while(1){
    printf("\n a. check to isosceles triangle\n");
    printf("b. check to right angle triangle\n");
    printf("c.check to equilateral triangle\n");
    printf("d. exit\n");
    switch(x)
    {
        case 1: printf("enter three numbers");
                scanf("%d%d%d",&a,&b,&c);
                if(a==b || b==c || c==a)
                    printf(" triangle is isosceles");
                else
                    printf(" triangle is not a isosceles");
                break;
         case 2: printf("enter three numbers");
                scanf("%d%d%d",&a,&b,&c);
                if(a*a==b*b+c*c || b*b==c*c+a*a || c*c==a*a+b*b)
                    printf(" triangle is right angle triangle");
                else
                    printf(" triangle is not a right angle triangle");
                break;
         case 3: printf("enter three numbers");
                scanf("%d%d%d",&a,&b,&c);
                if((a==b)&&(b==c))
                    printf(" triangle is equiliteral");
                else
                    printf(" triangle is not a equiliteral");
                break;
         case 4:
            break;
    }
    if(x>=4)
        break;
    }
    return 0;
}*/
/* 5
#include<stdio.h>
int main()
{
    int x;
    printf("enter a numbers ");
    scanf("%d",&x);
    switch(x)
    {
        case 1: printf("good");
                break;
        case 2: printf("better");
                break;
        case 3: printf("best");
                break;
        default:
            printf("invalid");

    }
    return 0;
}*/
/* 6
#include<stdio.h>
int main()
{
    int x;
    printf("enter a year");
    scanf("%d",&x);
    switch(x%100==0)
    {
    case 1: switch(x%400==0)
              {
                  case 1: printf("leap year ");
                          break;
                  case 0: printf("not leap year ");
                          break;
              } break;

    case 0: switch(x%4==0)
            {
                case 1: printf("leap year");
                        break;
                case 0: printf("not a leap year");
                        break;
            }
    }
    return 0;
}*/
/* 7
#include<stdio.h>
int main()
{
    int x;
    float amount=0, total=0;
    printf("enter your bill amount");
    scanf("%d",&x);
    switch(x<=50)
    {
    case 1: amount= x*0.5;
            break;
    case 0: switch(x<=150)
             {
                  case 1: amount=(x-50)*0.75+25;
                          break;
                  case 0: switch(x<=250)
                           {

                               case 1: amount=(x-150)*1.20+25+75;
                                        break;
                               case 0: amount=(x-250)*1.50+25+75+120;
                                        break;
                           } break;
             } break;
    }
    total=amount+amount*0.2;
    printf("total bill %f",total);
    return 0;
}*/
/* 8
#include<stdio.h>
int main()
{
    int x;
    printf("enter a numbers");
    scanf("%d",&x);
    switch(x<0)
    {
       case 1: printf("%d",-x);
                break;
        case 0: printf("%d",-x);
                break;
    }
    return 0;
}*/
/* 9
#include<stdio.h>
int main()
{
    int x;
    printf("enter a numbers ");
    scanf("%d",&x);
    switch(x%2==0)
    {
       case 1: printf("%d",x+1);
               break;
        case 0: printf("%d",x);
                 break;
    }
    return 0;
}*/

#include<stdio.h>
int main()
{
    int a,b,c,d;
    int x,y;
    printf("enter three numbers");
    scanf("%d%d%d",&a,&b,&c);
    d=b*b-4*a*c;
    switch(d<0)
    {
        case 1: printf("roots are imaganary");
                break;
        case 0: switch(d==0)
        {
        case 1: printf("root are equal");
                x=(-b-sqrt(d))/(2*a);
                y=(-b+sqrt(d))/(2*a);
                printf("roots %d %d",x,y);
                break;
        case 0: printf("roots are distince");
               x=(-b-sqrt(d))/(2*a);
                y=(-b+sqrt(d))/(2*a);
                printf("roots %d %d",x,y);
                break;
        } break;
    }
    return 0;
}





