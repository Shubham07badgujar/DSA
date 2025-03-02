#include<iostream>
using namespace std;

void pattern9(int n){
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n-i-1; j++)
        {
            cout<<"   ";
        }
        for(int j = 0; j< 2*i+1;j++){
            cout<<" * ";
        }
        for (int j = 0; j < n-i-1 ; j++)
        {
            cout<<"   ";
        }
        
        cout << endl;
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout<<"   ";
        }
        for(int j = 0; j< 2*n-(2*i+1);j++){
            cout<<" * ";
        }
        for (int j = 0; j < i ; j++)
        {
            cout<<"   ";
        }
        
        cout << endl;
    }
}

int main()
{
    int n, m;
    cout << "Enter the how many cases you have to run ";
    cin >> m;

    // pattern1(n);
    for (int i = 0; i < m; i++)
    {
        cout << "Enter Number For Case" << i << endl;
        int n = 3;
        cin >> n;
        // pattern1(n);
        // pattern2(n);
        // pattern3(n);
        // pattern4(n);
        // pattern5(n);
        // pattern6(n);
        // pattern7(n);
        // pattern8(n);
        pattern9(n);
    }

    return 0;
}
