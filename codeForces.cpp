#include <bits/stdc++.h>
using namespace std;
int main()
{
    int testCases = 1;
    // cin>> testCases;
    while (testCases--)
    {
        int N, temp = 0;
        cin >> N;
        int arr[N];
        for (int i = 0; i < N; i++)
        {
            cin >> arr[i];
        }
        for (int i = N; i > 0; i--)
        {
            for (int j = 0; j < i - 1; j++)
            {
                if (arr[j] == 0)
                {
                    temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
                }
            }
        }
        for (int k=0; k<N; k++){
            cout << arr[k] << " ";
        }
    }
    return 0;
}

/*
1 5 0 7 4
-> 1 5 4 7 0

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
