#include<iostream>
using namespace std;
int main()
{
    int number,sum=0,tem;
    cout<<"Enter a number to check the number is Armstrong or not Armstrong: ";
    cin>>number;
    tem=number;
    while(number>0)
    {
        int r=number%10;
        sum=sum+(r*r*r);
        number=number/10;
    }
    if(tem==sum)
    {
        cout<<"The number is Armstrong:";
    }
    else{
        cou<<"The number is not Armstrong: ";
    }

}
