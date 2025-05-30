/*Create a function to check whether a character is an alphabet, digit, or special 
character. You can print  “alphabet”, “digit”, or “special character” inside the 
function.
*/
#include<iostream>
using namespace std;
void check(char x){
if(x>='A' &&x<='Z'||x>='a'&&x<='z'){
    cout<<"alphabet";
}
else if(x>='0'&&x<='9'){
    cout<<"number";
}
else {
    cout<<"special character";
}
}
int main (){
char x;
cin>>x;
check(x);

}