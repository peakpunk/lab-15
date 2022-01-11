#include<iostream>
using namespace std;

const int N = 5;

void inputMatrix(double [][N]);

void findLocalMax(const double [][N], bool [][N]);

void showMatrix(const bool [][N]);

int main(){
 double A[N][N]; 
 bool B[N][N]; 
 cout << "Input the matrix.....\n";
 inputMatrix(A);
 findLocalMax(A,B);
 cout << "Result is \n";
 showMatrix(B);
 return 0;
}

void inputMatrix(double a[][N]){
 for(int k = 0 ; k< N ; k++){
     cout << "Row " << k+1 << ": ";
  for(int l = 0; l < N ; l++){
   cin >> a[k][l];
  }
 }
}

void findLocalMax(const double a[][N], bool b[][N]){
 for(int j = 0; j < N ; j++){
  for(int i = 0; i < N ; i++){
   if ((a[i][j] >= a[i+1][j]) && (a[i][j] >= a[i-1][j]) && (a[i][j] >= a[i][j-1]) && (a[i][j] >= a[i][j+1])){
    if ((j != 0) && (j != N-1) && (i != 0) && (i != N-1)){
        b[i][j] = 1;
       }
    else b[i][j] = 0;
   }
   else b[i][j] = 0;
  }
 }
}

void showMatrix(const bool a[][N]){
    for(int i = 0; i< N; i++){
        for(int j = 0; j < N; j++){
            cout << a[i][j] << " ";
        }
        cout << "\n";
    }
}