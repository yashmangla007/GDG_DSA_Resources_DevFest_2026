vector<bool> sieve(){
    int N = 5e6+1;
    vector<bool> primes(5e6+1, true);
    for(int i=2;i<N;i++){
        if(!primes[i]) continue;

        for(int j=i+i;j<N;j+=i){
            primes[j]=false;
        }
    }
    return primes;
}

vector<bool> primes = sieve();

class Solution {
public:
    int countPrimes(int n) {
        int ctr = 0;
        for(int i=2;i<n;i++){
            if(primes[i]) ctr++;
        }
        return ctr;
    }
};