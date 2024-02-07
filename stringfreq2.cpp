#include <bits/stdc++.h> 
using namespace std;
int main(){
    int arr[100]={0};
    for (int i = 0; i < 6; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    for (int i = 0; i < 6; i++)
    {   
        if(i%2==0)
        arr[i]+=2;
        else
        arr[i]++;
    }
    for (int i = 0; i < 6; i++)
    {
        cout<<i<<" = "<<arr[i]<<", ";
    }
    
    
}
