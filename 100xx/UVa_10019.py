# online judge - 10019
T = int(input())

for i in range(T):
    text = input()
    num = int(text)
    
    bin1_count = 0
    hex1_count = 0
    
    while(num > 0):
        if(num % 2 == 1):
            bin1_count += 1
        num //= 2
    
    length = len(text)
    list_ = [0, 1, 1, 2, 1, 2, 2, 3, 1, 2]
    for j in range(length):
        hex1_count += list_[int(text[j])]

    print(bin1_count, hex1_count)
