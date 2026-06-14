#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    vector<int> prices = {100, 80, 60, 70, 60, 75, 85};
    int n = prices.size();
    
    vector<int> span(n);
    stack<int> st;

    for (int i = 0; i < n; i++) {
        while (!st.empty() && prices[st.top()] <= prices[i]) {
            st.pop();
        }

        span[i] = st.empty() ? (i + 1) : (i - st.top());
        st.push(i);
    }

    cout << "Stock Spans: ";
    for (int x : span) {
        cout << x << " ";
    }
    cout << "\n";

    return 0;
}
