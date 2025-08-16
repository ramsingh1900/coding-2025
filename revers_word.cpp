#include <iostream>
#include<string>
#include<climits>
#include<algorithm>
using namespace std;
 void swap(string &str,int b,int e)
    {
        for(b;b<e;b++)
        {
            char ch = str[b];
            str[b] = str[e-1];
            str[e-1]=ch;
            e--;
        }
       
    }
int main()
{
    //input = Hi this is bangalore
    
    //output = iH siht si erolagnab
    string s="Hi this is bangalore";
    
    string ans ="";
    int n=s.size();
    string final="";
    
    int count = 0;
    for(int i=0;i<=n;i++)
    {
       
        if(s[i]==' ' || s[i]=='\0')
        {
            swap(s,count,i);
         // reverse(s.begin()+count, s.begin()+i);
    
          count=i+1;
        }
        
    }
    
    
    cout<<s<<endl;
    return 0;
}
