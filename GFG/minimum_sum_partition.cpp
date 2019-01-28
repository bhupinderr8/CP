using namespace std;
#define rep(i, a, b) for (int i = int(a); i <=int(b); i++)
typedef long long int ll;

int find (int arr[], int n) 
{ 
    int sum = 0; 
    int i, j, flag=0; 
    
    for (i = 0; i < n; i++) 
      sum += arr[i]; 
      
    if (sum%2 != 0) flag++;
    
    bool part[sum/2+1][n+1]; 
      
    for (i = 0; i <= n; i++) 
      part[0][i] = true; 

    for (i = 1; i <= sum/2; i++) 
      part[i][0] = false;      
       
     for (i = 1; i <= sum/2; i++)   
     { 
       for (j = 1; j <= n; j++)   
       { 
         part[i][j] = part[i][j-1]; 
         if (i >= arr[j-1]) 
           part[i][j] = part[i][j] || part[i - arr[j-1]][j-1]; 
       }         
     }
     int ans=INT_MAX;
    
    for(int i=0; i<=sum/2; i++){
        if(part[i][n]) ans = min(ans, abs(sum - 2*i));
    }
       
     return ans; 
}

int main() {
	ll test, n;
    cin>>test;
    while(test--){
        cin>>n;
        int arr[n];
        rep(i, 0, n-1) cin>>arr[i];
        cout<<find(arr, n)<<endl;
    }
	return 0;
}