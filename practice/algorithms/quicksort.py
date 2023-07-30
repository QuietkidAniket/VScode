""" Quicksort Algorithm """
def quicksort(array):
    if len(array) < 2:
        return array
    else:
        pivot = array[0]
        less = [i for i in array[1:] if i <= pivot]
        greater = [i for i in array[1:] if i > pivot]
        return quicksort(less) + [pivot]  + quicksort(greater)
#__main__
print(quicksort([16,17,23,2,7,49,5,20]))