#include<iostream>
#include<string.h>
#include<conio.h>
#include<stdio.h>
using namespace std;
void reverseit(char *p){
	int j;
	int len = strlen(p);
	j= len-1;
	for(int i=0;i<len/2;i++){
		char a=p[i];
		p[i]=p[j];
		p[j]=a;
		j--;
	}
	cout<<"\n Reverse of string: ";
	puts(p);
	
}
int main(){
	char str[50];
	char ch;
	cout<<"\nEnter the string: ";
	gets(str);
	reverseit(str);
	getch();
	
}
