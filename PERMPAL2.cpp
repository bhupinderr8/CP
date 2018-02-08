#include<iostream>
using namespace std;
class obj{
    public:
    char val;
    int index;
};

int isPallindrome(obj ostr[], int len){
    int l = 0;
    len--;
    while(len > l){
        if(ostr[l++].val!=ostr[len--].val)
        return 0;
    }
    return 1;
}

void printArray(obj ostr[], int len){
    int i=0;
    for(i;i<len;i++){
        cout<<ostr[i].index<<" ";
    }
    cout<<"\n";
    for(i=0;i<len;i++){
        cout<<ostr[i].val<<" ";
    }
    cout<<"\n";
}

int main(){
    string str;
    int test,i,j;
    cin>>test;
    while(test--){
        cin>>str;
        int len = str.length();
        obj ostr[len];
        for(i=0;i<len;i++){
            ostr[i].val = str[i];
            ostr[i].index = i+1;
        }
        int first=0;
        int last = len-1;
        int flag = 0;
        for(first;first<last;first++){
            if(ostr[first].val!=ostr[last].val){
                for(j=first+1;j<len;j++){
                    if((ostr[first].val==ostr[j].val)&&(last!=j)){
                        cout<<"Swapping "<<j<<" and "<<last<<" first = "<<ostr[first].val<<" last = "<<ostr[last].val<<"\n";
                        char tempc;
                        int tempi;
        
                        tempc = ostr[j].val;
                        ostr[j].val = ostr[last].val;
                        ostr[last].val = tempc;

                        tempi = ostr[j].index;
                        ostr[j].index = ostr[last].index;
                        ostr[last].index = tempi;
                        break;
                    }
                }
                if((j==len)&&(flag==0)){
                    char tempc;
                    int tempi;
                    int t = (len+1)/2;
                    
                    tempc = ostr[first].val;
                    ostr[first].val = ostr[t].val;
                    ostr[t].val = tempc;

                    tempi = ostr[first].index;
                    ostr[first].index = ostr[t].index;
                    ostr[t].index = tempi;
                    flag = 1;
                }
            }
            last=last-1;
            if(first<last) break;
        }
        printArray(ostr, len);
        if(isPallindrome(ostr, len)){
            // printArray(ostr, len);
        }
        else cout<<"-1\n";
    }
}