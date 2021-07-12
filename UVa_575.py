# online judge - 575

while(True):
    skew_bin = input()
    if skew_bin == "0":
        break
    
    skew_bin = list(skew_bin)
    
    sum = 0
    for i in range(len(skew_bin)):
        sum += int(skew_bin[len(skew_bin)-i-1]) * ((2 ** (i+1)) - 1)
        
    print(sum)
