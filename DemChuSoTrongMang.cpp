#include<iostream>
using namespace std;
void DemSoPhanTu(int a[], int n){
	
	for(int i = 0; i < n - 1 ; i++){
		int dem = 1;
		bool daXet = false;
        for(int j = 0; j < i; j++){
            if(a[i] == a[j]){
                daXet = true;
                break;
            }
        }
        if(daXet == true){
        	continue;
		}
            
        for(int j = i + 1; j < n; j++){
            if(a[i] == a[j]){
                dem++;
            }
        }
        cout <<a[i]<<": "<<dem<<" lan!"<<endl;
    }
}
int main(){
	int n;
	cout<<"Nhap n: ";
	cin>>n;
	int a[n];
	for(int i = 0; i < n; i++){
		cout<<"a["<<i<<"] = ";
		cin>>a[i];
	}
	DemSoPhanTu(a, n);
	
	return 0;
}