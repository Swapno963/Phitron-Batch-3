def sums(num1,num2,*args): # *args can handel multiple argument
    sum = num1 + num2
    for num in args:
        sum+=num
    return sum

def sum2(num1=0,num2=0):
    return num1+num2


print(sums(2,5,3,5,3))
print("The second sum is : ",sum2(2))
    
