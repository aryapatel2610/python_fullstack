# Update Cart Function

def update_cart(cart, item, qty):

    if item in cart:
        cart[item] = cart[item] + qty
    else:
        cart[item] = qty

    return cart

cart = {
    "Laptop": 1,
    "Mouse": 2
}

print(update_cart(cart, "Mouse", 1))
print(update_cart(cart, "Keyboard", 1))
