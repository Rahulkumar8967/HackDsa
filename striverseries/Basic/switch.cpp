#include <iostream>
using namespace std;

int main()
{
    int day;
    cout << "Enter the day ";
    cin >> day;

    switch (day)
    {

    case 1:
        cout << "monday";
        break;

    case 2:
        cout << "Tuesday";
        break;

    case 3:
        cout << "wednesday";
        break;

    case 4:
        cout << "Thursday";
        break;

    case 5:
        cout << "Friday";
        break;

    case 6:
        cout << "Saturday";
        break;

    case 7:
        cout << "sundayday";
        break;

    default :
        cout << "holiday";
    }

    return 0;
}