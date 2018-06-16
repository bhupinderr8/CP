#include<iostream>
using namespace std;
string current;
void swap(char *xp, char *yp){
    char temp = *xp;
    *xp = *yp;
    *yp = temp;
}
void sort(){
    int i, j;
    int n = 4;
   for (i = 0; i < n-1; i++)  
       for (j = 0; j < n-i-1; j++) 
           if (current[j] > current[j+1])
              swap(&current[j], &current[j+1]);
}
int main(){
    int i,test,count,len;
    cin>>test;
    string str;
    getline(cin, str);
    while(test--){
        getline(cin, str);
        count=0;
        len = str.length();
        if(len>=4){
            for(i=0;i<len-3;i++){
                current = str.substr(i,4);
                sort();
                if(current=="cefh") count++;
            }
        }
        if(count!=0) cout<<"lovely "<<count<<"\n";
        else cout<<"normal\n";
    }
    return 0;
}