# CSCI 389 Homework #7: Microoptimisation
## Created by: Maxx Curtis

(Please forgive my spelling of naive in the many times it comes up)

## Initial Test: (5.0094ms)
	Most casual tests are run at 1000 repetitions for convenience,
	but the numbers presented here are the result of 2000 repetitions 
	each.
	The unedited 'atoi' implementation ran in 5.0094ms

## Part 1: The Naive Implementation (0.5491ms)
	My initial implementation, which can be found in "naive_converter.c",
	is merely a re-creation of atoi's internal logic, slightly modified to
	handle our specific dataset.

	This code makes the assumption that 'line' will always be a string with
	at least two characters. The optimized implementation also assumes that
	'line' will be at least 3 characters. These assumptions would cause this
	code to fail under different circumstances, but they remove the
	necessity for an extra check, which saves time in this controlled case.

	This implementation ran in 0.5491ms, an approximately 10x improvement,
	which is likely the result of removing checks and safety measures that
	would be necessary in a standard library function, but are not needed
	for our specific purposes.

## Part 2: Optimized Implementation (0.4365ms) ~21% improvement
	My final implentation includes a number of small optimizations:
	- Replacing the while loop with a do-while, to reduce the number of
		necessary checks.
	- Bit-shifting instead of using regular multiplication.
	- Incrementing a pointer to the 'lines' and 'nums' arrays, instead of
		indexing each time.
	- Initializing 'val' with the first value of 'line' instead of 0, saving
		a loop, and effectively cutting down the cost of the while loop by ~1/5.
		(Depending on the size of the value being converted)
	- Initializing 'val' and 'line' outside of the for-loop, to avoid 
		reinitialization.

	Somewhere along the way, I began minimizing the size of the code, instead
	of its runtime, so while it looks very neat (unreadable), it hasn't reached
	the 30% improvement goal.

	In the end, my optimized code ran in about 0.4365ms; 21% faster than my naive 
	implementation.