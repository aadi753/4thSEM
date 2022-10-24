class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        unordered_set<int> st;
        
        for(int i = 0; i < arr.size(); i++){
            
            if(arr[i] % 2 == 0){
                //even number so half of it may also exist;
                if(st.find(arr[i] / 2) != st.end()) return true;
            }
            
            if(st.find(arr[i] * 2) != st.end()) return true;
            
            st.insert(arr[i]);
        }
        
        return false;
    }
};