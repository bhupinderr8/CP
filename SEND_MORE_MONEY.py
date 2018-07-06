import itertools

def money(list):
    return list[4]*1e4 + list[5]*1e3 + list[2]*1e2 + list[1]*1e1 + list[7]

def isTrue(list):
    if (list[0] + list[4] - list[5])*1e3 + (list[1] + list[5] - list[2])*1e2 + (list[2] + list[6] - list[1])*1e1 + (list[1] + list[3] - list[7]) == list[4]*1e4:
        return True
    return False

num_list = [0,1,2,3,4,5,6,7,8,9]
for list in itertools.permutations(num_list, 8):
    if list[0]==0 or list[4]==0:
        continue
    if(isTrue(list)):
        print(money(list))
        break
    else:
        # print("No")
        print(list)
