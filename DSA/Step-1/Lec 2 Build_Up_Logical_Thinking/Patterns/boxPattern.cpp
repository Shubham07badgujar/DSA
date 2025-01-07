#include<iostream>
using namespace std;

void pattern1(int n){
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n;j++)
        {
            cout<<" * ";
 
        }
        cout<<endl;
    }
}
int main(){
    int n,m;
    cout<<"Enter the how many cases you have to run ";
    cin>>m;
    
    // pattern1(n);
    for (int i = 0; i < m; i++)
    {
        cout<<"Enter Number For Case"<<i<<endl;
        int n;
        cin>>n;
        pattern1(n);
    }
    

    return 0;    
}