#include<string>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    char str[]="comp";
    cout<<"\nDisplaying string: ";
    cout<<str;
    cout<<"\nSize of str: ";
    cout<<sizeof(str);
    /*char str1[]={'c','o','m','k'};
    cout<<"\nChar array: "; 
    cout<<str1;*/
    string name,fname;
    cout<<"\nEnter full name: ";
    
    getline(cin,fname);
    cout<<fname;
    
    cout<<"\nEnter full name: ";
    cin>>name;
    cout<<name;
    
    
    cout<<endl;
}