#include <iostream>
using namespace std;

void citire(int a[10][10],int n);
void afisare(int a[10][10],int n);
void suma();

void citire(int a[10][10],int n){
	int i,j;
	cout << "Citire matrice:\n\n";
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			cout << "a[" << i << "]["<< j << "]= ";
			cin >> a[i][j];
		}
	}
}

void afisare(int a[10][10],int n){
	int i,j;
	cout << "Afisare matrice:\n\n";
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			cout << "a[" << i << "]["<< j << "]= ";
			cout << a[i][j];
			cout << endl;
		}
	}
}

void suma(){
	int n, sum[10][10];
	int i,j,a[10][10],b[10][10];
	
	cout << "Introduceti un nr:" << endl;
	cin >> n;
	
	citire(a,n);
	citire(b,n);
	
	
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			sum[i][j]=a[i][j]+b[i][j];
		}
	}
	cout << "Suma celor doua matrici este:\n" << endl;
	afisare(sum,n);
	}




void main(){

	suma();
	system("pause");
}