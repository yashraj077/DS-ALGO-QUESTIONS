#include <iostream>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	
	while(t--){
	    int n;
	    cin>>n;
	    int arr[n], arr0[n], arr1[n], arr2[n];
	    int c0=0, c1=0, c2=0;
	    for (int i=0; i<n; i++){
	        int temp;
	        cin>>temp;
	        if (temp==0){
	            c0++;
	        }
	        else if (temp==1){
	            c1++;
	        }
	        else{
	            c2++;
	        }
	    }
	    
	    for (int j=0; j<c0; j++) cout<<0<<" ";
	    for (int k=0; k<c1; k++) cout<<1<<" ";
	    for (int l=0; l<c2; l++) cout<<2<<" ";
	    cout<<endl;
	
    }
    return 0;
}