'''
太多了，用的代码都写上了，注释有点难找，看不到关键算法，算了
'''

import numpy as np   
import matplotlib.pyplot as plt   
import random   
P=np.zeros((125,3000))   

#判断是否合法
# 纯粹的遍历
def islawable(P):   
    for i in range(3000):   
        if(np.sum(P[:,i])!=5):   
            return False   
    for i in range(125):   
        if(np.sum(P[i]!=120)):   
            return False   
    return True

#选取120个对象
def select_120(dict,s):   
    selectable=[]   
    max_v=np.max(np.array(list(dict.values()))[:,0])   
    for i in range(3000):   
        if(dict[i][0]==max_v and dict[i][1]!=s):   
            if(i not in selectable):   
                selectable.append(i)   
    if(len(selectable)>=120):   
        return random.sample(set(selectable),120)   
    else:   
        for i in range(3000):   
            if(dict[i][0]==max_v-1 and dict[i][1]!=s ):   
                if(i not in selectable):   
                    selectable.append(i)
            if(len(selectable)>=120):   
                return random.sample(set(selectable),120)
            