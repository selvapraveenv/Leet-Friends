class Solution {
public:
    int reverse(int x) {
        if(x==-2147483648 ){
            return 0;
        }

        int rev=0;

        int symbol=x>0?1:-1;
        if (symbol==-1){
            x=x*symbol;
        }
        while(x>0){
            if ( rev>214748364 )
            return 0;
            if(rev>214748364 && (x%10)>7)
            return 0 ;
            int rem = x % 10;
            rev=(rev*10)+rem;
            x=x/10;
        }

        if (symbol==-1){
            return symbol*rev;
        }
        else
        return rev;
    }
};
