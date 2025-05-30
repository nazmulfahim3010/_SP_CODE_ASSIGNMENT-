/*frequencey*/
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
        int count=1;
        for(j=i+1;j<n;j++)
        {
            if(arr[i]==arr[j])
            {
                count++;
                visit[j]=true;
            }
        }
        cout<<arr[i]<<":"<<count<<endl;
    }
    return 0;
}
