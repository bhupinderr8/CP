        #include <iostream>
        using namespace std;
         
        int eval(int c, int l, int x, int &c1, int &x1, int &c2, int &x2, int &c3, int &x3)
        {
            if(l == 1)
            {
                if(x > x1)
                {
                    x1 = x;
                    c1 = c;
                }
                else
                {
                    if(x == x1 && c < c1)
                    {
                        c1 = c;
                    }
                }
            }
            else if(l == 2)
            {
                if(x > x2)
                {
                    x2 = x;
                    c2 = c;
                }
                else
                {
                    if(x == x2 && c < c2)
                    {
                        c2 = c;
                    }
                }
            }
            else
            {
                if(x > x3)
                {
                    x3 = x;
                    c3 = c;
                }
                else
                {
                    if(x == x3 && c < c3)
                    {
                        c3 = c;
                    }
                }
            }
        }
         
        int main() {
        	int T, n, c, l, x;
        	int c1, x1, c2, x2, c3, x3;
        	cin>>T;
        	while(T--)
        	{
        	    l = x = 0;
        	    x1 = x2 = x3 = 0;
        	    c = c1 = c2 = c3 = 101;
        	    cin>>n;
        	    
        	    while(n--)
        	    {
        	        cin>>c>>l>>x;
        	        eval(c, l, x, c1, x1, c2, x2, c3, x3);
        	    }
        	    cout<<x1<<" "<<c1<<"\n";
        	    cout<<x2<<" "<<c2<<"\n";
        	    cout<<x3<<" "<<c3<<"\n";
        	}
        	return 0;
        }  