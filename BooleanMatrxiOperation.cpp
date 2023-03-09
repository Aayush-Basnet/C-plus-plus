//boolean matrix operations
#include<iostream>
using namespace std;
int main(){
	int colA, colB, rowA, rowB, k=0;
	start:
	cout<<"Enter number of rows and columns of matrix A: "<<endl;
	cin>>rowA>>colA;
	cout<<"Enter number of rows and columns of matrix B: "<<endl;
	cin>>rowB>>colB;
	if(colA!=rowB){
		system("CLS");
		cout<<"Error!!";
		goto start;
	}
	int matA[rowA][colA], matB[colA][colB], product[rowA][colB];
	cout<<"For matrix A: "<<endl;
	for(int i=0; i<rowA; i++){
		for(int j=0; j<colA; j++){
			cout<<"Enter element of position ("<<i+1<<", "<<j+1<<")";
			cin>>matA[i][j];
		}
	}
	cout<<"For matrix B: "<<endl;
	for(int i=0; i<rowB; i++){
		for(int j=0; j<colB; j++){
			cout<<"Enter element of position ("<<i+1<<", "<<j+1<<")";
			cin>>matB[i][j];
		}
	}
	cout<<"Entered matrices are: "<<endl;
	cout<<"Mat A: "<<endl;
	for(int i=0; i<rowA; i++){
		for(int j=0; j<colA; j++){
			cout<<matA[i][j]<<"\t";
		}
		cout<<endl;
	}
	cout<<"Mat B: "<<endl;
	for(int i=0; i<rowB; i++){
		for(int j=0; j<colB; j++){
			cout<<matB[i][j]<<"\t";
		}
		cout<<endl;
	}
	// Initializing elements of result matrix to 0
    for(int i = 0; i < rowA; i++) {
        for(int j = 0; j < colB; j++) {
            product[i][j] = 0;
        }
    }
    // Multiplying matrices a and b and
    // storing the result in product matrix
    for(int i= 0; i < rowA; i++) {
        for(int j = 0; j < colB; j++) {
            for(k = 0; k < colA; k++) {
                product[i][j] |= matA[i][k] && matB[k][j];
            }
        }
    }
    cout<<"Product of above matrices are: "<<endl;
	for(int i = 0; i < rowA; i++) {
        for(int j = 0; j < colB; j++) {
            cout << product[i][j] << "\t";
        }
        cout << endl;
    }
	if(colA!=rowA||colB!=rowB||colA!=rowB)
	{
		cout<<"Since above matrices are not square matrices of same dimensions, they work for meet or join operation.";
		return 0;
	}
	cout<<"Meet of above matrix is: "<<endl;
	for(int i = 0; i<rowA; i++){
		for(int j = 0; j<colB; j++){
			product[i][j]=matA[i][j]&&matB[i][j];
			cout<<product[i][j]<<"\t";
		}
		cout<<endl;
	}
		cout<<"Join of above matrix is: "<<endl;
	for(int i = 0; i<rowA; i++){
		for(int j = 0; j<colB; j++){
			product[i][j]=matA[i][j]||matB[i][j];
			cout<<product[i][j]<<"\t";
		}
		cout<<endl;
	}
	return 0;
}

