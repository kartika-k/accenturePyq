#include<iostream>
#include<string.h>
using namespace std;
int CalculateBinaryOperations(string& str)
{
    // int len = strlen(str);
    int len = str.length();
    //Let's consider the first element as a answer (because string can be a single char)
    int ans = str[0]-'0';
    for(int i=1; i<len-1; i+=2)
    {
        int j=i+1;
        //Performing operation for AND
        if(str[i]=='A')
        {
            ans = ans & (str[j]-'0');
        }
        //Performing operation for OR
        else if(str[i]=='B')
        {
            ans = ans | (str[j]-'0');
        }
        //Performing operation for XOR
        else if(str[i]=='C')
        {
            ans = ans ^ (str[j]-'0');
        }
    }
    return ans;
}
int main()
{
    // char str[100];
    string str;
    cout<<"Enter the String:\n";
    cin>>str;
    cout<<"The output is :\n";
    cout<<CalculateBinaryOperations(str);
} 