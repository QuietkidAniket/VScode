"""circle module
"""
 
Pi = 3.141592653589793438


def diameter(radius = 1):
    return radius*2
def perimeter(radius = 1):
    return 2 * Pi * radius
def area(radius = 1):
    return Pi * radius * radius
def lengthofchordatxfromdiameter(x=1,radius = 1):
    return ((radius**2)-(x**2))**0.5
def anglesubtendedbyarcoflengths_rad(s = 1.0, radius = 1):
    theta = s / radius
    return theta
def anglesubtendedbyarcoflengths_deg(s = 1.0, radius = 1):
    theta = anglesubtendedbyarcoglengths_rad(s,radius)
    thetaindeg = (theta*180)/Pi
    return thetaindeg
def areaofmajorsectormadebyarcoflengths(s = 1.0, radius = 1):
    return anglesubtendedbyarcoflengths_rad(s,radius)/Pi * area(radius)
def areaofminorsectormadebyarcoflengths(s = 1.0, radius = 1):
    return area(radius) - (anglesubtendedbyarcoflengths_rad(s,radius)/Pi * area(radius))

