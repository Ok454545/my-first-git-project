#include<iostream>
#include<unordered_map>
using namespace std;
int main(){
    unordered_map<int, string> s;
    s[1000]="mohamed";
    if (s.find(1001)!=s.end()){
        cout << "map contains key ahmed\n";
    }
    cout << s[1000]<<'\n';
    return 0;
}