materias = ["Mate", "Español", "Historia", "Aleman", "Quimica"]
calificaciones = []
for materiasR in materias: 
    nota = int(input(f"que sacaste en {materiasR}"))
    if (nota>=7):
        calificaciones.append(materiasR)
for materiasP in calificaciones:
    materias.remove(materiasP)
print("reprobaste",materias)
print(f"aprovaste{calificaciones}")