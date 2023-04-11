// this pointer
#include<iostream>
using namespace std;
class myclass{
	private :
		int x;
		
	public:
	myclass(int x){
		this->x=x;
	}
	
	void display(){
		cout<<"x= "<<x;
	}
	
	
};
int main(){
	myclass obj(01);
	obj.display();
	
	return 0;
}
