#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);


    int n,k;
    cin>>n>>k;
    int m = 0;
    int f = 0;
    int arr[n];
    bool x = true;
    for(int i = 0;i<n;i++)
    {
        int z;
        cin>>z;
        arr[i] = z;
        if(z==0)
        {
            f+=1;
        }
    }
    if(f==n)
    {
        cout<<0;
        x = false;
    }
    while(x)
    {
        if(arr[k-1]==0)
        {
            for(int i = 0;i<n;i++)
            {
                if(arr[i]>0)
                {
                    m+=1;
                }
            }
        }
        else
        {
            for(int i = 0;i<n;i++)
            {
                if(arr[i]>=arr[k-1])
                {
                    m+=1;
                }
            }
        }

        cout<<m;
        x = false;
    }

    return 0;
}
