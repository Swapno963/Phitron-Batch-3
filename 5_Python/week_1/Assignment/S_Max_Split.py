str = input()

l = 0
result = []
cur = ''
for a in str:
    cur += a
    if(a =='L'):
        l +=1
    else:
        l -=1
    if l == 0:
        result.append(cur)
        cur = ''
print(len(result))
for r in result:
    print(r)
