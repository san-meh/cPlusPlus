#include <bits/stdc++.h>

using namespace std;



int main()
{
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    string num[10] = {"Greater than 9","one", "two", "three", "four", "five", "six", "seven", "eight","nine"};

    // Write Your Code Here
    if (n <= 9)
    {
        cout << num[n];

    }
    else
    {
      cout << num[0];
    }

    return 0;
}