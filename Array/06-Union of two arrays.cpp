#include <bits/stdc++.h>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	while (t--){
	    int n, m;
	   // map<int, int> dict;
	    set<int> dict;
	    cin>>n>>m;
	    int arr1[n], arr2[m];
	    for (int i=0; i<n; i++) {
	        int temp;
	        cin>>temp;
	       // dict.insert(pair<int, int>(temp, 0));
	       dict.insert(temp);
	    }
	    for (int j=0; j<m; j++) {
	        int temp;
	        cin>>temp;
	       // dict.insert(pair<int, int>(temp, 0));
	       dict.insert(temp);
	    }
	    cout<<dict.size()<<endl;
	}
	
	return 0;
}