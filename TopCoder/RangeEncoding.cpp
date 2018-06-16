#include<iostream>
#include<vector>
using namespace std;

class RangeEncoding{
    public:
        int minRanges(vector <int>arr){
            auto it = arr.begin();
            auto itNext = it+1;
            int count = 1;
            for(it; it!=arr.end()-1; it++){
                if((*itNext-*it)>1) count++;
                itNext++;
            }
            return count;
        }
};