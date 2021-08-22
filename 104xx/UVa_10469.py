# online judge - 10469

import math

def is_prime(n):
    flag = True
    for i in range(2, int(math.sqrt(n))+1):
        if n % i == 0:
            flag = False
            
    return flag 
            
if __name__ == "__main__":
    while True:
        n = int(input())
        if n == 0:
            break

        perf_list = [2, 3, 5, 7, 13, 17, 19, 31]

        if n in perf_list:
            print("Perfect: {}!".format((2 ** (n-1))*(2 ** n - 1)))
            continue
            
        elif is_prime(n) == True:
            print("Given number is prime. But, NO perfect number is available.")
            
        elif is_prime(n) == False:
            print("Given number is NOT prime! NO perfect number is available.")
