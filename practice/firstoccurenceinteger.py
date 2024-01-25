def firstoccurenceinteger():
    n =  int(input())
    #  key -> arr[i] | value -> i   , arr[i] : i is stored 
    occurence = dict()
    # array of elements
    arr = list() 
    for i in range(n):
        arr.append( int(input()) ) # appends the input element into list
    
    #checking for the first occurence integer
    for i in range(n):
        # try accessing the index of the arr[i] only if (arr[i] : i) is present "in occurence" dictionary
        # otherwise just put (arr[i] : i) into "occurence" dictionary
        try:
            if occurence[arr[i]]:
                print( occurence[arr[i]] )
                return 
        except:
            occurence[arr[i]] = i
        
    # if first occurence integer is not found then 
    print(-1)
    return

# __main__
# calling the first occurence integer function
firstoccurenceinteger()
        
