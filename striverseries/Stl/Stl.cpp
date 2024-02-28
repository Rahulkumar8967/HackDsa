#include <bits/stdc++.h>
using namespace std;

void explainPair1()
{
    pair<int, int> p = {1, 3};
    cout << p.first << " " << p.second;
}
void explainPair2()
{
    pair<int, pair<int, int>> p = {1, {3, 4}};
    cout << p.first << " " << p.second.second << " " << p.second.first << endl;
}
void explainPair3()
{

    pair<int, int> arr[] = {{1, 2}, {3, 4}, {5, 6}};
    cout << arr[1].second;
}

int main()
{

    explainPair1();
    explainPair2();
    explainPair3();
    return 0;
}
