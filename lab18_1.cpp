#include<iostream>
using namespace std;

struct Rect{
	double x,y,w,h;
};

double overlap(Rect X,Rect Y){
	double x1 = max(X.x, Y.x);
	double x2 = min(X.x+X.w, Y.x+Y.w);
	double x = x2-x1;
	double y1 = max(X.y-X.h, Y.y-Y.h);
	double y2 = min(X.y, Y.y);
	double y = y2-y1;
	if(x*y>0) return x*y;
	else return 0;
}
int main(){
	Rect R1 = {1,1,5,5};
    Rect R2 = {2,2,5,5};	
	cout << overlap(R1,R2);	
	return 0;
}