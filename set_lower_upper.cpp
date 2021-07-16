#include <bits/stdc++.h>
using namespace std;
int main()
{

    set<int> s;

    // Function to insert elements
    // in the set container
    s.insert(1);
    s.insert(4);
    s.insert(2);
    s.insert(5);
    s.insert(6);

   // s.erase(6);
  // s.erase(s.find(6));

    cout << "The set elements are: ";
    for (auto it = s.begin(); it != s.end(); it++)
        cout << *it << " ";

     auto it = s.lower_bound(0);
    cout << "\nThe lower bound of key 0 is ";
    cout << (*it) << endl;

    // when 2 is present
    it = s.lower_bound(2);
    cout << "\nThe lower bound of key 2 is ";
    cout << (*it) << endl;

    // when 3 is not present
    // points to next greater after 3
    it = s.lower_bound(3);
    cout << "The lower bound of key 3 is ";
    cout << (*it) << endl;

// when 8 exceeds the max element in set
	///it = s.lower_bound(8);
	if(s.find(8)==s.end()) { it=s.find(8);it--; }

	cout << "The lower bound of key 8 is ";
	cout << (*it) << endl;


    // Function to insert elements
    // in the set container
  /*  s.insert(1);
    s.insert(4);
    s.insert(2);
    s.insert(5);
    s.insert(6);

    cout << "The set elements are: ";
    for (auto it = s.begin(); it != s.end(); it++)
        cout << *it << " ";

    // when 2 is present
    // points to next element after 2
    auto it = s.upper_bound(2);
    cout << "\nThe upper bound of key 2 is ";
    cout << (*it) << endl;

    // when 3 is not present
    // points to next greater after 3
    it = s.upper_bound(3);
    cout << "The upper bound of key 3 is ";
    cout << (*it) << endl;

    it=s.upper_bound(6);
    cout << "The upper bound of key 6 is ";
    cout << (*it) << endl;*/




    /*cout << "The set elements are: ";
    for (auto it = s.begin(); it != s.end(); it++)
        cout << *it << " ";*/
   /* while(1)
    {


    int x,y;
    cin>>x>>y;
    auto it1=s.lower_bound(x);
    cout<<*it1<<endl;
   auto it2=s.upper_bound(y);
    cout<<*it2<<endl;

   s.erase(it1,it2);

    for (auto it = s.begin(); it != s.end(); it++)
        cout << *it << " ";
    cout<<endl;


    }*/



    return 0;
}

