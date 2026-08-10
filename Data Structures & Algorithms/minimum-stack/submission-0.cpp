class MinStack {
    vector<int> data;      
    vector<int> mins;      // mins[i] = smallest value in data[0..i]

public:
    void push(int val) {
        data.push_back(val);
        if (mins.empty()) mins.push_back(val);
        else mins.push_back(min(val, mins.back()));
    }

    void pop() {
        data.pop_back();
        mins.pop_back();   
    }

    int top() {
        return data.back();
    }

    int getMin() {
        return mins.back();
    }
};