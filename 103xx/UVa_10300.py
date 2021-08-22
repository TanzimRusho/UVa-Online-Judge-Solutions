# online judge - 10300

while True:
    try:
        T = int(input())
        
        for i in range(T):
            n = int(input())
            
            burden = []
            for j in range(n):
                farmer_info = [int(x) for x in input().split()]
                size = farmer_info[0]
                env = farmer_info[2]
                burden.append(size * env)
        
            print(sum(burden))
        
    except EOFError:
        break
