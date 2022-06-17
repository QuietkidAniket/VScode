myfile = open(r"E:\VScode\pythonprogs\mytxtfile.txt","r")
vowel_list = ['a','e','i','o','u']
vowels, consonants, upcase, lowcase = 0,0,0,0
str = " "
while str :
    str = myfile.readline()
    for chr in list(str):
        if chr.islower():
            lowcase +=1 
        elif chr.isupper():
            upcase +=1
        if chr.lower() in vowel_list:
            vowels += 1
        elif chr.isalpha():
            consonants += 1
print(f"Vowels : {vowels}  Consonants : {consonants} uppercase : {upcase} lowercase : {lowcase}")