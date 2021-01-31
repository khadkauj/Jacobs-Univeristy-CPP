File queue.h
1
2
3
4
5
6
7
8
9
10
11
12
13
14
15
16
17
18
19
20
21
22
23
24
25
26
27
28
29
30
31
32
33
34
35
36
37
38
39
40
41
42
43
44
45
46
47
48
49
50
51
52
53
54
55
56
57
58
59
60
61
62
63
64
65
66
67
68
69
70
71
72
73
74
75
76
77
78
79
80
81
82
83
84
85
86
87
88
89
90
91
92
93
94
95
96
97
98
99
100
101
102
103
104
105
106
107
108
109
110
111
112
113
114
115
116
117
118
119
120
121
/*
CH-230-A
a8 p1.c
ujjwal khadka
u.khadka@jacobs-university.de
*/
/**
 * @file queue.h
 */
 
#ifndef _QUEUE_H_
#define _QUEUE_H_
 
typedef int Item;
 
#define MAXQUEUE 10
 
typedef struct node
{
    Item item;
    struct node *next;
} Node;
 
typedef struct queue
{
    Node *front;
    Node *rear;
    int items;
} Queue;
 
 
/**
 * @brief Initializes a queue
 *
 * Initializes a newly allocated queue. It does not cleanup an already
 * used queue. Use empty_queue() for cleaning up an already used queue.
 *
 * @param pq The pointer to the queue structure.
 */
 
void initialize_queue(Queue *pq);
 
/**
 * @brief Tests whether the queue is full.
 *
 * Tests whether the queue is full, i.e., the number of elements in
 * the queue has reached MAXQUEUE.
 *
 * @param pq The pointer to the queue structure.
 *
 * @return 1 if the queue is full, 0 otherwise
 */
 
int queue_is_full(const Queue *pq);
 
/**
 * @brief Tests whether the queue is empty.
 *
 * Tests whether the queue is full, i.e., the number of elements in
 * the queue has reached 0. A newly initialized queue is empty.
 *
 * @param pq The pointer to the queue structure.
 *
 * @return 1 if the queue is empty, 0 otherwise.
 */
 
int queue_is_empty(const Queue *pq);
 
/**
 * @brief Returns the number of items in the queue.
 *
 * Returns the number of items currently in the queue.
 *
 * @param pq The pointer to the queue structure.
 *
 * @return The returned value will be between 0 and MAXQUEUE.
 */
 
int queue_item_count(const Queue *pq);
 
/**
 * @brief Add a new item to the queue.
 *
 * Add a new item to the queue.
 *
 * @param item The item to add to the queue.
 * @param pq The pointer to the queue structure.
 *
 * @return Returns the value 0 if successful and the value -1 in case
 * an error occurred (e.g., the queue is full or memory allocation
 * failed).
 */
 
int enqueue(Item item, Queue *pq);
 
/**
 * @brief Remove an item from the queue.
 *
 * Remove an item from the queue.
 *
 * @param pitem The pointer to memory where the item can be returned.
 * @param pq The pointer to the queue structure.
 *
 * @return Returns the value 0 if successful and the value -1 in case
 * an error occurred (e.g., the queue is empty).
 */
 
int dequeue(Item *pitem, Queue *pq);
 
/**
 * @brief Empty the queue.
 *
 * Empty the queue by removing all stored items. This leaves the queue
 * in its initialized state so that the queue can be reused.
 *
 * @param pq The pointer to the queue structure.
 */
 
void empty_queue(Queue *pq);
 
#endif
Close window