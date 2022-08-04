//List - It implements a doubly linked-list. Also has a remove operation with O(1). 
//LIST => container_type <data-type> var;

#include<bits/stdc++.h>
using namespace std;
int main()
{
    list<int> ls;

    //All the following functions are possible in deque
    //push_back()
    //push_front()
    //pop_back()
    //pop_front()
    //.begin() , .end() , .rbegin() , .rend()
    //.size()
    //.clear()
    //.empty()
    //.at()
    // remove() -------------> O(1) *Advantage



    //To insert -> .push_back() / .push_front()
    ls.push_back(1);
    ls.push_back(2);
    ls.push_back(3);
    ls.push_front(4);
    ls.push_front(5);

    //Print list
    for(auto it: ls)
        cout << it << " ";
    //Output:- 5 4 1 2 3

    
    //To remove element from front or last
    ls.pop_front(); //removes 5
    ls.pop_back(); //removes 3


    //To remove a particular instance
    ls.remove(4); //removes 4


    //To find the number of elements in the list
    cout << '\n' << ls.size() << endl;

    return 0;
}