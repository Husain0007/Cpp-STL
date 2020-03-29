#include <vector>
#include <algorithm>
#include <iostream>
#include <cstring>
using namespace std;

class Car
{
public:
    string car_name;
    int x, y;
    Car()
    {
    }
    Car(string n, int x, int y)
    {
        car_name = n;
        this->x = x;
        this->y = y;
    }
    int dist()
    {
        // return square of distance from origin of a given car
        return x * x + y * y;
    }
    int length()
    {
        return car_name.length();
    }
};

bool compare(Car A, Car B)
{
    int da = A.dist();
    int db = B.dist();
    if (da == db)
    {
        return A.length() < B.length();
    }
    return da < db;
}

int main()
{

    int n;
    cin >> n;
    vector<Car> v;

    for (int i = 0; i < n; i++)
    {
        int x, y;
        string name;
        cin >> x >> y >> name;
        // Creating a car object
        Car temp(name, x, y);
        v.push_back(temp);
    }
    sort(v.begin(), v.end(), compare);

    for (auto c : v)
    {
        cout << "Car " << c.car_name << " Dist " << c.dist() << " Location " << c.x << ", " << c.y << endl;
    }
    return 0;
}
