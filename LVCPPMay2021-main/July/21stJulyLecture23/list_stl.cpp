#include <iostream>
#include<list>
using namespace std;


int main() {
    list<int> l;
    //int
    list<int> l1{1,2,3,4,5};
    list<string> l2{"pushpa","mannat","giani","leakage","smell","Bhanno"};
    l2.sort();//sort function inside list class
    l2.reverse();
    cout<<l2.front()<<endl;
    l2.pop_front();
    l2.push_front("Dhillion Sabh");
    l2.push_front("mannat");
    l2.pop_back();
    for(string s:l2){
        cout<<s<<"-->";
    }
    cout<<endl;
    l2.push_front("pespi");
    string f;
    cin>>f;
    //remove function removes all occurences of a string from the list
    l2.remove(f);
    for(string s:l2){
        cout<<s<<"-->";
    }
    cout<<endl;
    //Erase one or more elements
    auto it=l2.begin();
    it++;
    it++;
    l2.erase(it);
    for(string s:l2){
        cout<<s<<"-->";
    }
    cout<<endl;
    //We can insert elements in the list
    auto bt=l2.begin();
    bt++;
    l2.insert(bt,"Ekam");
    for(string s:l2){
        cout<<s<<"-->";
    }
    cout<<endl;
}
