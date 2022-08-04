// Stack - LIFO {Last in First Out}
//STACK => conatner_type <data-type> var;
#include<bits/stdc++.h>
using namespace std;
int main()
{
    stack<int> st;

    st.push(2);
    st.push(1);
    st.push(3);
    st.push(4);
    st.push(5);
    
    /*
    Stack:-
        |   5   |
        |   4   |
        |   3   |
        |   1   |
        |___2___|
    */


   //.top() shows the top element
   cout << st.top() << endl; // 5
   //.pop() removes the top element
   st.pop(); // removes 5

    //Print stack
    while(!st.empty())
    {
        cout << st.top() << " ";
        st.pop();
    } 
    // 4 3 2 1
    


    //To delete the entire stack we can't use .clear()
    // while(!st.empty())
    //     st.pop();
    //.empty() return true is stack is empty and false if stack is not empty

    //To find number of elemnts in the stack
    cout << endl << st.size() << endl; // 0


    return 0;
}