
print ("Inserta La cantidad de numeros ")
p=int(input())
lista = []
print ("Inserta los numeros de los productos")
for i in range(0,p):
        n=int(input())
        lista.append(n)
print ("La lista es: ")
for i in range(0,len(lista)):
    print (lista[i])
def particionado (lista):
    pivote = lista[0]
    menores=[]
    mayores=[]
    
    for i in range(1,len(lista)):
        if lista[i]<pivote:
            menores.append(lista[i])
        else :
            mayores.append(lista[i])
    return menores, pivote, mayores
def quicksort(lista):
    if len(lista)<2:
        return lista
    menores,pivote,mayores = particionado(lista)
    return quicksort(menores) + [pivote] + quicksort(mayores)
print ("Ordenado por quicksort: ")
print(quicksort(lista))
def burbuja(arreglo):
    longitud = len(arreglo)
    
    for i in range(longitud):
       for indice_actual in range(longitud - 1):
            indice_siguiente_elemento = indice_actual + 1
            if arreglo[indice_actual] > arreglo[indice_siguiente_elemento]:
                arreglo[indice_siguiente_elemento], arreglo[indice_actual] = arreglo[indice_actual], arreglo[indice_siguiente_elemento]
burbuja(lista)
print ("Ordenado por burbuja: ")
for i in range(0,len(lista)):
    print (lista[i])


