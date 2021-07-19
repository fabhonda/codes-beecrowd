while True:
    try:
        cont=0
        vector = []
        n = input()
        frase = input()
        for i in range(len(n)):
            vector.append(n[i])
        for i in range(len(vector)):
            for j in range(len(frase)):
                if vector[i] == frase[j]:
                    cont+=1
        print(cont)

    except EOFError:
        break
