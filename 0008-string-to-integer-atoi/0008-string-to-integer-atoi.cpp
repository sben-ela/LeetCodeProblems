class Solution {
public:
    int myAtoi(string s) {
        long num;
        int sign;

        num = 0;
        sign = 1;
        int i = 0; 
        while (s[i] == ' ' || s[i] == '\t')
            i++; 
        if (s[i] == '-')
            sign = -1;
        if (s[i] == '+' || s[i] == '-')
            i++;
        while (s[i] <= '9' && s[i]  >= '0')
        {
            num = num * 10 + (s[i] - 48);
            if (num  > 2147483647 && sign > 0)
                return (2147483647);
            if (num > 2147483648)
                return (-2147483648);
            i++;
        }
        return (num * sign);
    }
};