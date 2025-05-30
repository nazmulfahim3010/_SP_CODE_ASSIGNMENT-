/*Write a C program to take n number of integers as input
 and print the largest among them.*/
 #include<stdio.h>
 int main()
 {
    int n,num,max=0;
    scanf("%d",&n);
    for(int i=n;i!=0;i/=10){
        num = i%10;
      
      if(num>max){
        max=num;
      }
      
    }
    
   printf("%d ",max);


    return 0;
 }