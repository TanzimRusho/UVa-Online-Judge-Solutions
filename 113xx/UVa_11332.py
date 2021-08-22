# online judge: 11332

while True:
    number = input()
    if number == "0":
        break
    elif len(number) == 1:
        print(number) 
    else:
        number = int(number)
        while(number // 10 != 0):
            sum = 0
            sum += number % 10
            number //= 10
            sum += number
            number = sum

        print(sum)
