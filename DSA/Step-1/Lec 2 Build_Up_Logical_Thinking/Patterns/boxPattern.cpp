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
            cout << j + 1;
        }
        cout << endl;
    }
}
void pattern7(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << "   ";
        }
        for (int j = 0; j < 2 * i + 1; j++)
        {
            cout << " * ";
        }
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << "   ";
        }

        cout << endl;
    }
}
void pattern8(int n)
{

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << "   ";
        }
        for (int j = 0; j < 2 * n - (2 * i + 1); j++)
        {
            cout << " * ";
        }
        for (int j = 0; j < i; j++)
        {
            cout << "   ";
        }

        cout << endl;
    }
}
void pattern9(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << "   ";
        }
        for (int j = 0; j < 2 * i + 1; j++)
        {
            cout << " * ";
        }
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << "   ";
        }

        cout << endl;
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << "   ";
        }
        for (int j = 0; j < 2 * n - (2 * i + 1); j++)
        {
            cout << " * ";
        }
        for (int j = 0; j < i; j++)
        {
            cout << "   ";
        }

        cout << endl;
    }
}
void pattern10(int n)
{
    for (int i = 1; i < 2 * n - 1; i++)
    {
        int stars = i;
        if (i > n)
        {
            stars = 2 * n - i;
        }
        for (int j = 1; j <= stars; j++)
        {
            cout << " * ";
        }
        cout << endl;
    }
}
void pattern11(int n)
{
    for (int i = 1; i <= n; i++)
    {
        int start = 1;
        if(i % 2 == 1){
            start = 1;
        }
        else{
            start = 0;
        }
        for (int j = 1; j <= i; j++)
        {
            cout<<start;
            start=1-start;   
        }
        cout<<endl;
    }
}
void pattern12(int n){
    for (int i = 0; i < n; i++)
    {

        for (int j = 0; j < j; j++)
        {
       
        }
        
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
        // pattern9(n);
        // pattern10(n);
        pattern11(n);
    }

    return 0;
}