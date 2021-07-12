# online judge - 10008

n = int(input())

text = ""

for i in range(n):
    text += input().upper()

dict_ = {}
length = len(text)

for i in range(length):
    if text[i].isalpha() == False:
        continue

    if text[i] not in dict_:
        dict_[text[i]] = 1
        
    else:    
        dict_[text[i]] += 1
            
list_ = sorted(dict_.items(), key =
             lambda kv:(kv[1], kv[0]), reverse=True)

len_ = len(list_) 

for i in range(len_):
    for j in range(i, len_-1):
        if list_[j][1] == list_[j+1][1] and ord(list_[j][0]) > ord(list_[j+1][0]):
            list_[j], list_[j+1] = list_[j+1], list_[j]
    
for i in range(len_):  
    print(list_[i][0], list_[i][1])
