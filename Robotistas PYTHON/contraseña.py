idx = 0
contraseña = ("esmiclave")
while(idx==0):
    contraseña_g = (input("coloque su clave"))
    if (contraseña_g.lower() == contraseña):
        print ("es correcta")
        idx = 1
        break
    else:
        print("no es correcta")
