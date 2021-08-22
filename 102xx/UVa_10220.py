# online judge - 10220

def factorial(n):
    if n == 0:
        return 1
    elif n == 1:
        return 1
    else:
        return n * factorial(n-1)
        
if __name__ == "__main__":
    while True:
        try:
            num = int(input())
            #print(factorial(5))
            fact = factorial(num)
            
            sum_ = 0
            #for i in range(len(str(fact))):
            while(fact > 0):
            
                rem = fact % 10
                sum_ += rem
                fact //= 10
            
            
            print(sum_)
    
        except EOFError:
            break
