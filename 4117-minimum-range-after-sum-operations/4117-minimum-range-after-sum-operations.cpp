class Solution {
public:
    int minRange(int a, int b, int c) {
        int a1 = max({a, b, c}) - min({a, b, c});
        int a2 = max({b+c,b,c}) - min({b+c,b,c});
        // int a5 = max({a+c,b,c}) - min({a+c,b,c});
        int a3 = max({a,a+c,c}) - min({a,a+c,c});
        // int a6 = max({a,b+a,c}) - min({a,b+a,c});
        int a4 = max({a,b,b+a}) - min({a,b,b+a});
        // int a7 = max({a,b,c+b}) - min({a,b,c+b});

        return min({a1,a2,a3,a4});
    }
};