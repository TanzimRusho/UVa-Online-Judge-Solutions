# online judge - 10223

def catalan(num):
    result = factorial(2*num) / (factorial(num+1) * factorial(num))
    
    return int(result)
    
    
def factorial(n):
    if n==0:
        return 1
    elif n==1: 
        return 1
    else:
        return n*factorial(n-1)

if __name__ == "__main__":
    catalan_ = []
    
    for i in range(20):
        catalan_.append(catalan(i))
        
    #print(catalan_)
    while True:
        try:
            num = int(input())
            for i in range(1, 20):
                if num == catalan_[i]:
                    print(i)
            
            
        except EOFError:
            break
