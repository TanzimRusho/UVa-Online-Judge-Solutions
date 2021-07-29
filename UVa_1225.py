import collections

t = int(input())

for i in range(t):
    n = int(input())
    
    string = ""
    
    for i in range(1, n+1):
        string += str(i)
        
    digits = {"0": 0, "1": 0, "2": 0, "3": 0, "4": 0, "5": 0, "6": 0, "7": 0, 
        "8": 0, "9": 0}
    
    for ch in string:
        digits[ch] += 1
   
    digits = collections.OrderedDict(sorted(digits.items()))
    items = list(digits.items())
    
    for ch in items[:-1]:
        print(ch[1], end=" ")
    print(items[-1][1])

        
