#include<iostream>
using namespace std;

void chuyen0VeCuoiMang(int a[], int n){
    int x = 0;
    for(int i = 0; i < n; i++){
        if(a[i] != 0){
            swap(a[i], a[x]);
            x++;
        }
    }
}
int main(){
    int a[10] = {1,4,0,3,2,-1,0,0,2,5};
    int n = sizeof(a) / sizeof(a[0]);
    chuyen0VeCuoiMang(a, n);
    cout << "===XUAT MANG===" << endl;
    for(int i = 0; i < n; i++){
        cout << a[i] << " ";
    }
    return 0;
}
