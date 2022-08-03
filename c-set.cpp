//SET CAN STORE UNIQUE ELEMENTS of THE DEFINED DATATYPE 
//SET=> container_type <data_type> var;

#include <bits/stdc++.h>
using namespace std;

int main()
{
//Ordered set

    set<int> st;
    int n = 5,x;
    //To insert in the set
    for(int i=0;i<n;i++) // Input =>{2,1,5,2,5}
    {
        cin >> x;
        st.insert(x); //--------------------------> O(log n)
    }
    // st => {1,2,5}


    // Note:- st cannot be accessed by st[0],st[1]  *next(st.begin(),i) or find the element then use that iterator to find the value
    // Cannot use st.begin()+i in set like in vector 



    //To erase 
    // st.erase(iterator) || st.erase(start_iterator,end_iterator) -> [) || st.erase(key) -------------> O(log n)

    auto it1 = st.begin();
    auto it2 = next(st.begin(),2); // Note this as set doesnot allow + -  operands

    st.erase(it1); 
    // >st -> {2,5}

    st.erase(it1,it2);
    // >st -> {5}   -------------<ERASE WILL INCLUDE 1 BUT NOT 5 [)>

    st.erase(5);
    // >st -> {1,2}

   //To delete entire set 
   st.erase(st.begin(),st.end());


    //To Find
    set <int> st= {1,5,7,8};
    auto it = st.find(7); // it = iterator to 7
    auto it = st.find(9); // it = st.end()






//Unnordered set 
    // This set can store elements in any order
    unordered_set<int> ust;
    //All other functions work for unordered set as well.




//Multi-set
    //It helps use to store all the element in the sorted form.  Uniqueness is ignored.
    multiset <int> ms;
    ms.insert(1);
    ms.insert(1);
    ms.insert(2);
    ms.insert(2);
    ms.insert(3);
    // ms => {1,1,2,2,3}

    ms.erase(2);
    //It will delete all the instance of 2 -----------> ms => {1,1,3}
    //All other functions work for multiset as well.

    //To find how many times the instance occurs
    ms.count(1); // 2

    return 0;
}


/*
Average time-complexity of
    unordered set is O(1)
    ordered set is O(log n)
     Wrost case is liner in nature  O(set size)

//When there is no need of ascending/descending then choose unordered set, in case of tle(Time limit exceeded)-> switch to set 
*/