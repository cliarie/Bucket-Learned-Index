# Bucket-Learned-Index

Dynamic learned index inspired from ALEX

## Components

**Gapped Array**
Dense Array takes O(N) time
_12345678_
B+ Tree Node takes O(N) time
_12345678**\_**_
Gapped Array takes constant time
_12*34_56_78*_

**Model Based Inserts**
Uses a linear model to determine where each key can go due to flexibility of gapped array

**Exponential Search**
Binary search always searches between the worst case error bounds. Exponential search scales with the size of the prediction error which is much lower due to model based insertion.

**Adaptive Tree Structure**

1. Splits nodes sideways (B+Tree characteristic)
2. Splits nodes downwards
3. Expands nodes
4. Merge nodes, contract nodes

**Concurrency**
