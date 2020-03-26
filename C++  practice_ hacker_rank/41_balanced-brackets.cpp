// Complete the isBalanced function below.
string isBalanced(string s){
    stack<char> stck;

    for (char c: s) {
        switch (c) {

            case '(':
                stck.push(c);
                break;
            case '[':
                stck.push(c);
                break;
            case '{':
                stck.push(c);
                break;

            case ')':
                if (stck.empty() || (stck.top() != '(')) {
                    return "NO";
                }
                stck.pop();
                break;

            case ']':
                if (stck.empty() || (stck.top() != '[')) {
                    return "NO";
                }
                stck.pop();
                break;

            case '}':
                if (stck.empty() || (stck.top() != '{')) {
                    return "NO";
                }
                stck.pop();
                break;
        }
    }

    return stck.empty() ? "YES" : "NO";
}
