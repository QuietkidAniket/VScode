import pickle
myfile = open("stu.dat","rb")
try:
    while True:
        print(pickle.load(myfile))
except EOFError:
    print("End of file, exiting program")
    myfile.close()