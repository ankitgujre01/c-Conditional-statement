#include<iostream>
using namespace std;
int main()
{
    int number;
    cout<<"Enter any Number :\n ";
    cin>>number;

    if (number < 0)
    {
        cout<<"Enter number is Negative. \n";
    }
    else{
        cout<<"Not Negative";
    }
}