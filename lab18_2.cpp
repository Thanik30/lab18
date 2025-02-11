#include<iostream>
#include<algorithm>
using namespace std;

struct Rect{
	double x,y,w,h;
};

double overlap(Rect *X,Rect *Y){
	double x1 = X->x;
	double x2 = X->x + X->w;
	double y1 = X->y;
	double y2 = X->y - X->h;
	double x3 = Y->x;
	double x4 = Y->x + Y->w;
	double y3 = Y->y;
	double y4 = Y->y - Y->h;
	double overlapW = min(x2,x4) - max(x1,x3);
	double overlapH = min(y1,y3) - max(y2,y4);
	if(overlapW < 0 || overlapH < 0) return 0;
	return overlapW * overlapH;
}
int main(){
	Rect R1 = {1,1,5,5};
	Rect R2 = {2,2,5,5};	
	cout << overlap(&R1,&R2);
	return 0;
}