// week05-3.cpp
// LeetCode 2206. Divide Array Into Equal Pairs
class Solution {
public:
    bool divideArray(vector<int>& nums) {
        int a[501] = {}; // 秨501皚, 场干0
        int odd = 0;
        for(int i=0; i<nums.size(); i++) {
            int now = nums[i]; // 瞷矪瞶计
            a[now]++; // now 糤1Ω
            if(a[now] % 2 == 0) odd--; //Чぇ琌案计,ぶ1计
            else odd++; // 1计
        }
        if(odd==0) return true;
        else return false;
    }
};
