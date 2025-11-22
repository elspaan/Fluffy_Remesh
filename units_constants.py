class ConversionFactors:
    # anything bigger than SI has a negative power, anything smaller has a positive power
    # physical constants 
    boltz = 1.
    planck = 1.
  
    # ------------ SI units to specified unit ---------------
    # length scales
    ang = 1e10
    nm = 1e9
    micron = 1e6
    mm = 1e3
    cm = 1e2
    m = 1.
    km = 1e-3
    
    AU = 1.47e-15 
    lyr = 1.057004e-16
    pc = 3.0857e-16 

    # mass
    gram = 1e3
    kg = 1.

    # energy
    erg = 1e7
    J = 1.
    mJ = 1e3

    # force and pressure
    dyne = 1e5
    barye = 1e1 # so 10 Pa

    # time
    minute = 1/60
    hour = 1/(minute*60)
    day = 1/(hour*24)
    year = 1/(day*365.25)


    

def method():
    print("ConversionFactors")