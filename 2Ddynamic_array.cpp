#include<iostream>
using namespace std;
int main()
{
    int row ;
    cin>>row;
    int col;
    cin>>col;
    
    //2D aynamic array creat;
    int **arr =new int*[row];
    for(int i=0;i<row;i++)
    {
      arr[i]=new int[col];
        
    }
    
    //input user
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            cin>>arr[i][j];
        }
    }
    
    //output user
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    
    //2D array memory free or relise 
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            delete []arr[i];
        }
    }
    
    delete [] arr;
 
 return 0;
}
