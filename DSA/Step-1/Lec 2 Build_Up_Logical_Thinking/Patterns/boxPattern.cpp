#include <iostream>
using namespace std;

void pattern1(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << " * ";
        }
        cout << endl;
    }
}
void pattern2(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << " * ";
        }
        cout << endl;
    }
}

void pattern3(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << j + 1 << "\t";
        }
        cout << endl;
    }
}
void pattern4(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << i + 1;
        }
        cout << endl;
    }
}
void pattern5(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            cout << " * ";
        }
        cout << endl;
    }
}
void pattern6(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            cout << j+1;
        }
        cout << endl;
    }
}
void pattern7(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n-i-1; j++)
        {
            cout<<"   ";
        }
        for(int j = 0; j< 2*i+1;j++){
            cout<<" * ";
        }
        for (int l = 0; l < n-i-1 ; i++)
        {
            cout<<"   ";
        }
        
        cout << endl;
    }
}
void pattern8(int n){
    for (int i = n-1 ; i >= 0; i--)
    {
        for (int j = n-1; j < n-i-1 ; j--)
        {
            cout<<"   ";
        }

        for (int k = n-1; k >=0; k--)
        {
            cout<<" * ";
        }
        
        for (int l = n-1; l > n-i-1; l--)
        {
           cout<<"   ";
        }
        cout<<endl;
        
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
        pattern8(n);
    }

    return 0;
}