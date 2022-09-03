#include<iostream>
using namespace std;

void sonutitu(string sonu,string titu){
	int f1[26]={0};
	int f2[26]={0};
	int l1=sonu.length();
	int l2=titu.length();
	for(int i=0;i<l1;i++){
		f1[sonu[i]-'a']++;
	}
	for(int i=0;i<l2;i++){
		f2[titu[i]-'a']++;
	}
	int count =0;
	for(int i=0;i<26;i++){
		count+=abs(f1[i]-f2[i]);
	}
	cout<<count<<endl;
}

int main() {
	int T;
	cin>>T;
	while(T>0){
		string sonu;
		cin>>sonu;
		string titu;
		cin>>titu;
		sonutitu(sonu,titu);
		T--;
	}
	return 0;
}