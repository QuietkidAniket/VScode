def remove_letter(sentence, letter):
    splitstring = list(sentence) #splits the string into a list
    res = list()
    for i in splitstring : 
        if i == letter : 
            continue
        res.append(i)
    print(''.join(res))
remove_letter("Hi, i am Aniket.",'i')