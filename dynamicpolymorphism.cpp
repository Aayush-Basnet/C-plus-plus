#include<iostream>
using namespace std;
class shape{
	public:
	virtual	void draw(){
			cout<<"Drawing a shape"<<endl;
		}
};
class Rectangle: public shape{
	public:
		void draw(){
			cout<<"Drawing a Rectangle"<<endl;
		}
};
class circle: public shape{
	public:
		void draw(){
			cout<<"Drawing a circle"<<endl;
		}
};
int main(){
	shape shape1 = new Rectangle();
	shape shape2 = new circle();
	
	shape1 ->draw();
	shape2 ->draw();
	
	//delete shape1;
	//delete shape2;
	return 0;
}
