#Create Phone Number

def create_phone_number(num):
    return "({}) {}-{}".format(''.join(map(str, num[:3])), ''.join(map(str, num[3:6])), ''.join(map(str, num[6:])))