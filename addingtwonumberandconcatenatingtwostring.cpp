/*
write a program overloading + operator that is used for adding two user defined objects 
as well concatenating two strings depending upon the arguments. define suitable class, 
data member and met
*/

#include<iostream>
#include<string>
using namespace std;

class myclass{
	private:
		int num;
		
	public:
		myclass(int n):num(n){
			
		}
		int getnum(){
			return num;
		}
	
	myclass operator+(const myclass& obj){
		return myclass(num + obj.num);
	}
};
string operator+(const string* s1, const string& s2){
	return s1+s2;
}
int main(){
	myclass obj1(5);
	myclass obj2(10);
	myclass obj3=obj1+obj2;
	cout<<"Sum of two objects: "<<obj3.getnum()<<endl;
	string s1="Hello ";
	string s2="world! ";
	string s3=s1+s2;
	cout<<"Concatenated string: "<<s3<<endl;
	return 0;
}

/*
Output
Sum of two objects: 15
Concatenated string: Hello world!

*/
