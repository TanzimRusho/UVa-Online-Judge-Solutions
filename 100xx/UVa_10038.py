# online judge - 10038
while True:    
    try:
        inputs = [int(x) for x in input().split()]
        
        n = inputs[0]
        numbers = inputs[1:]
        
        #print(n, numbers)

        diffs = []
        length = len(numbers)
        
        for i in range(1, length):
            diffs.append(i)
        
        #print(diffs)
        
        #length = len(numbers)
        jolly = True
        
        for i in range(1, length):
            diff = abs(numbers[i] - numbers[i-1])
            if diff not in diffs:
                jolly = False
    
            else:
                diffs.remove(diff)
                #print(diffs)
        
        if len(diffs) != 0:
            jolly = False
               
        if jolly == False:
            print("Not jolly")
        else:
            print("Jolly")
                   
        
    except EOFError:
        break
