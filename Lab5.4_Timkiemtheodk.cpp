//Đề: Với mãng tĩnh, tìm kiếm theo điều kiện: 
//Tìm tất cả các số âm, tìm số lớn nhất, tìm số chẵn, tìm số nguyên tố
#include <iostream>
#include <cmath>
using namespace std;
void nhap(int a[], int n){
	for(int i = 0; i < n; i++){
		cout<<"Nhap a["<<i<<"] = ";
		cin>>a[i];
	}
}
void TimSoAm(const int a[], int n) {
    cout << "Cac so am: ";
    for (int i = 0; i < n; ++i) {
        if (a[i] < 0) {
            cout << a[i] << " ";
        }
    }
    cout << endl;
}
int TimSoLonNhat(const int a[], int n) {
    int maxNumber = a[0];
    for (int i = 1; i < n; ++i) {
        if (a[i] > maxNumber) {
            maxNumber = a[i];
        }
    }
    return maxNumber;
}
void TimSoChan(const int a[], int n) {
    cout << "Cac so chan: ";
    for (int i = 0; i < n; ++i) {
        if (a[i] % 2 == 0) {
            cout << a[i] << " ";
        }
    }
    cout << endl;
}
bool LaSoNguyenTo(int n) {
    if (n < 2){
    	return false;	
	}
    for (int i = 2; i <= sqrt(n); i++){
        if (n % i == 0){
            return false;
        }
    }
    return true;
}
void TimSoNguyenTo(const int a[], int n) {
    cout << "Cac so nguyen to: ";
    for (int i = 0; i < n; ++i) {
        if (LaSoNguyenTo(a[i])) {
            cout << a[i] << " ";
        }
    }
    cout << endl;
}
int main() {
    int a[10] = {12, -10, 2, 6, 5, -2, 13, 9, -6, 20};
    int n = sizeof(a) / sizeof(a[0]);
//    int n;
//    cout<<"Nhap n: ";
//    cin>>n;
//    int a[n];
//    nhap(a, n);
    TimSoAm(a, n);
    cout<<"So lon nhat: "<<TimSoLonNhat(a, n)<<endl;
    TimSoChan(a, n);
    TimSoNguyenTo(a, n);
    return 0;
}

