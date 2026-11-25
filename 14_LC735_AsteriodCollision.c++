class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {

        stack<int> st;

        for (int i = 0; i < asteroids.size(); i++) {

            int current = asteroids[i];
            bool destroyed = false;

            while (!st.empty() && st.top() > 0 && current < 0) {

                if (st.top() < -current) {
                    st.pop();
                }

                else if (st.top() == -current) {
                    st.pop();
                    destroyed = true;
                    break;
                }

                else {
                    destroyed = true;
                    break;
                }
            }

            if (!destroyed) {
                st.push(current);
            }
        }

        vector<int> ans;

        while (!st.empty()) {
            ans.push_back(st.top());
            st.pop();
        }

        reverse(ans.begin(), ans.end());

        return ans;
    }
};
