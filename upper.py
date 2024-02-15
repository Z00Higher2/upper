#this program take the user input for the side leghts and prints out the bottom half of the square

side_length = int(input("Enter the side length: "))

for row in range(side_length, 0, -1):
    for column in range(0, side_length - row, 1):
        print(" ", end = " ")
    for column in range(0 , row, 1):
        print("*", end = " ")

    print()
   