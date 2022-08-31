// Program to reverse the given number

/*
----- Algorithm -----
step 1 - variable initialization - int n,no,r,rev{0};
step 2 - Get the input from the user as N;
step 3 - no=n
step 4 - while(no>0)
            r=no%20;
            rev=rev*10+r;
            no=no/10;
step 5 - Print the rev
step 6 - end of the algorithm
*/
#include<iostream>
using namespace std;

int main(){
    int n,no,r,rev{0};
    cout<<"Enter the Positive Number:";
    cin>>n;
    no=n;
    while(no>0)
    {
        r=no%10;
        rev=rev*10+r;
        no=no/10;
    }
    cout<<"The Reverse of "<<n<< " = "<<rev;
return 0;
}