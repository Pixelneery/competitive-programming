#include <iostream>
#include <string>
//https://tlx.toki.id/contests/troc-37/problems/A
using namespace std;

string solo(int sb, int eb, int sd, int ed, int sg, int eg, int sv, int ev) {
    int solo_guitar_time = 0;
    for (int current_time = 0; current_time < 176; current_time++) {
        bool is_guitar_solo = true;
        if (sb <= current_time && current_time < eb) is_guitar_solo = false;
        if (sd <= current_time && current_time < ed) is_guitar_solo = false;
        if (sv <= current_time && current_time < ev) is_guitar_solo = false;
        if (is_guitar_solo && sg <= current_time && current_time < eg) solo_guitar_time++;
    }
    if (solo_guitar_time > 0) {
        return "Guitar solo (" + std::to_string(solo_guitar_time) + " sec.)";
    } else {
        return "No guitar solo :(";
    }
}

int main() {
    int sb, eb, sd, ed, sg, eg, sv, ev;
    cin >> sb >> eb;
    cin >> sd >> ed;
    cin >> sg >> eg;
    cin >> sv >> ev;

    cout << solo(sb, eb, sd, ed, sg, eg, sv, ev);
    return 0;
}