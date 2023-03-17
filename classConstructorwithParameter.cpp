
#include<iostream>
using namespace std;
class Car{
	public:
		string brand;
		string model;
		int year;
	
	Car(string x, string y, int z){
		brand=x;
		model=y;
		year=z;
	}
/*	void showcardetail(){
		cout<<brand<<" "<<model<<" "<<year<<" "<<endl;
		
	}
*/
 void showcardetails();	
};

void Car::showcardetails(){
	cout<<brand<<" "<<model<<" "<<year<<" "<<endl;
}

int main(){
	Car myobj1("BMW","X9",1999);
	Car myobj2("Kia","Mustange",2004);
	
	//cout<<myobj1.brand<<" "<<myobj1.model<<" "<<myobj1.year<<" "<<endl;
	//cout<<myobj2.brand<<" "<<myobj2.model<<" "<<myobj2.year<<" "<<endl;
	
	myobj1.showcardetails();
	myobj2.showcardetails();
	return 0;
}
