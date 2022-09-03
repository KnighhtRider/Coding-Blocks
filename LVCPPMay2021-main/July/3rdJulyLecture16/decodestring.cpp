#include<iostream>
using namespace std;
/*
3[aa]=aaaaaa
3[aa2[b]]=aabbaabbaabb
*/
string decodestring(string s,int &i){
    string res="";
    if(i>=s.length()){
        return res;
    }

    while(i<s.length()){
        if(s[i]>='0' and s[i]<='9'){
            int num=0;
            /*
            12
            num=0;
            num=num*10+(s[i]-'0')
            num=0*10+('1'-'0')=1
           num=1*10+('2'-'0')=12
        */
       while(s[i]>='0' and s[i]<='9'){
            num=num*10+(s[i]-'0');
            i++;
       }
       i++;
       string Recres=decodestring(s,i);
       for(int i=0;i<num;i++){
           res+=Recres;
       }
        }
        else if(s[i]==']'){
            return res;
        }
        else{
            //res.push_back(s[i]);
            res+=s[i];
        }
        i++;

    }
    return res;
}
int main(){
    string s;
    cin>>s;
    int i=0;
    cout<<decodestring(s,i);
}