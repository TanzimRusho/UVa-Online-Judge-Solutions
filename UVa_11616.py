conversion = {"I":1, "IV":4, "V":5, "IX":9, "X":10, "XL":40, "L":50, "XC":90, 
                "C":100, "CD":400, "D":500, "CM":900, "M":1000};

arabic = list(conversion.values()) 
romans = list(conversion.keys())

while True:
    try:
        line = input()
        
        if line[0].isdigit() == True:
            num = int(line)
            res = ""
            ind = 12
            
            while num > 0:
                while arabic[ind] > num:
                    ind -= 1
                    
                num -= arabic[ind]

                res += romans[ind]

            print(res)
            
        else:
            res = 0
            length = len(line)
            
            cont = False
            for i in range(length):
                if cont:
                    cont = False
                    continue
                x = ""
                if i < length-1:
                    x = line[i:i+2]
                    
                if x in conversion:
                    res += conversion[x]
                    cont = True
                    continue

                else:
                    x = line[i:i+1]
                    res += conversion[x]
                
            print(res)

    except EOFError:
        break
