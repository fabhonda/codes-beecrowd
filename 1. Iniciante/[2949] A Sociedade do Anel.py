n = int(input())
cont = [0,0,0,0,0]
nomes = ['Hobbit(s)', 'Humano(s)', 'Elfo(s)', 'Anao(s)', 'Mago(s)']
for i in range(n):
    entrada = input()
    if entrada[len(entrada)-1] == 'A':
        cont[3]+=1
    elif entrada[len(entrada)-1] == 'E':
        cont[2]+=1
    elif entrada[len(entrada)-1] == 'H':
        cont[1]+=1
    elif entrada[len(entrada)-1] == 'M':
        cont[4]+=1
    elif entrada[len(entrada)-1] == 'X':
        cont[0]+=1
for i in range(len(cont)):
    print(cont[i],nomes[i])
