//Đề: Tạo mảng số nguyên
//-Có số phần tử xác định
//-Mảng động, xài bao nhiêu tạo bấy nhiêu
#include<iostream>
using namespace std;
int main(){
	int a[10] = {1,2,3,4,5,6,7,8,9,10};
	cout<<"===MANG TINH==="<<endl;
 	for(int i = 0 ; i < 10; i++){
 		cout<<a[i]<<" ";
  	}
  	cout<<endl<<"===MANG DONG==="<<endl;
  	int n;
	cout<<"Nhap n: ";
	cin>>n;
  	int* array = new int[n];
  	for(int i = 0 ; i < n; i++){
  		cout<<"a["<<i<<"] = ";
    	cin>>a[i];
  	}
  	cout<<"Cac phan tu trong mang: ";
  	for(int i = 0; i < n; i++){
  		cout<<a[i]<<" ";
	}
	delete[] array;
    return 0;
}
