#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

// vika - correct
// v_i_k_a - correct
// v 
//   i
//      k
//          a  - correct

int main(){
    vector<int> output;
    int t;
    cin >> t;
    while(t > 0){
        // dimensions of the carpet
        int n,m;       
        cin >> n >>m;
        // a map storing the indices of each of the letters of the name "vika" occuring in the carpet
        unordered_map<char, vector<int>> vika;
        // keeps a record of whether the current carpet is a vika pattern or not
        bool is_not_vika = true;
        //storing string input
        vector<string> s;
        // looping n times
        for(int i=0; i<n; i++){
            // string which stores the carpet row
            string temp;

            cin>> temp;
            cin.clear();
            s.push_back(temp);
        }

        for(int i =0; i<n; i++){
        for(int j = 0; j < m; j++){
                char letter = s[i][j];

                if(letter == 'v' || letter == 'i' ||letter == 'k' ||letter == 'a' ){
                    vika[letter].push_back(j);


                }
            }
        }
        




        // is vika['v'][] < vika['i'][] ?? then is vika['i'][] < vika['k'][] .....
        
        // 'v' check
        for(int i =0; i < vika['v'].size();i++){
            // 'i' check
            for(int j = 0; j < vika['i'].size(); j++){

                if(vika['v'][i] < vika['i'][j]){
                    // 'k' check      
                    for(int k = 0; k<vika['k'].size(); k++){

                        if(vika['i'][j]< vika['k'][k]){
                            // 'a' check
                            for(int l =0; l<vika['a'].size(); l++){    
                                
                                if( vika['k'][k] < vika['a'][l]){
                                    is_not_vika = false;
                                    output.push_back(1);
                                    break;
                                }// 'a' check end
                            }

                            
                        }// 'k' check end
                        if(!is_not_vika){
                            break;}
                    }

                }  // 'i' check end
                if(!is_not_vika)break;
            
            }// 'v' check end
            if(!is_not_vika)break;
        }
        if(is_not_vika)output.push_back(2);

        t--;    
    }
    // displaying the output
    for(auto x: output){
        cout<< (x == 1?"YES":"NO" )<<'\n';
    
    }
}
