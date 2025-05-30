/*Take input two strings and compare if they are equal or not. If they are, print EQUAL. 
Otherwise, print NOT EQUAL.
*/
#include<iostream>
#include<cstring>
int main (){
    char a[100],b[100];
    gets(a);gets(b);
    bool is_same=true;
    for(int i=0;a[i]!='\0'||b[i]!='\0';i++){
    
    if(a[i]!=b[i]){
        is_same=false;
        break;
    }
    }
    if(is_same==true){
        printf("equal");
    }
    else{
        printf("not equal");
    }


}
