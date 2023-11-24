def name(title,fname):
    return f'{title} {fname}'

def big_name(title,**kargs):
    for key,val in kargs.items():
        print(key,' ',val)

    
def multiple_return(num1,num2):
    add = num1 + num2
    multi = num1 * num2
    return add,multi

print(name(fname='Swapno',title='Mr'))

print('Hear comes big name : ')
big_name(title='Mr',fname='Swapno',lname='Mondol')

print(multiple_return(3,3))