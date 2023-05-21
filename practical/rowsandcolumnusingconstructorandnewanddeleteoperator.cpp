/*
Define a class matrix having the with data member row, col as integer and an pointer 
to int pointer. introduce constructor that initializes the row, col and also the pointer 
to null value. another parameterized constructor that should allocate the memory for the
matrix object as specified row and column by its arguments. Your class should include another
member  function for input the matrix elements and for display the matrix elements and a destructor
to clean up the memory. Use new and delete operators for allocate and deallocate the memory.
*/
#include<iostream>
using namespace std;
class Matrix{
	private:
		int row;
		int col;
		int **data;
		
	public:
		Matrix(int r, int c){
			row=r;
			col=c;
			data= new int*[row];
			for(int i=0;i<row;i++){
				data[i]=new int[col];
			}
		}
		
	void input(){
		cout<<"Enter the matrix elements: "<<endl;
		for (int i=0;i<row;i++){
			for(int j=0;j<col;j++){
				cin>>data[i][j];
			}
		}
	}
	
	void display(){
		cout<<"Matrix: "<<endl;
		for(int i=0;i<row;i++){
			for(int j=0;j<col;j++){
				cout<<data[i][j]<<" ";
			}
			cout<<endl;
		}
	}
	
	~Matrix(){
		for(int i=0;i<row;i++){
			delete[] data[i];
		}
		delete[] data;
	}
};
int main(){
	int r,c;
	cout<<"Enter the number of rows and columns: "<<endl;
	cin>>r>>c;
	Matrix m(r,c);
	m.input();
	m.display();
	return 0;
}
/*
Output
Enter the number of rows and columns:
2 2
Enter the matrix elements:
1 4
2 0
Matrix:
1 4
2 0
*/
