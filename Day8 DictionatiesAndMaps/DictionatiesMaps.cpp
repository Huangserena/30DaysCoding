#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    cin >> n;
    map<string, int> phoneMap;
    for(int i=0; i < n; i++){
        string name;
        cin >> name;
        if(!phoneMap[name]){
            int number;
            cin>> number;
            phoneMap[name]=number;
            //cin >> phoneMap[name];
        }
    }
    
    string s;
    //getline(cin, s);
    //streamstring stream(s);
    cin.ignore();
    while(getline(cin, s)){
        if(phoneMap[s]){
            cout << s <<"="<<phoneMap[s]<<endl;
            //cin.ignore();
        }
        else{
            cout <<"Not found"<<endl;
            //cin.ignore();
        }
        
        
    }    
    return 0;
}