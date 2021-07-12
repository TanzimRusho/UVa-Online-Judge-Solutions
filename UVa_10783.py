# online judge: 10783
T = input()
T = int(T)

for i in range(T):
    n_1 = input()
    n_1 = int(n_1)
    n_2 = input()
    n_2 = int(n_2)
    sum = 0
    for j in range(n_1, n_2+1):
        if j % 2 != 0:
            sum += j
    print("Case {}: {}".format(i+1, sum))
