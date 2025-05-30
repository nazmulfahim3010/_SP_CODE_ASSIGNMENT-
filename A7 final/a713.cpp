/*Take input a binary number as a string and convert it to an integer, store it to an 
integer variable, and print it*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j;
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    bool visit[n]={false};
    for(i=0;i<n;i++)
    {
        if(visit[i])
            continue;
        for(j=i+1;j<n;j++)
        {
            if(arr[i]==arr[j])
            {
                visit[j]=true;
            }
        }
        cout<<arr[i]<<"\t";
    }
    return 0;
}


}