#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	int s1,s2,i,j,k;
	int set1[40],set2[40],set3[40];
	
	//Read the size of the sets from the user
	cout<<"Enter the size of set1 : ";
	cin>>s1;
	cout<<"Enter the size of set2: ";
	cin>>s2;
	
	//Read the elements of set1 from the user
	cout<<"Enter the element in set1: "<<endl;
	for(i=0;i<s1;i++){
		cin>>set1[i];
	}
		//Read the elements of set1 from the user
	cout<<"Enter the element in set2: "<<endl;
	for(j=0;j<s2;j++){
		cin>>set2[j];
	}
//for the element display
cout<<"The element in set1 is={";	
for(i=0;i<s1;i++){
	cout<<set1[i];
	cout<<", ";
}
cout<<"}"<<endl;
	cout<<"The element in set2 is={";	
for(j=0;j<s2;j++){
	cout<<set2[j];
	cout<<", ";
}
cout<<"}"<<endl;

// copy all elements from set1 into the result array
for(i=0;i<s1;i++){
	set3[k]=set1[i];
	k++;
}

// copy all elements from set2 into the result array
// If an element is already present, it will not be inserted again
for(i=0;i<s2;i++){
	bool found=false;
	for(j=0;j<k;j++){
		if(set2[i]==set3[j]){
			found=true;
			break;
		}
	}
	if(!found){
		set3[k]=set2[i];
		k++;
	}
}

// Print the result array
cout<<"The union of the two sets is: ";
for(i=0;i<k;i++){
	cout<<set3[i]<<" ";
}
cout<<endl;


	return 0;
}
