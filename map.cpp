//SIMILAR TO DICTIONARY -> USE TO PUT KEY-VALUE PAIRS
//MAP => container_type <data-type_1 , data-type_2> var;
#include<bits/stdc++.h>
using namespace std;
int main()
{

//Pair
    pair<char,int> pr;
    pr.first = 'f';
    pr.second = 61;

//Map
    //key -> value
    //a -> 51
    //b -> 28
    //e -> 15
    //c -> 13
    //d -> 41
    map<char,int> mp;
    mp['a'] = 51;
    mp['b'] = 28;
    mp['e'] = 15;
    mp['c'] = 13;
    mp['d'] = 41;
    // or i can insert the pair directly
    mp.insert(pr);
    //or
    mp.insert(pair<char,int>('g',67));
    //Map also stores the unique keys in sorted order as set and is always sorted according to 'key' not 'value'.

    /*
    for example: if we add 
        mp['a'] = 19;
    then it will store {mp['a']=19} only, it will over-ride {map['a']=51}.
    */

    // To erase 
        mp.erase('a'); // mp.erase(key)
    //Similarly it is also [) as you can also give iterator position


    //To check if map is empty or not use .empty() -> It will return a boolean value
    map<int,int> mp1; 
        if(mp1.empty()); 
            cout << "Yes it is empty" << endl;
    //Output:-  Yes it is empty


    //Note: In map two keys can have same value but two values can't have same keys.


    //To print the map
    for(auto it: mp) // 'it' will be automatically converted into a 'pair'
        cout << it.first << " " << it.second << endl;
    //or
    for(auto it=mp.begin();it!=mp.end();it++)
        cout << it->first << " " << it->second << endl;

    /*
    Output:-
        b   28
        c   13
        d   41
        e   15
        f   61
        g   67
    */





//Unordered map ------------------> Does not store in any order
    //All the functions is repeated as same as Map
    unordered_map<char,int> ump;
    ump['a'] = 51;
    ump['b'] = 28;
    ump['e'] = 15;
    ump['c'] = 13;
    ump['d'] = 41;

    for(auto it: ump)
        cout << it.first << " " << it.second << endl;

    /*
    Output:-
        d 41
        a 51
        b 28
        e 15
        c 13
    */

    //O(1) in almost all the cases
    //O(N) in worst case, n-> container size





//Pair class --------------------> can be treated as defined data type
    pair<int,int> pr1 = {1,2}; //=>  pr1.first=1  pr1.second=2

    pair<pair<int,int> , int> pr2 = {{1,2} , 2}; // pr2.first.first=1   pr2.first.second=2      pr2.second=2
    pair<pair<int,int> , pair<int,int>> pr3 = {{1,2} , {3,4}}; // pr3.first.first=1   pr3.first.second=2    pr3.second.first=3    pr3.second.second=4

    //Pair of pair of pair of pair of........ can be created.
    // Unordered can only store single keys. unordered_map<pair<int,int> , int> is not possible.






//Multimap
    //Store all the keys in sorted manner. Uniqueness is ignored.
    multimap<string,int> mpp;
    mpp.insert(pair<string,int>("abc",123));
    mpp.insert(pair<string,int>("xyz",234));
    mpp.insert(pair<string,int>("abc",321));
    mpp.insert(pair<string,int>("abc",456));
    mpp.insert(pair<string,int>("pqr",345));


    for(auto it: mpp)
        cout << it.first <<  " " <<  it.second << endl;

    /* 
    Output:-
        abc 123
        abc 321
        abc 456
        pqr 345
        xyz 234
    */




    return 0;
}