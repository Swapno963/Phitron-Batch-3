blance = 299
def buy(item,price):
    
    #blance = blance - price # we can not use global variable in this way
    #rather 
    global blance
    blance -= price
    print('The item is ', item,'and have ',blance )

buy('phone',2)