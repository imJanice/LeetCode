/*
 * Below is the interface for Iterator, which is already defined for you.
 * **DO NOT** modify the interface for Iterator.
 *
 *  class Iterator {
 *		struct Data;
 * 		Data* data;
 *  public:
 *		Iterator(const vector<int>& nums);
 * 		Iterator(const Iterator& iter);
 *
 * 		// Returns the next element in the iteration.
 *		int next();
 *
 *		// Returns true if the iteration has more elements.
 *		bool hasNext() const;
 *	};
 */

class PeekingIterator : public Iterator {
public:
	int peek_val = 0;
	PeekingIterator(const vector<int>& nums) : Iterator(nums) {	}
	
	int peek() {
        if (peek_val == 0) peek_val = Iterator::next();
        return peek_val;
	}
	
	int next() {
        int ret = (peek_val != 0) ? peek_val : Iterator::next();
        peek_val = 0;
        return ret;
    }

	bool hasNext() const {       
        return peek_val != 0 || Iterator::hasNext();	
    }
};