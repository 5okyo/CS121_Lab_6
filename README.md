make a stringstream named ss 
make variables for the data intA intB text
make temp strings for ints sIntA and sIntB
make a line for the current line currentLine
in the ifstream object open data.csv
    clear stringstream
    put currentLine in streamstream
    
    read to the first comma and put result in sIntA
    read to the next comma and put result in sIntB
    read rest of the line and put it in text

    clear stringstream
    put sIntA and sIntB into stringstream separated by space
    output the stringstream to intA and intB, which converts the data automatically


add intA and intB, put result into sum
repeat sum times:
    print text
