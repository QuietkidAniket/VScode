#this is a lambda function which takes a parameter x and just returns x * x
square = lambda x : x *x
people = [
    {"name": "Harry", "house": "Gryffindor"},
    {"name": "Cho", "house": "Ravenclaw"},
    {"name": "Draco", "house": "Slytherin"}
]
def f(person):
    return person["name"]
people.sort(key = f)
print(square(5))
print(people)

