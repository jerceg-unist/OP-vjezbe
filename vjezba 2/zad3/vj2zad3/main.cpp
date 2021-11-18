#include <iostream>
#include <math.h>
#include "rec.h"
#include "cir.h"
using namespace std;

void Circle::init()
{
	cout << "Input the first point: ";
	cin >> first;
	cout << "\nInput the second point: ";
	cin >> second;
	cout << "\nInput r";
	cin >> r;
}
void Rectangle::init()
{
	cout << "\nEnter the width and lenght for the point: ";
	cin >> side1;
	cin >> side2;
	cout << "\nEnter the width and lenght for the point: ";
	cin >> side3;
	cin >> side4;
}

int intersection(Circle circle, Rectangle* rec,int cnt)
{
    int i = 0;
    int distance1;
    int distance2;
	int sum = 0;
	for (i = 0; i < cnt; i++)
	{
     distance1 = (rec[i].side1 - circle.first) * (rec[i].side1 - circle.first) + (rec[i].side2 - circle.second) * (rec[i].side2 - circle.second);
     distance2 = (rec[i].side3 - circle.first) * (rec[i].side3 - circle.first) + (rec[i].side4 - circle.second) * (rec[i].side4 - circle.second);
	}
	return sum;
}

int main()
{
	Circle circle;
	Rectangle* rec;
	int a = 0;
	cout << "Enter the array size";
	cin >> a;
	rec = new Rectangle[a];
	for (int i = 0; i < a; i++)
	{
		rec[i].init();
	}
    circle.init();
	cout << "\nNumber of rectangles that intersect is: " << intersection(circle, rec, a) << endl;
	return 0;
}
