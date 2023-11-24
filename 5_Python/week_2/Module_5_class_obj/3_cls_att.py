class shoping:
    cart = []
    def __init__(self,buyer):
        self.buyer = buyer

    def add_to_cart(self,item):
        self.cart.append(item)

sm_shoping = shoping("swapno")
sm_shoping.add_to_cart('watch')
sm_shoping.add_to_cart('phone')
print(sm_shoping.cart)


srv_shoping = shoping('simanto')
srv_shoping.add_to_cart('car')
srv_shoping.add_to_cart('bus')
print(srv_shoping.cart)