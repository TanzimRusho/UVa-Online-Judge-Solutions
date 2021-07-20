T = int(input())

for i in range(T):
    num = input()
    length = len(num)
    num_dig = []
    
    for j in range(length):
        num_dig.append(int(num[j])**length)
        
    if int(num) == sum(num_dig):
        print("Armstrong")
    else:
        print("Not Armstrong")
    
