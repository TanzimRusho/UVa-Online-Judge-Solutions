# online judge - 12602

T = int(input())
subtractor = ord('A')

for i in range(T):
    text, number = input().split('-')
    
    num0 = ord(text[0]) - subtractor
    num1 = ord(text[1]) - subtractor
    num2 = ord(text[2]) - subtractor
    
    num_first = num0 * 26 ** 2 + num1 * 26 + num2 

    if abs(num_first-int(number)) <= 100: 
        print("nice")
    else:
        print("not nice")
