#include <bits/stdc++.h> 
using namespace std;
int main(){
    string str;
    getline(cin,str);
    int n = str.length();
    int frequency[256]={0};
    for (int i = 0; i <n ; i++)
    {
        cout<<str[i]<<" ";
    }
    cout<<endl;
     for (int i = 0; str[i] != '\0'; i++) {
        if(str[i] == ' '){
            break;
        }
        frequency[str[i]]++;
    }

     for (int i = 0; i < 256; i++) {
        
        if (frequency[i] != 0) {
            printf("%c=%d ", i, frequency[i]);
        }
    }
    }