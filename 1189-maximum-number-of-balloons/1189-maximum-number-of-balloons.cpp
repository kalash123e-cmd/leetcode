class Solution {
public:
    int maxNumberOfBalloons(string s) {
        unordered_map<char,int> f;
        int count = 0;
        int res = 0;
        for(int i = 0; i<s.size(); i++){
            f[s[i]]++;
        }
        char b[] = {'b','a','l','l','o','o','n'};
        // for(int i = 0; i<7; i++){
        //     if(f[b[i]] != 0){
        //         count++;
        //         f[b[i]]--;
        //         if(count%7 == 0){
        //             res++;
        //             i=0;
        //         }
        //         continue;
        //     }
        //     break;
        // }

        int i = 0;
        while(f[b[i]] != 0){
            count++;
            f[b[i]]--;
            i++;
                if(count%7 == 0){
                    res++;
                    i=0;
                    // continue;
                }
        }
        return res;

    }
};