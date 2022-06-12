class flight():
    def __init__(self, capacity):
        self.capacity =  capacity
        self.passengers = []
    #method to add passenger to the flight 
    def add_passengers(self, name):
        if not self.open_seats():
            return False
        self.passengers.append(name)
        return True
    def open_seats(self):
        return self.capacity - len(self.passengers)
#main
flightobg = flight(5) 
people = ['Aniket','Nicola','Blanca','Dasha','Angelina','Karen']
#attempt to add each person to the flight
for person in people : 
    if flightobg.add_passengers(person):
        print(f"Added {person} to flight successfully")
    else: 
        print(f"No available seats for {person}")