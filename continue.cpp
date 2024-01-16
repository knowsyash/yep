#include<iostream>
using namespace std;
int main()
{
    int day;
    cin>>day;
    int i;
    int money;
    for(i=1;i<=30;i++)
    
     {
        if(i%2!=0)
        {
            continue;
        }
        if(money==0)
        {
            break;
        }
        cout<<"%d",i;
        cout<<"you can go"<<endl;
        money=money-300; 
     }
}