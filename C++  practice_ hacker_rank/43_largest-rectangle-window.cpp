long largestRectangle(vector<int> h) {

    stack<int> s;

    int max_area = 0;
    int top_index;
    int area_with_top;

    int i = 0;

    while (i < h.size()) {

        if (s.empty() || h[s.top()] <= h[i])
            s.push(i++);

        else {
            top_index = s.top();
            s.pop();

            area_with_top = h[top_index] * (s.empty() ? i : i - s.top() - 1);

            if (max_area < area_with_top) {
                max_area = area_with_top;
            }
        }
    }

    while (s.empty() == false) {
        top_index = s.top();
        s.pop();
        area_with_top = h[top_index] * (s.empty() ? i : i - s.top() - 1);

        if (max_area < area_with_top) {
            max_area = area_with_top;
        }

    }

    return max_area;
}
