t = int(input())

# checking all true or not
def check(ar):
    ans = True
    for el in ar:
        if(el % 2 != 0):
            ans = False
            break
    return ans


element = list(map(int,input().split()))
# print(check(element))
result = 0
while check(element):
    result += 1
    for a in range(0,t):
        element[a] /= 2

print(result)
    