#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int i, j;
    // for (int i = 0; i < 5; i++)
    // {
    //     for (int j = 0; j < 5; j++)
    //     {
    //         cout <<"*\t";
    //     }
    //     cout<<"\n";

    // }
    // for (int i = 0; i < 5; i++)
    // {
    //     for (int j = 0; j <= i; j++)
    //     {
    //         cout<<"*\t";
    //     }
    //     cout<<"\n";

    // }
    // above code will print
    // *
    // *       *
    // *       *       *
    // *       *       *       *
    // *       *       *       *       *

    for (int i = 0; i < 5; i++)
    {
        for (int j = 5 - i; j > 0; j--)
        {
            cout << "*\t";
        }
        cout << "\n";
    }
    return 0;
    // *       *       *       *       *
    // *       *       *       *
    // *       *       *
    // *       *
    // *
}
