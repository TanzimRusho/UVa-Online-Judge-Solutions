# online judge - 10106

while True:    
    try:
        num1 = input()
        num2 = input()
        
        products = []
        
        j = 1
        for i in range(len(num2)):
            products.append(0)
            products[i] +=  j * int(num1) * int(num2[-i-1])
            j *= 10
            
        result = sum(products)
        
        print(result)

    except EOFError:
        break
