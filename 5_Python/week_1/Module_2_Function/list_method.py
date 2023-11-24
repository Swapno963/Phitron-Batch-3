num = [23,43,64,24,545,24,253,243,23,3]

print(num)

num.append(42323)
print(num)

num.insert(0,21)
print(num)

if(64 in num):
    num.remove(64)
print(num)

if(4 in num):
    index = num.index(4)
    print(index)

num.sort()
print('sorted arr is ', num)