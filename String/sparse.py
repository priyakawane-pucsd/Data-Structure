def matchingStrings(strings, queries):
    d = {}
    res=[]
    for i in strings:
        if i in d:
            d[i]+=1
        else:
            d[i]=1

    for j in queries:
        if j in d:
            res.append(d[j])
        else:
            res.append(0)

    return res

strings = ['aba','baba','aba','xzxb']
queries = ['aba','xzxb','ab']
res = matchingStrings(strings, queries)

for i in res:
    print(i)
