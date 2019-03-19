#! -*- coding=utf-8 -*-
from scipy import stats
import numpy as np

def simple_example():
    np.random.seed(12345678)

    n1 = 200
    n2 = 300

    '''
    rvs2, rvs3, rvs4 与 rvs1 的分布是逐渐变小的，表现在 pvalue 上是逐渐变小
    '''
    rvs1 = stats.norm.rvs(size=n1, loc=0., scale=1)
    rvs2 = stats.norm.rvs(size=n2, loc=0.5, scale=1.5)
    rvs3 = stats.norm.rvs(size=n2, loc=0.01, scale=1.0)
    rvs4 = stats.norm.rvs(size=n2, loc=0.0, scale=1.0)

    print stats.ks_2samp(rvs1, rvs2)
    print stats.ks_2samp(rvs1, rvs3)
    print stats.ks_2samp(rvs1, rvs4)

if __name__ == "__main__":
    simple_example()
