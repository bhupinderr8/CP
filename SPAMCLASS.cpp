    #include<iostream>
    using namespace std;
    int main(){
    	int y,x,i,test,N,minx,maxx,pos,neg,j,even,odd;
        cin>>test;
        for(test;test>0;test--){
            pos=0;
            neg=0;
            cin>>N>>minx>>maxx;
            int arr[N][2];
            for(i=0;i<N;i++){
                cin>>arr[i][0]>>arr[i][1];
            }
            even=odd=0;
            for(i=minx;i<=maxx;i++){
                if((i%2)!=0) odd++;
                else even++;
            }
            x=2,y=1;
            for(j=0;j<N;j++){
                    x*=arr[j][0];
                    y*=arr[j][0];
                    y+=arr[j][1];                
                    x+=arr[j][1];
                    x%=2;
                    y%=2;
            }
            if((x%2)!=0){
                neg+=even;
            }
            else pos+=even;
            if((y%2)!=0) neg+=odd;
            else pos+=odd;
            cout<<pos<<" "<<neg<<"\n";
        }
     
     
     
     
        return 0;
    } 