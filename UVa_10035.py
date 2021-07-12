# online judge - 10035
# interesting problem

while(True):
    num_1, num_2 = input().split()
    
    if int(num_1) == 0 and int(num_2) == 0:
        break
    
    #i = len(num_1) - 1
    #j = len(num_2) - 1 
    
    i = len(num_1)
    j = len(num_2)
    
    new_num1 = ""
    new_num2 = ""
    
    if i > j:
        new_num2 = '0' * (i-j) + num_2
        new_num1 = num_1
    elif j > i:
        new_num1 = '0' * (j-i) + num_1
        new_num2 = num_2
    else:
        new_num1 = num_1
        new_num2 = num_2
    
    count_cout = 0
    carry = 0
    
    i = len(new_num1) - 1
    j = len(new_num2) - 1 
    
    print(i, j)
    print(new_num1)
    print(new_num2)
    
    while(i>=0 or j>=0):
        print("%d + %d + %d = %d"%(carry, 
            int(new_num1[i]), int(new_num2[j]),
                carry + int(new_num1[i]) + int(new_num2[j])))
        if carry + int(new_num1[i]) + int(new_num2[j]) > 9:
            carry = 1
            count_cout += 1 
        else:
            carry = 0
            
        i -= 1
        j -= 1
    
    if count_cout == 0:
        print("No carry operation.")
    elif count_cout == 1:
        print("{} carry operation.".format(count_cout))
    else:
        print("{} carry operations.".format(count_cout))
    
