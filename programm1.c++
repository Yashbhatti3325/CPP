#include <iostream>
using namespace std;
int main()
{
    int count[5]={0},i,sb=0,b=0,max=0,ind=0;
    cout<<"To vote candidate 1 enter 1"<<endl;
    cout<<"To vote candidate 2 enter 2"<<endl;
    cout<<"To vote candidate 3 enter 3"<<endl;
    cout<<"To vote candidate 4 enter 4"<<endl;
    cout<<"To vote candidate 5 enter 5"<<endl;
    for (i=0;i<5;i++)
    {
        cout<<"Enter Your vote : ";
        cin>>b;
        switch (b)
        {
        case 1:count[b-1]++;
            break;
        case 2:count[b-1]++;
            break;
        case 3:count[b-1]++;
            break;
        case 4:count[b-1]++;
            break;
        case 5:count[b-1]++;
            break;
        default:
            sb++;
        }
    }
    for (i=0;i<5;i++)
    {
        cout<<"Candidate "<<i+1<<" Votes : "<<count[i]<<"\n";
        
    }
    cout<<"Spoilt ballot : "<<sb<<endl;
    for (i=0;i<5;i++)
    {
        if (count[i]>max)
        {
            max=count[i];
            ind=i;

        }
        
    }
     for (i=0;i<5;i++)
    {
        if (count[i]==max && ind!=i)
        {
            cout<<"Wait for reelection";
        }
        
    }
    
    return 0;
}
