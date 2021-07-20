import math

while True:
    n1, n2 = input().split()
    if n1 == n2 == "0":
        break
    n1, n2 = int(n1), int(n2)
    
    count = 0
    
    for i in range(n1, n2+1):
        sqrt_ = math.sqrt(i) 
        if sqrt_ == math.floor(sqrt_):
            count += 1 
            
    print(count)
