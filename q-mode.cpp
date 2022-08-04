//To find mode of given array
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x;
    int max = 0;
    unordered_map<int,int> mpp;
    cin >> n;

    for(int i=0;i<n;i++)
    {
        cin >> x;
        mpp[x]++; // map[x] = y -----------> y++
        if(mpp[x] > mpp[max])
            max=x;
    }    
    cout << max;
    return 0;
}
/*
    Input:-
        5
        3 2 2 1 2

    Output:- 2
    2 occured max number of times

*/
// So basically in this solution first we will take input and store in a map such that whenever the same number is inserted value o count is increased. 
