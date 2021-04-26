class Solution {
  public:
    vector<int> twoSum(vector<int>& nums,int target){
      unordered_map<int,int> record;
      for(int i = 0 ; i < num.size() ; i++)
      {
        int result = target - num[i];
        if(record.find(result) !+ record.end())
        {
          int res[] = {record[result],i};
          return vector<int>(res,res + 2);
        }
        record[nms[i]] = i;
      }
      return {};
    }
};
