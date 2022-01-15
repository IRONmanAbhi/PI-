#include <bits/stdc++.h>
using namespace std;
int main()
{   
    float x;
    char m[100]={"Value of pi at %s is %."};
    char n[3];
    char o[]={"f"};
    cout<<"\nEnter the place of decimal to which you want to print the value of pie: ";
    gets(n);
    strcat(m,n);
    strcat(m,o);
    x=(float)22/7;
    printf(m,n,x);
    return 0;
}