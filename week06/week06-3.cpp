//week06-3.cpp
//LeetCode 1780.Check if Number
//題目看似難,但程式很簡單,只要while(迴圈) if(判斷)就好了
class Solution {
public:
    bool checkPowersOfThree(int n) {
        while(n>0){//只要n還有數字,就剝皮,剝掉3的倍數
            //n%3 會剩下?? 剩1很好，剩0很好，但剩2就不好
            if(n%3==2)return false;
            n = n / 3;//剝掉3的倍數
        }
        return true;
    }
};
