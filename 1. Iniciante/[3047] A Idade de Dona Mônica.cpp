#include <bits/stdc++.h>

using namespace std;

int main()
{
    int m, a, b;
    vector<int> numbers(3);
    cin >> m >> numbers[0] >> numbers[1];
    numbers[2] = m-(numbers[0]+numbers[1]);
    cout << *max_element(numbers.begin(),numbers.end()) << endl;
    return 0;
}
