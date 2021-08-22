# online judge - 10579

def n_fibonacci(n):
    f = [0, 1]
    
    for i in range(2, n+1):
        f.append(f[i-1] + f[i-2])
        
    return f[n]
    
if __name__ == "__main__":
    while True:
        try:
            n = int(input())
            print(n_fibonacci(n))
            
        except EOFError:
            break
