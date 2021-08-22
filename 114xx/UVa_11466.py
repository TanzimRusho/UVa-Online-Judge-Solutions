# online judge - 11466
import math

while True:
    num = input()
    num = int(num)
    if num == 0:
        break

    else:
        prime_list = []
        if num % 2 == 0:
            prime_list.append(2)
        
        for divisor in range(3, num+1):
            #print(divisor)
            if num % divisor == 0:
                flag = 1
                for i in range(2, math.ceil(math.sqrt(divisor)+1)):
                    if divisor % i == 0:
                        #print(i)
                        flag = 0 

                if flag == 1:
                    prime_list.append(divisor)
                    # print(prime_list)

        if len(prime_list) == 1:
            print("-1")
        else:
            max_prime = max(prime_list)
            print("{}".format(max_prime))
