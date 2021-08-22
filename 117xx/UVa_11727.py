# online judge: 11727
T = input()
T = int(T)
for i in range(T):
    num1, num2, num3 = input().split()
    nums = [int(num1), int(num2), int(num3)]

    nums.remove(max(nums))
    nums.remove(min(nums))
    print("Case {}: {}".format(i+1, nums.pop()))
