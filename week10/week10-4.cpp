///week10-4.cpp
//�BLeetCode 1399
class Solution {
public:
    int countLargestGroup(int n) {
        int a[100] = {};///�o�̡A�n��total�X�{�X��(�ΨӲέptotal�X�{����)
        int largest = 0;///�O�����̤j�����@�s���̭����X�ӼơH
        for(int i=1; i<=n;i++){///1..n�H�����^��
            int now = i;///�{�b�n��֪��Ʀr
            int total =0;///�^��e��total�O0
            while(now>0){///��֪k
                ///�^��̡A��total�@���[�_��
                total +=now % 10;///��� now % 10 ��C�@��ơA�[��total
                now = now/10;///��֦Z�Anow�ܤp�F
            }
            a[total]++;///�^��᭱�A�n�έptotal���X�{����
            if(a[total] > largest )largest = a[total];
        }
        int ans = 0;///�̤j���ƪ����Ǹs�A���X�s�H
        for(int i=0; i<100; i++){
            if(a[i]==largest) ans++;///�p�Ga[i]�O�̤j���ƪ����s�A�N�h�@�s
        }
        return ans;
    }
};
