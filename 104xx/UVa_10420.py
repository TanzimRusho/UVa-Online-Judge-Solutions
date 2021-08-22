# online judge - 10420
n = int(input())

dictionary = {}
for i in range(n):
    text = input().split()
    text = list(text)
    #print(text)
    if text[0] not in dictionary:
        dictionary[text[0]] = 1
    else:
        dictionary[text[0]] += 1
        
for pair in sorted(dictionary.items()):
    print("{} {}".format(pair[0], pair[1]))
