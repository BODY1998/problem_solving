#include<bits/stdc++.h>
using namespace std;
int main(){
    int testCases =1 ;
   // cin>> testCases;  
    while(testCases--){
        int N , s=0, d=0;
        cin >> N ;
        int arr[N];
        for(int i=0 ; i < N; i++){
            cin>> arr[i];
        }
        sort(arr , arr +N);
        for(int k=N-1; k>0; k-2){
           s += arr[k];
           d += arr[k-1];
        }
        cout<<s<<" "<<d;
    }
    return 0;
}

 /*
 1- receive magnets in ar
 2- mag = 1
 3- if the last digit equals the first one so mag++
4 1 2 10
1 2 4 10
k=4 => s= 10 , d= 4
k=2 => s= 12 , d= 5

 ------------------------------------------------------------------------------
#include<bits/stdc++.h>
using namespace std;
int main(){
    int testCases =1 ;
    cin>> testCases;  // COMMENT IT IF NO TESTCASES IN PROBLEM
    while(testCases--){
        int N ;
        cin >> N ;
        int arr[N];
        for(int i=0 ; i < N; i++){
            cin>> arr[i];
        }
    }
    return 0;
}
 */
