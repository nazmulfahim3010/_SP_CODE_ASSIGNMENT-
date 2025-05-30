#include<stdio.h>
int main()
{
    int x,y ;
    printf("enter quadrant value");
    scanf("%d %d",&x,&y);
     if ( x==0 && y==0)
    {
        printf("center");
    }
     else if ( x == 0)
    {
        printf("y axies");
    }
    else if (y == 0)
    {
        printf(" x axies");
    }
    
    else if(x>0 && y>0)
    {
        printf("1st  quadrant");
    }
    else if ( x<0 && y>0)
    {
        printf("2nd quadrant");
    
    }
    else if (x<0 && y<0)
    {
        printf("3rd  quadrant");
    }
    else if ( x>0 && y<0)
    {
        printf("4th  quadrant");
    }
   else 
   {
    printf("not eligable");
   }
return 0;
}/*Take two integer numbers (x,y) as input as if they represent a point in the XY coordinate plane, and print which quadrant they belong to. 
(For example- the point (1,5) belongs in the first quadrant whereas (-1,2) belongs in the second.)


*/