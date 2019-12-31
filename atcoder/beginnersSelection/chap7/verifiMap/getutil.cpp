#include <iostream>
#include <utility>
#include<unordered_map>
using namespace std;
// map https://ja.cppreference.com/w/cpp/container/unordered_map/begin
// Pairユーティリティでgethttps://ja.cppreference.com/w/cpp/utility/pair/get
// 結果 map は key,valueをpairで持っては入るがgetでアクセスはNG あくまでも->first,secondで
int main(void){
/**  unordered_map<int, double> mag = {
        { 1,     1 },
        { 2, 2 },
        { 3 , 3 }
    };
 
    //Change each y-coordinate from 0 to the magnitude
    for(auto iter = mag.begin(); iter != mag.end(); ++iter){
        // cout << iter->first << " " << iter->second << endl;
        cout << get<0>(iter) << " " << get<1>(iter) << endl;
    }**/
    auto p = make_pair(1,3.14);
    
    std::cout << '(' << get<0>(p) << ' ' << get<1>(p) << ')' <<endl;
}   