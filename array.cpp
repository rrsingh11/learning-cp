// container_type <data_type , size> var = { ?,?,?,?};
#include <bits/stdc++.h>
using namespace std;
// array<int,10> arr -> int arr[10]
//globally -> max size of array(int,double,char) => [10^7] & max size of array(bool) => [10^8]  
array<int,3> arr; // {0,0,0}
int main()
{
//Inside int main() -> max size of array(int,double,char) => [10^6] & max size of array(bool) => [10^7]
     
    array<int,3> arr1; //{?,?,?}
    array<int,3> arr2 = {1}; //{1,0,0}
    array<int,3> arr3 = {0} ;//{0,0,0}
    arr3.fill(10); //{10,10,10}

    for(int i=0;i<3;i++)
    {
        cout << arr.at(i); // arr[i]
        cout << arr1.at(i)<<' ';
        cout << arr2.at(i);
        cout << arr3.at(i);
    }


    arr.size(); //size 
    arr.front(); //arr.at(0)
    arr.back(); //arr.at(arr.size() - 1 )


    //iterators
    //begin(),rbegin() & end(),rend() 
    //rbegin= reverse begin & rend = reverse end
    //begin -> first element & rbegin-> last element
    //end -> just after last element & rend-> just before last element
    //auto -> changes iterator to desired type
    array <int,5> a= {1,2,3,4,5};
    for(auto it = a.begin(); it<a.end();it++)
        cout << *it << " "; //{1,2,3,4,5}
    cout<<endl;
    for(auto it = a.rend()-1; it>=a.rbegin();it--)
        cout << *it << " "; //{1,2,3,4,5}
    cout<<endl;
    for(auto it = a.rbegin(); it<a.rend();it++) // reverse iterator thats why i++
        cout << *it << " "; //{5,4,2,3,1}
    cout << endl;
    for(auto it = a.end()-1; it>=a.begin();it--)
        cout << *it << " "; //{5,4,3,2,1}
    cout << endl;
    for(auto it: a) // for each loop -> iterate over element => it = 1,3,4,5,6
        cout << it << " "; //{1,2,3,4,5}


// For sorting
    int a1[] = {2,3,4,5,1}; //If initialized like this 
    //Use This
    sort(a1 , a1+5); 

    
    array<int,5> a2 = {2,3,4,5,1}; //If initialized like this
    //Use This
    sort(a2.begin() , a2.end());

    for(auto it:a1)
        cout << it;
    for(auto it:a2)
        cout << it;
    return 0;
}