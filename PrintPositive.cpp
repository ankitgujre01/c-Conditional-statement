#include<iostream>
using namespace std;
int main() {
    int number;
    cout<<"Enter any Number for check Positive or not : \n";   // backslash (\n) is use break line.
    cin>>number;
    /*condition statement for checking positive*/
    if (number >= 0)
    {
        cout<<"Enter number is positive \n";
    }
    else{
        cout<<"Enter number is not positive";
    }
    
}