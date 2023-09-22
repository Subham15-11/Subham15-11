#include<iostream>
using namespace std;


int getbit(int n,int pos)
{
    return (n&(1<<pos)!=0);
}


int setbit(int n,int pos)
{
    return (n|(1<<pos));
}


int clearbit(int n,int pos)
{
    int x= ~(1<<pos);
    return (n&x);
}


int updatebit(int n,int pos,int value)
{
    int x= ~(1<<pos);
    n=n&x;
    return (n|(value<<pos));
}


int main()
{
    //cout<<getbit(5,2)<<endl;
    //cout<<setbit(5,1)<<endl;
   // cout<<clearbit(5,2)<<endl;
    cout<<updatebit(5,1,1)<<endl;

    return 0;
}
