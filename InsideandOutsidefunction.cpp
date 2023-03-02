//class practice using inside,outside defintion
#include<iostream>
using namespace std;
class Myclass{
	public:
		string name;
		string address;
		int age;
		
	void display(){
		cout<<"Hello World"<<endl;
		cout<<"This is inside call defintion"<<endl;
	}
	
	void method();
	
};
void Myclass::method(){
	cout<<"This is outside class definition"<<endl;
}
int main(){
	Myclass myobj;
	myobj.name="Aayush";
	myobj.address="Kanakai-5,Jhapa";
	myobj.age=20;
	
	myobj.display();
	myobj.method();
	
	cout<<myobj.name<<" "<<myobj.address<<" "<<myobj.age<<" "<<endl;

return 0;	
}
