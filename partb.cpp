#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int n;

    cout << "Enter an integer: ";
    cin >> n;

    cout << endl;

    while(n != 1 && n != 0)
    {
        cout << n << " ";

        if(n%2 == 0)
            n /= 2;
        else
            n = n * 3 + 1;
    }

    cout << n << endl;

    return 0;
}
