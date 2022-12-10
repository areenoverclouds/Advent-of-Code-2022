#include <bits/stdc++.h>
using namespace std;

/*-----------------------------DAY 10: CATHODE RAY TUBE--------------------------------------*/

void solve(){
    int x = 1, ans = 0, cycle = 0;
    // end the input with . in newline
    while(true){
        string task;
        cin >> task;
        if(task == ".") break;
        else if(task == "noop"){
            cycle++;
            // check
            if(cycle == 20 || cycle == 60 || cycle == 100 || cycle == 140 || 
               cycle == 180 || cycle == 220)
               ans += (x * cycle);
        } 
        else{
            int amt; cin >> amt;
            cycle++;
            // check
            if(cycle == 20 || cycle == 60 || cycle == 100 || cycle == 140 || 
               cycle == 180 || cycle == 220)
               ans += (x * cycle);
            cycle++;
            // check
            if(cycle == 20 || cycle == 60 || cycle == 100 || cycle == 140 || 
               cycle == 180 || cycle == 220)
               ans += (x * cycle);
            x += amt;
        }
    }
    cout << ans;
}

/*----------------------------------------------------------------------------*/

signed main() {
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); cout.tie(NULL);
    solve();
    return 0;
}
