#include<iostream>
using namespace std;
int main(){
	int set1[40],set2[40],set3[40],i,j,k,s1,s2;

	//Read the size of the sets from the user	
	cout<<"Enter the size of set1: ";
	cin>>s1;
	cout<<"Enter the size of set2: ";
	cin>>s2;
	//Read the elements of the set1 from the user
	cout<<"Enter the elements of set1: ";
	for(i=0;i<s1;i++){
		cin>>set1[i];
	}
		//Read the elements of the set2 from the user
	cout<<"Enter the elements of set2: ";
	for(i=0;i<s2;i++){
		cin>>set2[i];
	}
	
	//find the difference of two sets
	for(i=0;i<s1;i++){
		bool found=false;
		for(j=0;j<s2;j++){
			if(set1[i]==set2[j]){
				found=true;
				break;
			}
		}
		if(!found){
			set3[k]=set1[i];
			k++;
		}
	}
	//print the result away
	cout<<"The difference of the two sets is: ";
	for(i=0;i<k;i++){
		cout<<set3[i]<<" ";
	}
	cout<<endl;
	
	
	return 0;
}
