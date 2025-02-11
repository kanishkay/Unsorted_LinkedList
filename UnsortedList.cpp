
#include <UnsortedList.h>



template<class T>
UnsortedList<T>::UnsortedList() {
    length = 0;
    head = nullptr;


}


template<class T>
void UnsortedList<T>::MakeEmpty() {

}

template<class T>
bool UnsortedList<T>::IsFull() const {

}

template<class T>
int UnsortedList<T>::GetLength() const {
    return length;

}

template<class T>
bool UnsortedList<T>::Contains(T someItem) {
    Node *currN = head;
    while (currN != nullptr) {
        if (currN->data == someItem) {
            return true;
        }
        currN = currN->next;    // Moves us to the next item
    }
    return false;
}

template<class T>
void UnsortedList<T>::AddItem(T item) {
    Node *insertedNode = new Node;
    // Whenever you create a node
    // Immediately initialize it
    insertedNode->data = item;
    insertedNode->next = head;

    // bookkeeping
    head = insertedNode;
    length++;
}

template<class T>
void UnsortedList<T>::DeleteItem(int item) {

}

template<class T>
void UnsortedList<T>::ResetIterator() {

}

template<class T>
int UnsortedList<T>::GetNextItem() {
}
