#include <iostream>
using namespace std;
 void sort(int b[],int a){
 	  for(int i=0; i<a;i++){
		for(int j=0;j<5;j++){ 
			if(b[j]>b[j+1]){
				int s = b[j];
				b[j] = b[j+1];
				b[j+1] = s;
			}
		}
	}
		for(int c=0; c<a; c++){
			cout<<" "<<b[c];
		}
		cout<<endl;
	  }
	}

 void print(int b[], int a){
 	cout<<"array sorting :";
 	for(int i=0; i<a; i++)
 	 cout<<" "<<b[i];
 }
int main(){
    int arr[]={5,4,3,2,1};
    int size = sizeof(arr)/sizeof(arr[0]);
	sort(arr,size);
	print(arr,size);
}
