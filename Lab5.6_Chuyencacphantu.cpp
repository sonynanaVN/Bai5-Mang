//Đề: Chuyển các phần tử > 0 về cuối mảng, < 0 về đầu mảng, = 0 về giữa mảng
#include<iostream>
using namespace std;
int amZeroDuong(int a[], int n){
	cout<<"Am -> 0 -> Duong: ";
	for(int i = 0; i < n; i++){
		if(a[i] < 0){
			cout<<a[i]<<" ";
		}
	}
	for(int i = 0; i < n; i++){
		if(a[i] == 0){
			cout<<a[i]<<" ";
		}
	}
	for(int i = 0; i < n; i++){
		if(a[i] > 0){
			cout<<a[i]<<" ";
		}
	}
}
int main(){
	int n;
	cout<<"Nhap n: ";
	cin>>n;
	int a[n];
	for(int i = 0; i < n ; i++){
		cout<<"Nhap a["<<i<<"] = ";
		cin>>a[i];
	}
	amZeroDuong(a, n);
}