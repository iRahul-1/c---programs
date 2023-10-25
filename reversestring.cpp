#include<iostream>
#include<string.h>
using namespace std;
int main(){
    char a[100];
    cout<<"Enter a string:"<<endl;
    gets(a);
    int l=strlen(a)-1;
    for(int i=l;i>=0;i--){
        if (isalpha(a[i]))
        {
            int s=i;
            while (s>=0&&a[s]!= ' ')
            {
                s--;
            }s++;
            int m=i;
            for(int k=s;k<=m;k++){
                cout<<a[k];
                i--;
            }
            cout<<" ";
        }
        
    }
    return 0;
}