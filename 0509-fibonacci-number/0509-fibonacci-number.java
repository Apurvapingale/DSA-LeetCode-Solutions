class Solution {
    public int fib(int n) {
        int a =0;
        int b=1;

        while(n>0){
           int temp = b;
            b=b+a;
            a=temp;
            n--;
    
        }
        return a;
    }
}