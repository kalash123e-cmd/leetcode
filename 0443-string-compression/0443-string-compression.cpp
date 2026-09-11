class Solution {
public:
    int compress(vector<char>& arr) {
        int i = 0;
        int k = 0;
        int count = 1;
        while(i<arr.size()){
            count = 1;
            int j = i+1;
            while( j<arr.size() && arr[j] == arr[i]){
                count++;
                j++;
            }
            arr[k++] = arr[i];
            if(count > 1){
                // if(count >= 10){
                    string c = to_string(count);
                    
                    for(int l = 0; l<c.size(); l++){
                        // if(k+1 < arr.size()){
                        
                            arr[k++] = c[l];
                        // }
                        // k++;
                    }
                // }
                // else{
                //     arr[k] = arr[i];
                //     arr[k+1] = count+'0';
                //     k++;
                // }
            }
            // else{
            //     arr[k] = arr[i];
            //     i++;
            //     k++;
            //     continue;
            // }
            i = j;
            // k++;

        }
        return k;
    }
};