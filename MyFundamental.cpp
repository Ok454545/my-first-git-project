#include <iostream>
#include <string>
using namespace std;
string determineWinner(string s1, string s2) {
    int goals_A = s1[1] - '0';
    int goals_F = s2[1] - '0'; 
    if (s1=="A"){
         if (goals_A > goals_F) {
            return "Argentina";
        } else {
            return "France";
        }  
    }else {
        if (goals_A > goals_F) {
            return "France";
        } else {
            return "Argentina";
        }
    }

}
int main() {
    string s1, s2;
    cin >> s1 >> s2;
    string winner = determineWinner(s1, s2);
    cout << winner ;
    return 0;
}