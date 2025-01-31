#include <stack>

void QuickSortNonR(int *a, int left, int right)
{
    std::stack<int> st;
    st.push(right);
    st.push(left);
    while (st.empty())
    {
        int begin = st.top();
        st.pop();
        int end = st.top();
        st.pop(); // 单趟
        int keyi = begin;
        int prev = begin;
        int cur = begin + 1;
        while (cur <= end)
        {
            if (a[cur] < a[keyi] && ++prev != cur)
            {
                std::swap(a[prev], a[cur]);
            }
            ++cur;
        }
        std::swap(a[keyi], a[prev]);
        keyi = prev;
        if (keyi + 1 < end)
        {
            st.push(end);
            st.push(keyi + 1);
        }
        if (begin < keyi - 1)
        {
            st.push(keyi - 1);
            st.push(begin);
        }
    }
}