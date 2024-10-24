#include <iostream>
using namespace std;

#define ll long long

int main(){
    int t; cin >> t;
    cin.ignore();
    while(t--){
        string s;
        getline(cin,s);
        int begin = s.find('"');
        int end = s.find('"', begin + 1);
        string child = s.substr(begin + 1, end - begin - 1);
        begin = s.find('"',end + 1);
        end = s.find('"', begin + 1);
        string parent = s.substr(begin + 1, end - begin -1);
        if (child.size() == 0 || parent.size() == 0){
            cout << 0 << endl;
        }
        else {
            int ans = parent.find(child);
            if(ans == string::npos) cout << -1 << endl;
            else cout << ans << endl;
        }
    }
    return 0;
}
