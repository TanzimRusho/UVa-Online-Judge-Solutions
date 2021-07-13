import math

while True:
    n = input()
    if n == "0":
        break
    
    factors = []
    
    print("{} = ".format(n), end="")
    
    n = int(n)
    
    if n < 0:
        #print("{} = -1 x ".format(n), end="")
        #text += (str(n) + " = -1 x ")
        factors.append(-1)
        n *= -1
    #else:
        #print("{} = ".format(n), end="")
        #text += (str(n) + " = ")
        
    while n%2 == 0:
        #print("2 x ", end="")
        #text += ("2 x ") 
        factors.append(2)
        n //= 2
        
    for i in range(3, int(math.sqrt(n))+1):
        while(n%i == 0):
            #print("{} x ".format(i), end="")
            #text += str(i) + " x "
            factors.append(i)
            n //= i
            
    if n > 2:
        #print(n)
        #text += str(n)
        factors.append(n)
    #else:
        #print()
        #text += "\b\b\b"
        
    factors_size = len(factors)
    
    for i in range(factors_size):
        if i == factors_size - 1: 
            print(factors[i], end="")
        else:
            print("{} x ".format(factors[i]), end="")
        
    print()
    #print(text)
    



