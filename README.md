# Templatized-Queue-DataStructure
In computer science, a queue is a collection of entities that are maintained in a sequence and can be modified by the addition of entities at one end of the sequence and removal from the other end of the sequence. Below is the templatized implementation of Queue Data Structure along with the Unit Tests.

## Data Items
The data items in a queue are of generic type DT.


# Operations
## Queue () 
Requirements:
None
Results:
Constructor. Creates an empty queue.

## ~Queue ()
Requirements: None
Results:
Destructor. Deallocates (frees) the memory used to store a queue.

## void enqueue ( DT &newDataItem )
Requirements:
Queue is not full.
Results:
Inserts newDataItem at the rear of a queue.

## DT dequeue () Requirements:
Queue is not empty. Results:
Removes the least recently added (front) data item from a queue and returns it.

## void clear ()
Requirements: None
Results:
Removes all the data items in a queue.

## bool isEmpty () const
Requirements:
None
Results:
Returns true if a queue is empty. Otherwise, returns false.

## Task 1:
Code a Templatized Queue

## Task 2:
In this Exercise, you have to take a single string as input. Using this input string, you have to create multiple
queues in which each queue will comprise of separate word appeared in input string. At the end, you will again
concatenate all queues to a single queue.
Example:

String = “Data Structure and
Algo”
Q1 = D → a → t → a
Q2 = S → t → r → u → c → t → u → r
→e
Q3 = a → n → d
Q4 = A → l → g → o
At the end concatenate all queues and display them.
Q1 → Q2 → Q3 → Q4
