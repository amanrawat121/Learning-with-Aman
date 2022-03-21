#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int a, b, ch;
    cout<<"Enter values of a & b:\n";
    cin>>a>>b;
    cout<<"Enter your choice:\n";
    cout<<"1-Add\n2-Subtract\n3-Product\n4-Divide:\n";
    cin>>ch;
    switch (ch)
    {
    case 1:
        cout<<a+b;
        break;
    case 2:
        cout<<a-b;
        break;
    case 3:
        cout<<a*b;
        break;
    case 4:
        cout<<a/b;
        break;
    
    default:
        cout<<"Choice is not correct";
        break;
    }
    return 0;
}
