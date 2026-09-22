// class Solution {
// public:
//     int removeDuplicates(vector<int>& arr) {
//         int i = 0;
//         int j = 1;
//         int k = 0;
//         int count = 0;
//         while(j<arr.size()){
//             // if(arr[i+1] == arr[i]){
//             //         i++;
//             //     }
//             if(arr[i] != arr[j]){
//                 if(j-k > 1){
//                     i = i+2;
//                 }
//                 // i++;
//                 else{
//                     i++;
//                 }
//                 arr[i] = arr[j];
//                 k=j;
//                 j++;
//             }
//             else{
//                 j++;
//             }
//         }
//         if(j-1 != k){
//             i++;
//         arr[i] = arr[j-1];
//         }
//         return i+1;
//     }
// };

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.size() <= 2) return nums.size();
        
        int i = 2; 
        for (int j = 2; j < nums.size(); j++) {

            if (nums[j] != nums[i - 2]) {
                nums[i] = nums[j];
                i++;
            }
        }
        return i;
    }
};