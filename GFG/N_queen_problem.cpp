using namespace std;
#define rep(i, a, b) for (int i = int(a); i <=int(b); i++)
typedef long long int ll;
int N;

void print_sol(int arr[10][10]){
	cout<<"[";
	for(int i=0; i<N; i++){
		for(int j=0; j<N; j++){
			if(arr[j][i]){
				cout<<j+1<<" ";
				break;
			}
		}
	}
	cout<<"] ";
}

bool isSafe(int arr[10][10], int row, int col){
	int i,j;

	for(i=0; i<col; i++){
		if(arr[row][i]) return false;
	}

	for(i=row, j=col; i>=0 && j>=0; i--, j--){
		if(arr[i][j]) return false;
	}

	for (i=row, j=col; j>=0 && i<N; i++, j--){
        if (arr[i][j]){
            return false;
		}
	}

	return true;
}

bool solveNQUtil(int arr[10][10], int col){
	if(col == N){
		print_sol(arr);
		return true;
	}

	bool ans = false;

	for(int i=0; i<N; i++){
		if(isSafe(arr, i, col)){
			arr[i][col] = 1;

			ans = solveNQUtil(arr, col+1) || ans;

			arr[i][col] = 0;
		}
	}

	return ans;

}

void solveNQ(){
	int arr[10][10];
	memset(arr, 0, sizeof(arr));
	if(solveNQUtil(arr, 0) == false){
		cout<<"-1";
		return;
	}
	return;
}

int main() {
	ll test;
	cin>>test;
	while(test--){
		cin>>N;
		solveNQ();
		cout<<"\n";
	}
	return 0;
}