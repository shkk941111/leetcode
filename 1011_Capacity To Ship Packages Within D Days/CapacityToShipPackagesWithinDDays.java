class Solution {
public:
    int shipWithinDays(vector<int>& weights, int D) {
        int l = 1, h = 0;
        for(int weight :weights){
            l = max(l,weight);
            h += weight;
        }
        while(l <= h){
            int mid = (l + h) / 2;
            if(satisfy(weights, D, mid)){
                h = mid - 1;
            }
            else{
                l = mid + 1;
            }
        }
        return l;
    }
    public bool satisfy(int[] weights, int D, int cap){
        int cnt = 1, val = cap;
        for(int weight : weights){
            if(val < weight){
                ++cnt;
                val = cap;
                if(cnt > D){
                    return false;
                }
            }
            val -= weight;
        }
        return true;
    }
};
