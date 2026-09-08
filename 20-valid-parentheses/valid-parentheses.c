bool isValid(char* s) {
    int arr[128] = {0};
    arr['('] = 1;
    arr['{'] = 2;
    arr['['] = 3;
    arr[')'] = -1;
    arr['}'] = -2;
    arr[']'] = -3;
    int n = strlen(s);
    int stack[n];
    int top = -1;
    if (n % 2 != 0)
        return false;
    for (int i = 0; i < n; i++) {
        if (0 < arr[s[i]]) {
            stack[++top] = arr[s[i]];
        } else {
            if (top == -1) {
                return false;
            }
            if (arr[s[i]] + stack[top] == 0)
                top--;
            else return false;
        }
    }
    return top == -1;
}