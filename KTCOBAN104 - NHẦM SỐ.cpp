#include <iostream>
using namespace std;

#define ll long long

int change5(string a){
    for(int i = 0; i < a.size(); i++){
        if(a[i] == '3') a[i] = '5';
    }
    return stoi(a);
}

int change3(string a){
    for(int i = 0; i < a.size(); i++){
        if(a[i] == '5') a[i] = '3';
    }
    return stoi(a);
}

int main(){
    int t; cin >> t;
    while(t--){
        string a, b;
        cin >> a >> b;
        cout << change3(a) + change3(b) << " ";
        cout << change5(a) + change5(b) << endl; 
    }
}
