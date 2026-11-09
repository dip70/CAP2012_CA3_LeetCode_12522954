#include <iostream>
#include <vector>
#include <stack>
#include <algorithm>

using namespace std;

int main() {
    vector<int> heights = {2, 1, 5, 6, 2, 3};
    stack<int> st;
    int maxArea = 0;
    int n = heights.size();

    for (int i = 0; i <= n; i++) {
        int currentHeight = (i == n) ? 0 : heights[i];

        while (!st.empty() && currentHeight < heights[st.top()]) {
            int height = heights[st.top()];
            st.pop();

            int width = st.empty() ? i : i - st.top() - 1;
            maxArea = max(maxArea, height * width);
        }
        st.push(i);
    }

    cout << "Max Rectangle Area: " << maxArea << endl;

    return 0;
}
