# online judge - 11789

while(True):
    num = input()
    
    if int(num) == 0:
        break
    
    d = num[-1]
    
    num = num[:-1]
    
    if (int(num) - 5 * int(d)) % 17 == 0:
        print(1)
    else:
        print(0)
