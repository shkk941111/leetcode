bool judgeSquareSum(int c){
        long b = sqrt(c);  //初始化b,对c开方，若要使a * a + b * b = c，则b <= sqrt(c)
        for(long a = 0;a <= b;){
        //while(a <= b){
            long sum = a * a + b * b;  //求a与b的平方和
            if(sum == c){  //若sum = c，输出true
                return true;
            }        
            else if(sum < c){  //若sum < c，小值减一
                a++;
            }            
            else{  //若sum > c，大值减一
                b--;
            }      
        }
        return false;  //若sum != c，输出false
}
