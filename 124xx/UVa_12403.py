# online judge - 12403
T = input()
T = int(T)

total_amount = 0

for i in range(T):
    cmd = input()
    if " " in cmd:
        ops, amt = cmd.split()
        amt = int(amt)
    else:
        ops = cmd
    
    if ops == "donate":
        total_amount += amt
    else:
        print(total_amount)
