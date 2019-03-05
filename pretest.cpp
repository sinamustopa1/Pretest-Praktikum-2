/*
Nama : Sina Mustopa
Kelas : A
NPM : 140810180017
Tanggal : 05 - 03 - 2019
Deskripsi : move zero to end
*/

#include <iostream>

using namespace std;



void moveZeroToEnd(int arr[], int n){
	int data = 0;
for (int i=0 ; i<n ; i++){
	if (arr[i] !=0){
		arr[data++] = arr[i];
		
	}
	
	while (data < n) arr[data++] = 0;
	
}
}

void input (int (&arr) [100], int& n){
	cout<<"Masukkan Panjang Data : ";cin>>n;
	for (int i=0 ; i<n; i++){
		cout<<"Masukkan data cth [ ";cin>>arr[i];
		
		
	}
}

void output (int arr[], int n){
	for (int i=1; i<n; i++){
		cout<<arr[i];
	}
	
}

int main (){
	int arr[100];
	int n;
	input (arr,n);
	moveZeroToEnd(arr, n);
	output(arr , n);
}



  


