class Solution {
    public int numJewelsInStones(String jewels, String stones) {
        int[] jewel = new int[256];
        for (char c: jewels.toCharArray()) {
            jewel[c]++;
        }
        
        int res = 0;
        for (char c:  stones.toCharArray()) {
            res += jewel[c];
        }
        
        return res;
    }
}