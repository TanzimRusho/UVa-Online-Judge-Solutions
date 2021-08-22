# online judge - 10340

while True:
    try:
        text1, text2 = input().split()
        
        if len(text1) > len(text2):
            print("No")
            continue
        
        match = ""
        break_ = 0 
        for letter in text1:
            if letter not in text2:
                print("No")
                break_ = 1
                break
            else:
                occ = text2.index(letter)
                match += text2[occ]
                #print(match)
                text2 = text2[occ+1:]
                #print(text2)
                
        
        if break_ == 1:
            continue
        elif text1 == match:
            print("Yes")
        else:
            print("No")

    except EOFError:
        break
