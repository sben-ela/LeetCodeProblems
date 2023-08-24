class Solution {
public:
int reverse(int x) {
    int sign;
    int new_x;
    int i = 0;
    sign = 1;
    new_x = 0;
    if (x < 0)
    {
        if (x == -2147483648)
            return (0);
        x *= -1;
        sign = -1;
    }
    while (x)
    {
        new_x *= 10;
        new_x += x % 10;
        x  = x / 10;
        if (new_x > 2147483647 / 10 && x)
            return (0);
    }
    return (new_x * sign);
}
};