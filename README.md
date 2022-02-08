# Search-Algorithms
This repository consists of different search algorithms that are used to search a particular element in a given list using c++ language, some of the search algorithms are as follows:
<br/>
* Sequential search or linear search
* Binary search

# **1. Sequential search:**
<br/>
As the name suggests the sequential search algorithm is used to search the element in a list of elements sequentially or linearly, in other words it compares each element of the list to the target element and if the search is successful it returns the index of the element found in the list, else returns that 'The element is not present in the list', this is how sequential search works.
<center><img src="https://www.programmingsimplified.com/images/c/linear-search.gif" align='center' alt="Sequential search" height=300 width=1000></center>
<br/>

# **2. Binary search:**
<br/>
Binary search is a different kind of search, the only prerequisite for this search is that first all of the elements in the list are arranged in ascending order, then we need to choose the mid element in the list. Now the search works the target element is compared with the mid value if the value is same then the index of the mid value is returned, else if the value of the mid element is lesser than the target element then the search is continued towards the left part of the mid in the list, and if the mid value is greater than the target element then the search is continued towards the right part of the mid in the list, and it happens recursively till the target element is found in the list.

<center><img src="https://stackabuse.s3.amazonaws.com/media/binary-search-in-java-1.gif" align='center' alt="Binary search" height=300 width=1000></center>
<br/>
