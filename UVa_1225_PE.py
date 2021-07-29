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
   
    # digits = sorted(digits)
    # last = digits[-1]
    # digits = digits[:-1]
    
    # for key in digits:
    #     print("{}".format(digits[int(key)]), end=" ")
    # print(last)
    
    # print(len(digits))

    digits = collections.OrderedDict(sorted(digits.items()))
    for ch in digits:
        print(digits[ch], end=" ")
    print()

        
