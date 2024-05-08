#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int x1, x2, y1, y2;
    cout << "Enter x1, x2, y1, y2: ";
    cin >> x1 >> x2 >> y1 >> y2;
    float dist;
    dist = sqrt(pow(x2-x1, 2) + (pow(y2-y1,2)));
    cout << "The distance is: " << dist;
    return 0;
}
