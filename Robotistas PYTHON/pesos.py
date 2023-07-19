producto=0
producto = (input("ingrese precio de preducto"))
print ("tu producto cuesta",producto[0:producto.find(".")],"pesos con",producto[producto.find("."):len(producto)],"centavos")