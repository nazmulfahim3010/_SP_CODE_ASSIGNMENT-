
/*Write a C program to take a hundred English letters as
 input using scanf() and output the number of vowels and consonants among them.
*/
# include<stdio.h>
int main ()
{int a,v=0;
char x;
for(a=1;a<=100;a++)
{
    scanf(" %c",&x);
    
    if(x=='A'||x=='E'||x=='I'||x=='O'||x=='U'||x=='a'||x=='i'||x=='o'||x=='u'||x=='e')
    {
        v++;
      
    }
   

}
int c= 100-v; 
printf(" v->%d\n c->%d",v,c);

    return 0;
}