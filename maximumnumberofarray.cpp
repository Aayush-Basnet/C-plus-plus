//write a C++ program using a function with reference argument to get the maximum number of an array.

#include<iostream>
using namespace std;
void maximum(int arr[],int n, int& max){
	max= arr[0];
	for(int i=1;i<n;i++){
		if(arr[i]>max){
			max=arr[i];
		}
	}
}
int main(){
	int arr[]={5,2,3,5,6,7,8,2,6};
	int n= sizeof(arr)/sizeof(arr[0]);
	int max;
	maximum(arr,n,max);
	cout<<"The maximum number in the array is "<<max<<endl;
	
	return 0;
}
