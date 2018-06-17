#include<iostream>
#include<vector>
using namespace std;
class Hex{
    public:
        vector<string> picture(int n, vector<string> marks){
            vector <vector <char>> cordinates(n, vector<char>(n, ' '));
            for (int i = 0; i < marks.size(); i++) {
            cordinates[marks[i][1]-'0'][marks[i][0]-'0'] = marks[i][2];
            }

            vector <string>toReturn(100, "                                                                                                    ");

            for (int i = 0; i < n; i++) {
                for (int j = 0; j < n; j++) {
                    int c = 1 + 2 * j;
                    int r = 2 * i + j;
                    toReturn[r][c] = '_';
                    toReturn[r+1][c-1] = '/';
                    toReturn[r+1][c+1] = '\\';
                    toReturn[r+2][c-1] = '\\';
                    toReturn[r+2][c+1] = '/';
                    toReturn[r+2][c] = '_';
                    toReturn[r+1][c] = cordinates[i][j];
                }
            }

           for (int i = 0; i < toReturn.size(); i++) {
            while (toReturn[i].size() && toReturn[i][toReturn[i].size() - 1] == ' ') toReturn[i].resize(toReturn[i].size() - 1);
            if (toReturn[i] == "") {
                toReturn.erase(toReturn.begin() + i);
                i--;
            }
    }
            
            // for(int i = 0; i < toReturn.size(); i++) cout<<toReturn[i]<<"\n";

            return toReturn;

        }
};

// int main(){
//     Hex obj;
//     obj.picture(4, {"00h", "21h", "01v", "03v", "02v"});
//     return 0;
// }