#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    // n = 5

    int a[n];
    array<int,10> b; //Only constant required, n cannot be used. Maybe because of this we use a[n] notation

    vector<int> vec;
    for(int i=0;i<n;i++)   
    {
        int j;
        cin >> a[i];
        cin >> b[i];
        cin >> j;
        vec.push_back(j);
    }
    //a = { 3 , 4 , 7 , 2 , 1}
    //b = { 2 , 3 , 6 , 5 , 4}
    //vec = { 9 , 5 , 8 , 3 , 1}

    //Sorting -------------->O(nlog n)          =>[)
    sort(a , a+n); //{1 , 2 , 3 , 4, 7}
    sort(b.begin() , b.end()); // {2 ,3 , 4 , 5 , 6}
    sort(vec.begin(),vec.end()); // { 1 , 3 , 5 , 8 , 9}

    //Suppose you need to sort from index 2 to 5
    vec = {3, 4, 9, 1, 5};
    sort(vec.begin()+2 , vec.begin()+6); // [2 , 6)  => { 3 , 4 , 1 , 5 , 9}

    for(auto it:vec)
        cout << it << " ";
    return 0;
}