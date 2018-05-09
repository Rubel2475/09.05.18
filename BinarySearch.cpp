#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,j,n,loc,item=77,BEG,END,MID,arr[25];

    cout << "number of array elements : ";
    cin >> n;

    cout << "the array:";
    for(i=1;i<=n;i++)
    {
        cin >> arr[i];
    }

    BEG=1;
    END=n;
    MID=(BEG+END)/2;

    while(BEG<=END && arr[MID]!=item)
    {
        if(item<arr[MID])
        {
            END = MID-1;
        }
        if(item>arr[MID])
        {
            BEG = MID+1;
        }

        MID=(BEG+END)/2;
        //cout << MID << " ";
    }

    for(i=MID;i<=n;i++)
    {
        if(arr[i]==item)
        {
            loc=i;
            cout << "the location of item is: " << loc << endl;
        }
        else
        {
            //loc = NULL;
            cout << "item not found" << endl;
            break;
        }

    }

    return 0;
}
