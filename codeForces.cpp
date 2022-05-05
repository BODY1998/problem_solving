#include <bits/stdc++.h>
using namespace std;
int main()
{
    int testCases = 1;
    // cin>> testCases

    string name;
    cin >> name;

    if (name.length() % 2 == 0)
    {
        cout << "CHAT WITH HER!";
    }
    else
        cout << "IGNORE HIM!";

    return 0;
}

/*


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
