#include<iostream>
using namespace std;

bool myComp(string a,string b){
    if(a.find(b)==0 || b.find(a)==0){
        return a.length()>b.length();
    }
    return a<b;
}

void stringsort(){
    int n;
    cin>>n;
    vector<int> v;
    for(int i=0;i<n;i++){
        string s;
        cin>>s;
        v.push_back(s);
    }
    sort(v.begin(),v.end(),myComp);
    for(auto s:v){
        cout<<s<<endl;
    }
}

int main(){
stringsort();
}