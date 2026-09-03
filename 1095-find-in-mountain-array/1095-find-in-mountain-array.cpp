/**
 * // This is the MountainArray's API interface.
 * // You should not implement it, or speculate about its implementation
 * class MountainArray {
 *   public:
 *     int get(int index);
 *     int length();
 * };
 */

class Solution {
public:
    int findInMountainArray(int t, MountainArray &arr) {
        int i = 0;
        int j = arr.length()-1;
        // int res = -1;
        while(i<j){
            int mid = (i+j)/2;
            if(arr.get(mid) < arr.get(mid+1)){
                i = mid+1;
            }
            else{
                j = mid;
            }
        }
        int x = i;
        i = 0;
        j = x;
        while(i<=j){
            int mid = (i+j)/2;
            if(arr.get(mid) == t){
                return mid;
            }
            if(arr.get(mid) < t){
                i = mid+1;
            }
            else{
                j = mid-1;
            }
        }
        i = x;
        j = arr.length()-1;
        while(i<=j){
            int mid = (i+j)/2;
            if(arr.get(mid) == t){
                return mid;
            }
            if(arr.get(mid) < t){
                j = mid-1;
                // i = mid+1;
            }
            else{
                i = mid+1;
                // j = mid-1;
            }
        }
        return -1;
    }
};