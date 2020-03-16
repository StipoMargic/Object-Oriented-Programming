#include <iostream>

using namespace std;

struct circle
{
	int x;
	int y;
	int radius;
};

bool function(const circle& c1, const circle& c2)
{

	double d = (c1.x - c2.x) * (c1.x - c2.x) + (c1.y - c2.y) * (c1.y - c2.y);

	if (((c1.radius - c2.radius) * (c1.radius - c2.radius) <= d) && (d <= (c1.radius + c2.radius) * (c1.radius + c2.radius)))
		return true;
	else
		return false;

}

int main()
{
	circle circle1, circle2;

	circle1.x = 3;
	circle1.y = 3;
	circle1.radius = 3;

	circle2.x = 6;
	circle2.y = 6;
	circle2.radius = 6;

	bool r = function(circle1, circle2);

	cout << boolalpha << r << endl;

	return 0;
}