# online judge - 10107

array_ = []
while True:
    try:
        array_.append(int(input()))
        #for i in range(len(array_)):
        array_.sort()
        if len(array_) % 2 != 0:
            print(array_[int((len(array_)+1)/2) - 1])
                
        else:
            mid1 = array_[int(len(array_)/2)-1]
            mid2 = array_[int(len(array_)/2)]
            print(int((mid1+mid2)/2))    
                
    except EOFError:
        break
