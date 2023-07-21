palabra= input("escribe un palindromo")
palabra = palabra.lower()
revpalabra = list(palabra)
palabraN = list(palabra)
revpalabra.reverse()
if (palabraN == revpalabra):
    print(revpalabra,"es un palindromo")
else:
    print(palabraN,"no es un palindromo")
