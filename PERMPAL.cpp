#include<iostream>
using namespace std;
void sort(string str, int array[]){
    int i,j,len = str.length();
    char current;
    int firstcounter=0;
    int secondcounter = len-1;
    for(i=0;i<26;i++){
        current = i+97;
        int counter = 0;
        for(j=0;j<len;j++){
            if(str[j]==current){
                if((counter%2)==0){
                    array[firstcounter] = j+1;
                    firstcounter++;
                }
                else{
                    array[secondcounter] = j+1;
                    secondcounter--;
                }
                counter++;
            }
        }
    }
    cout<<array[0];
    for(i=1;i<len;i++){
                cout<<" "<<array[i];
            }
            cout<<"\n";
}

void sortodd(string str, int m, int charr[]){
    int k,j,len = str.length();
    int array[len];
    char current;
    int firstcounter=0;
    int secondcounter = len-1;
    for(k=0;k<26;k++){
        current = k+97;
        int counter = 0;
        for(j=0;j<len;j++){
            if(str[j]==current){
                if(((counter%2)==0)&&(j!=m)){
                    array[firstcounter] = j+1;
                    counter++;
                    firstcounter++;
                }
                else if(j!=m){
                    array[secondcounter] = j+1;
                    secondcounter--;
                    counter++;
                }
            }
        }
    }
    array[(len-1)/2] = m+1;
    cout<<array[0];
    for(k=1;k<len;k++){
                cout<<" "<<array[k];
            }
            cout<<"\n";
}

int main(){
    string str;
    int test,i;
    cin>>test;
    getline(cin, str);
    while(test--){
        getline(cin, str);
        int len = str.length();
        int arra[len];
        int charr[26]={0};
        for(i=0;i<len;i++){
            charr[str[i]-97]++;
        }
        int flag = 0,index;
        for(i=0;i<len;i++){
            if(((charr[str[i]-97])%2)!=0){
                flag++;
                index = i;
            }
        }
        if(flag==0){
            sort(str, arra);
        }
        else if(flag==1){
            char toadd = index+97;
            for(i=0;i<len;i++){
                if(str[i]==toadd){
                    sortodd(str, index, charr);
                    break;
                }
            }
        }
        else cout<<"-1\n";
    }

    return 0;
}