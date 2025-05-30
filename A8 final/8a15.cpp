/*Create a function to check whether a year is a leap year or not.
 The function should return a boolean value. (true/false)*/
 #include<iostream>
 using namespace std;
 bool check(int year){
    bool bel=true;
 if (year%100!=0 && year %400==0)
{
    return true;
}
else if(year%100!=0 && year%4==0)
{
     return true;

}else 
{
    return false;
}

 }
 int main (){
    int x;
    cin>>x;
    bool bel =check(x);
    if(bel==1){
        cout<<"True";
    }
    else{
        cout<<"false";
    }
 }