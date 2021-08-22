# Online Judge - 10018
T = int(input())

for i in range(T):
    num = input()
    
    count = 0
    
    while True:
        num_rev = num[::-1]
        pal_candidate = int(num_rev) + int(num)
        count += 1
        #print(pal_candidate, end=" ")
        
        if str(pal_candidate) == str(pal_candidate)[::-1]:
            break
        
        num = str(pal_candidate)
        
    print(count, pal_candidate)
        
