# online judge - 12577
i = 1
while True:
    text = input()    
    if text == "*":
        break
    elif text == "Hajj":
        print("Case {}: Hajj-e-Akbar".format(i))
    elif text == "Umrah":
        print("Case {}: Hajj-e-Asghar".format(i))
    
    i += 1
