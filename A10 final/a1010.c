/*Write a program in C to count the total number of vowels, consonants, and other characters in a string.*/
#include<stdio.h>
int main (){
 char a[100];
 gets(a);
 int vowel=0,cons=0,charc=0,num=0;
 for(int i=0;a[i]!='\0';i++){
    if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u'||a[i]=='A'||a[i]=='E'||a[i]=='I'||a[i]=='O'||a[i]=='U'){
        vowel++;
    }
    else if((a[i]>='a'&&a[i]<='z')||(a[i]>='A'&&a[i]<='Z')){
        cons++;
    }
    else if(a[i]>='0'&&a[i]<='9'){
        num++;
    }
    else{
        charc++;
    }
 }
 printf("vowel -> %d\n",vowel);
 printf("constant-> %d\n",cons);
 printf("other character -> %d\n",charc);
 printf("number -> %d",num);
}