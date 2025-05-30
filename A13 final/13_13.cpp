/*lcm*/
#include<bits/stdc++.h>
using namespace std;
int rec(int mx,int mn,int term,int lcm){
    term++;
    if((mx*mn)==term){
        cout<<1;
        
        return 0;
    }
    if(term%mx==0 && term%mn==0){
        lcm=term;
        cout<<lcm<<endl;
        return 0;
    }
    rec(mx,mn,term,lcm);
}
int main(){
    int x,y;
    cin>>x>>y;
    int maxx=max(x,y);
    int minn=min(x,y);
    rec(maxx,minn,minn,1);
}