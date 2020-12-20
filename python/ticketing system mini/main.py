option = -1
totalTicket  = 5
bookedTicket = 0
ticketList = {}

class Person:
    def __init__(self,name,contact,address):
        self.name = name
        self.contact = contact
        self.address = address
    def __str__(self):
        return str(self.__class__) + ": " + str(self.__dict__)
        

while(option != 6):
    print('Enter option')
    print('1. View available ticket')
    print('2. Book Ticket')
    print('3. Cancel Ticket')
    print('4. View List')
    print('5. Find by Name')
    print('6 exit')
    option = int(input('Enter The Value '))
    
    if(option == 1):
        print('The number of available tickets are {}'.format(totalTicket-bookedTicket))
        print()
        
    if(option == 4):
        print(ticketList.keys())
        print()
        
    if(option == 3):
        if(bookedTicket == 0):
            print('nothing to cancel ')
            print()
        else:
            name = input('Enter the name ')
            if(name in ticketList):
                ticketList.pop(name)
                bookedTicket -= 1
                print('booking cancelled')
                print()
            else:
                print('Enter correct name')
                print()
        
    if(option == 2):
        if(bookedTicket < totalTicket):
            name = input('enter Name ')
            contactNo = input('enter Contact No ')
            address = input('enter contact address ')
            personBooking = Person(name,contactNo,address)
            if(not(personBooking.name in ticketList)):
                ticketList[personBooking.name] = personBooking
                bookedTicket += 1 
            else:
                print('person name already booked')
                print()
            
        else:
            print('booking closed')
            print()
    
    if(option == 5):
        name = input('enter the name ')
        if(name in ticketList):
            person = ticketList.get(name)
            print(person)
            print()
        else:
            print('Enter correct name')
            print()
    
    
    
    
    