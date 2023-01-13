class Solution {
public:
    int trap(vector<int>& height) {
        int max = 0;
        int maxIndex = 0;
        int curr = 0;
        for(int i = 0; i < height.size(); i++) {
            for(int j = i + 1; j < height.size(); j++) {
                if(height[j] >= height[i]) 
                {
                    maxIndex = j;
                    j = height.size();
                    printf("(i, j) = (%d, %d)\n", i, j);
                }
            }
        }

        return 0;
    }
};