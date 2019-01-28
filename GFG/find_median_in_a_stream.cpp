using namespace std;
#define rep(i, a, b) for (int i = int(a); i <=int(b); i++)
typedef long long int ll;

void fun(int n){
	priority_queue<int> g;
	priority_queue<int, vector<int>, greater<int>> s;
	int med=0,temp;
	for(int i=0; i<n; i++){
		cin>>temp;
		int s_size = s.size();
		int g_size = g.size();
		if(s_size==g_size){
			if(temp<med){
				g.push(temp);
				med = g.top();
			}
			else{
				s.push(temp);
				med = s.top();
			}
		}
		else if(s_size>g_size){
			if(temp<med){
				g.push(temp);
			}
			else{
				g.push(s.top());
				s.pop();
				s.push(temp);
			}
			med = (s.top() + g.top())/2;
		}
		else{
			if(temp<med){
				s.push(g.top());
				g.pop();
				g.push(temp);
			}
			else{
				s.push(temp);
			}
			med = (s.top() + g.top())/2;
		}
		
		cout<<med<<"\n";
	}
}

int main() {
	ll test, n;
	cin>>n;
	fun(n);
	return 0;
}