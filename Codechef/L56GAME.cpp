        #include "bits/stdc++.h"
        using namespace std;
        #define ll long long
        int main(int argc, char const *argv[])
        {
        	ios_base::sync_with_stdio(0);
        	ll t,n,i,odd,even,x;
        	cin>>t;
        	while(t--)
        	{
        		cin>>n;
        		odd=0;
        		even=0;
        		for(i=0;i<n;i++)
        		{
        			cin>>x;
        			if(x&1)
        				odd++;
        			else
        				even++;
        		}
        		if(odd%2==0||n==1)
        			cout<<1;
        		else
        			cout<<2;
        		cout<<"\n";
        	}
        	return 0;
        }  