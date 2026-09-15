class Solution {
  public:
    vector<int> getMinMax(vector<int> &arr) {
        int min = INT_MAX;
        int max = INT_MIN;
        int i;
        for(i=0 ; i<arr.size() ; i++)
        {
            if (arr[i]>max)
            max = arr[i];
            
        }
         for(i=0 ; i<arr.size() ; i++)
        {
            if (arr[i]<min)
                min = arr[i];
        }
        return {min , max};
    }
};