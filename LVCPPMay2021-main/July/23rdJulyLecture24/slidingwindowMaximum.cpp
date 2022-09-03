#include <iostream>
#include<deque>
using namespace std;
int main() {
    int n,k;
    int arr[1000000];
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cin>>k;
    deque<int> Q(k);
    //We have to process first k elements separately
    int i=0;
    for(i=0;i<k;i++){
        while(!Q.empty() && arr[i]>arr[Q.back()]){
            Q.pop_back();
        }
        Q.push_back(i);
    }
    //Process the remaining elements
    for(;i<n;i++){
        //Print the front index element of deque
        cout<<arr[Q.front()]<<" ";
        //1.Remove the elements which are not the part of window(Contraction)
        while(!Q.empty() && Q.front()<=i-k){
            Q.pop_front();
        }
        //2.Remove the elements which are not useful and are in window
        while(!Q.empty() && arr[Q.back()]<=arr[i]){
            Q.pop_back();
        }
        //3.Add the new element(Expansion)
        Q.push_back(i);
    }
    cout<<arr[Q.front()];
}
