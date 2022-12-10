#include <bits/stdc++.h>
using namespace std;
#define pb push_back

/*----------------------------------------------------------------------------*/

void draw(string& sprite, string& cur, int& pos){
    cur.pb(sprite[pos]);
    pos++;
}

void spritepos(string& sprite, int place){
    int i;
    for(i = 0; i < place; i++) sprite[i] = '.';
    sprite[i] = '#'; sprite[i+1] = '#'; sprite[i+2] = '#';
    for(i = i+3; i < 40; i++) sprite[i] = '.';
}

void solve(){
    
    int x = 0, ans = 0, cycle = 0, pos = 0;
    vector<string> image;
    string sprite = "###.....................................";
    string cur = "";
    
    // insert a . at end of input
    while(true){
        string task;
        cin >> task;
        if(task == ".") break;
        else if(task == "noop"){
            draw(sprite, cur, pos);
            //check
            if(cur.size() == 40){
                image.pb(cur); 
                cur = "";
                pos = 0;
            }
        } 
        else{
            int amt; cin >> amt;
            draw(sprite, cur, pos);
            // check
            if(cur.size() == 40){
                image.pb(cur); 
                cur = "";
                pos = 0;
            }
            draw(sprite, cur, pos);
            // check
            if(cur.size() == 40){
                image.pb(cur); 
                cur = "";
                pos = 0;
            }
            x += amt;
            spritepos(sprite, x);
        }
    }
    
    for(auto str: image) cout << str << '\n';
    
}

/*----------------------------------------------------------------------------*/

signed main() {
    
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); cout.tie(NULL);
    
    solve();
    
	return 0;
}