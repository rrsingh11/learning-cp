//Comparator - can only be used in linear container=>  array , vector ,list,string
#include<bits/stdc++.h>
using namespace std;

bool comp(int el1 , int el2) // For descending order
{
    if(el1 <= el2) 
    //if el1 is smaller than or equal to el2 then it is already sorted which means el1 is on its correct position 
    //So for descending order we return false to swap and for ascending return true
        return false;
    return true; // else return true
}
bool q1_comp(pair<int,int> el1,pair<int,int> el2)
{
    if(el1.first < el2.first)
        return true;
    else if(el1.first == el2.first)
    {
        if(el1.second > el2.second)
            return true;
    }
    return false;
}
int main()
{
    int n=5;
    int arr[n] = {1,5,2,3,4};
    //Suppose to sort an array in ascending order we use
    sort(arr ,arr+n);

    //but if we have to sort them into descending order then we use
     sort(arr , arr+n,comp); // comp is a comparator which is a boolean function which return a true/false value
    //greater<int>() is a in-built comparator which we use only for descending case
    for(auto it:arr)
        cout << it << endl;





/*Q1.  Array of pairs are given. Sort them into ascending order on the basis of first element. 
        If 1st element is equal sort them according to descending order on the basis of second element. 
*/
    vector<pair<int,int>> p_arr = {{1,2},{3,3},{2,4},{2,6}};
    sort(p_arr.begin() , p_arr.end() , q1_comp);
    for(auto it:p_arr)
        cout << it.first << " " << it.second << endl;
        // {{1,2} , {2,6} , {2,4} , {3,3}}
    return 0;
}