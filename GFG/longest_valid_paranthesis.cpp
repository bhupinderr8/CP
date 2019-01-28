#include <unistd.h>
using namespace std;
#define rep(i, a, b) for (int i = int(a); i <=int(b); i++)
typedef long long int ll;

void fun(){
    stack<int> s;
    string str;
    cin>>str;
    int len = str.length();
    int longest=0;
    s.push(-1);
    for(int i=0; i<len; i++){
        if(str[i] == '('){
            s.push(i);
        }
        else{
            s.pop();
            if(s.empty()){
                s.push(i);
            }
            else{
                longest = max(longest, i - s.top());
            }
        }
    }
    cout<<longest<<endl;
}

int main() {
	ll test, n;
	cin>>test;
	while(test--){
        fun();
	}
	return 0;
}