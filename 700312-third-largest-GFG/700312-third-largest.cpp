class Solution {
  public:
    int thirdLargest(vector<int> &arr) {
       if(arr.size()==2||arr.size()==1)
       return -1;
       sort(arr.begin() , arr.end());
       return arr[arr.size()-3];
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna