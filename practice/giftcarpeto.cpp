#include <iostream>
#include <vector>
#include <string>
using namespace std;

#define int long long
int32_t main(){
    // test cases
    int t;
    cin >> t;
    vector<string> output;
    while(t--){
        // n = no. of rows (horizontal) and m = no. of columns (vertical)
        int n, m;
        cin >> n >> m;
        // storing the carpet
        vector<string> carpet(n);
        for(int i = 0; i <n; i++){
            cin>> carpet[i];
        }   
        string vika = "vika";
        // keeps a track of which character of vika has been found
        int fnd  = 0;
        // keeps a track of how many vika[fnd] were found in any vertical column of the carpet
        for(int i = 0; i < m; i++){
            // checks whether the vika[fnd] has been found in the vertical column of the carpet
            bool check = false;
            for(int j =0; j < n; j++){
                if(carpet[j][i] == vika[fnd]){
                    check = true;
                    break; 
                }
            }
            if(check){
                fnd++;
                if(fnd == 4)break;
            }
        }
        if(fnd == 4){
            output.push_back("YES\n");
        }else{
            output.push_back("NO\n");
        }
    }
    for(auto x: output){
        cout << x << '\n';
    }
    return 0;
}