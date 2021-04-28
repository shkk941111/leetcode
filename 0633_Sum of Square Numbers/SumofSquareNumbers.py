class Solution:
    def judgeSquareSum(self, c: int) -> bool:
        a, b = 0, int(c**0.5)  #初始化a,b,对c开方，若要使a * a + b * b = c，则b <= sqrt(c)
        while a <= b :
            sum = a * a + b * b  #求a与b的平方和
            if sum == c :  #若sum = c，输出true
                return True       
            elif sum < c :  #若sum < c，小值减一
                a += 1         
            else:  #若sum > c，大值减一
                b -= 1 
        return False  #若sum != c，输出false
