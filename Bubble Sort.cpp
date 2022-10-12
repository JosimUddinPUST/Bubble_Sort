#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> ary;
    int i,n,j,ch, tmp,total=0;
    cout<<"Enter elements to sort: ";
    while(cin>>n)
    {
        ary.push_back(n);
        total++;
        if(getchar()=='\n')
        {
            break;
        }
    }
    cout<<"Enter your choice:"<<endl;
    cout<<"1. Ascending sort."<<endl;
    cout<<"2. Descending sort."<<endl;
    cout<<"3. Both."<<endl;
    cin>>ch;
    for(i=0; i<total-1; i++)
    {
        for(j=0; j<(total-i-1); j++)
        {
            if(ary[j]>ary[j+1])
            {
                tmp=ary[j+1];
                ary[j+1]=ary[j];
                ary[j]=tmp;
            }
        }
    }
    if(ch==1)
    {
        system("CLS");
        cout<<"The ascending sorted array is: ";
        for (auto it = ary.begin(); it<ary.end(); it++)
            cout << *it << " ";
    }
    else if(ch==2)
    {
        system("CLS");
        cout<<"The descending sorted array is: ";
        for (auto it = ary.end()-1; it>=ary.begin(); it--)
            cout << *it << " ";
    }
    else if(ch==3)
    {
        system("CLS");
        cout<<"The ascending sorted array is: ";
        for (auto it = ary.begin(); it<ary.end(); it++)
            cout << *it << " ";
        cout<<endl<<"The descending sorted array is: ";
        for (auto it = ary.end()-1; it>=ary.begin(); it--)
            cout << *it << " ";
    }
    else
        cout<<"Wrong input. Try again.";
    return 0;
}
