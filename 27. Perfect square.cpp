class Solution {
public:
    
// Using Lagrange's Four Square theorem (only possible solution are 1,2,3,4)
    bool isSquare(int n){
        int sq = sqrt(n);
        return (sq*sq==n);
    }
    int numSquares(int n) {
        if(isSquare(n)) return 1;
        
        for(int i=1;i*i<n;i++){
            if(isSquare(n-(i*i))) return 2;
        }
        while(n%4==0){
            n/=4;
        }
        if(n%8==7) return 4;
        return 3;
        
    }
};