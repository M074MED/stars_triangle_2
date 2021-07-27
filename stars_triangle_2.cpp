#include <iostream>
using namespace std;

int main()
{
    int x;
    cout << "Enter the number of line: ";
Mark:
    cin >> x;
    if (x >= 0)
    {
        for (int i = 1; i <= 2 * x - 2; i += 2)
        {
            for (int j = ((2 * x - 2) - i) / 2; j >= 0; j--)
            {
                cout << " ";
            }
            for (int k = 2; k <= i - 1; k++)
            {
                if (i == 1)
                    continue;
                if (k == 2)
                    cout << "*";
                cout << " ";
            }
            cout << "*\n";
        }
        for (int h = 1; h <= 2 * x - 1; h++)
        {
            cout << "*";
        }
    }
    else
    {
        cout << "\aError!! Wrong input, please enter a positive number: ";
        goto Mark;
    }
    return 0;
}
