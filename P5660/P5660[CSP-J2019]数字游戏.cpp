#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s{};
    getline(cin, s);
    int counter{};
    for (int i = 0; i < 8; i++)
    {
        counter += static_cast<int>(s[i]) - 48;
    }
    cout << counter;
    return 0;
}