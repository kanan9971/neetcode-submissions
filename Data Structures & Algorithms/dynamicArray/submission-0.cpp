class DynamicArray {
public:
    int* data ;
    int size; 
    int last_element;
    
    DynamicArray(int capacity) :size(capacity), last_element(0) {
        data = new int[size];

    }

    int get(int i) {   
        return data[i];

    }

    void set(int i, int n) {
        data[i] = n;
    }

    void pushback(int n) {
        if(last_element == size){
            resize();
        }
        data[last_element] = n;
        last_element++;

    }

    int popback() {
        if(last_element > 0){
            last_element--;
        }

        return data[last_element];
    }

    void resize() {
        int new_capacity = size*2;
        int* bigger = new int[new_capacity];
        for(int i =0; i <size; i++){
            bigger[i] = data[i];
        }
        delete [] data;
        data = bigger;
        size = new_capacity;
    }

    int getSize() {
        return last_element; 
    }

    int getCapacity() {
        return size;
    }
};
