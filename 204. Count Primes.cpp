class Solution {
public:
    int countPrimes(int n) {
        if(n==0) return 0;
       vector<bool> sieve(n);
        vector<int> prime;
        //�@��s�@��ƪ�A�@��Ni����ƭ��z��
        for(int i=2;i<n;i++){
           if(!sieve[i])
               prime.push_back(i);
            for(int j=0;i*prime[j]<n;j++){
                sieve[i*prime[j]]=true;
                 if(i%prime[j]==0)
                  break;
            }
        }
        return prime.size();
    }
};
