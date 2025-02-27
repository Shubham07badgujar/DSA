#include <iostream>
using namespace std;

int counter = 0;
void printName(string name1, int n)
{
    if (counter == n)
    {
        return;
    }

    cout << "Name  is : " << name1 << endl;
    counter++;
    printName(name1, counter);
   
}
int main()
{

    string name;
    int n;
    
    
    cout<<counter<<endl;;
    cout << "Enter the name " << endl;
    cin >> name;
    cout << "Enter the total number of count you have to print your name" << endl;
    cin >> n;
     cout<<counter<<endl;;
      cout<<counter<<endl;
    printName(name, n);
    return 0;
}

#include <iostream>
using namespace std;

void printName(string name1, int current, int n)
{
    if (current == n)
    {
        return;
    }

    cout << "Name is : " << name1 << endl;
    printName(name1, current + 1, n);
}

int main()
{
    string name;
    int n;

    cout << "Enter the name: ";
    cin >> name;
    cout << "Enter the total number of times to print your name: ";
    cin >> n;

    printName(name, 0, n); // Start with 0
    return 0;
}
