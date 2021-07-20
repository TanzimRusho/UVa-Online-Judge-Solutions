def P(a, b):
    if b==1: 
        return a
    elif b==0: 
        return 1
    
    else:
        
        something = 1
        for i in range(1, a+1):
            something *= i 
        
        numerator = something 
        
        another_thing = 1
        diff = a - b        
        for i in range(1, diff+1):
            another_thing *= i

        denominator = another_thing
        
        return numerator / denominator
    
def main():
    while True:
        try:
            n, m = input().split()
            n, m = int(n), int(m)
            
            #num = str(int(P(n, m)))
            num = int(P(n,m))
            
            #num_len = len(num)
            
            #for i in range(num_len):
            while num%10==0:
                num /= 10
            
            print(int(num%10))
        
        except EOFError:
            break
    
if __name__ == "__main__":
    main()
