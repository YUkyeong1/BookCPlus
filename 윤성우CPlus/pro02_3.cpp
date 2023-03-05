#include <iostream>
using namespace std;


typedef struct __Point {
	int xpos;
	int ypos;
}Point;

Point& PntAdder(const Point& p1, const Point& p2) {
	Point* info = new Point;
	info->xpos = p1.xpos + p2.xpos;
	info->ypos = p1.ypos + p2.ypos;
	return *info;
}

int main() {

	Point* a = new Point;
	a->xpos = 10;
	a->ypos = 20;

	Point* b = new Point;
	b->xpos = 30;
	b->ypos = 40;

	Point& pref = PntAdder(*a, *b);
	cout << pref.xpos << "  " << pref.ypos << endl;

	delete a;
	delete b;
	delete& pref;
	
	return 0;
		
}