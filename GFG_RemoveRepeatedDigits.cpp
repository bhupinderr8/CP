// Link= https://practice.geeksforgeeks.org/problems/remove-repeated-digits-in-a-given-number/0
#include <bits/stdc++.h>
#define ll long long int
#define f(in,lt,st) for(int i=in;i<lt;i+=st)
using namespace std;

void input(int a[],int len);

int main(){
    long long int test;
    cin>>test;
    while(test--){
      string a;
      cin>>a;
      stack <char> s;
      ll len=a.length();
      s.push(a[len-1]);
      for(ll it=len-2;it>=0;it--){
        if(a[it] != s.top())
            s.push(a[it]);
      }

      while(!s.empty()){
          cout<<s.top();
          s.pop();

      }
      cout<<endl;
      


    }
    return 0;
}

void input(int a[],int len){
  for(ll i=0;i<len;i++)
    cin>>a[i];
} 