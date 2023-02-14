
#include <bits/stdc++.h>
using namespace std;



void arrayTraversalReverse(int numbers[], int size){
    
   for(int i=size-1;i>=0;i--){
       cout<<numbers[i]<<" ";
   }
    
    
}


    
int main() {
	
	int t; cin>>t;
	
	while(t--){
	    int n; cin>>n;
        int numbers[n];
        for(int i = 0; i < n; i++){
            cin>>numbers[i];
        }
        arrayTraversalReverse(numbers, n);
        cout<<endl;
	}
	
	return 0;
}
