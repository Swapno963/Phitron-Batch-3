n = int(input())

element = list(map(int,input().split()))
counts = {}
remove = 0
for el in element:
    counts[el] = counts.get(el,0) + 1
    print(counts)

for el, ct in counts.items():
    if(ct > el):
        remove += ct - el
    if(el > ct):
        remove += ct

# print(remove)
