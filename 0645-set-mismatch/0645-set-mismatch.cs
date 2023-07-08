public class Solution {
    public int[] FindErrorNums(int[] nums) {
         for (int i = 0; i < nums.Length; i++) {
            while (nums[i] != nums[nums[i] - 1]) {
                Swap(ref nums[i], ref nums[nums[i] - 1]);
            }
        }
        
        for (int i = 0; i < nums.Length; i++) {
            if (nums[i] != i + 1) {
                return new int[] { nums[i], i + 1 };
            }
        }
        
        return null;
    }

      private void Swap(ref int a, ref int b) {
        int temp = a;
        a = b;
        b = temp;
    }
}
