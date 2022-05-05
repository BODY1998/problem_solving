#include <bits/stdc++.h>
using namespace std;
int main()
{
    int testCases = 1;
    // cin>> testCases

    string name;
    int count = 0;
    cin >> name;
    sort(name.begin(), name.end());
    cout << name << endl;
    for (int i = 0; i < name.length(); i++)
    {
        if (name[i] != name[i + 1])
        {
            count++;
        }
    }
    cout << count << endl;
    if (count % 2 == 0)
    {
        cout << "CHAT WITH HER!";
    }
    else
        cout << "IGNORE HIM!";

    return 0;
}

/*
b j m m r w z

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
