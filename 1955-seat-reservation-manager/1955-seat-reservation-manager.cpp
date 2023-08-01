class SeatManager {
public:
    priority_queue<int,vector<int>,greater<int> > pq;
    vector<int> arr;
    SeatManager(int n) {
        arr.resize(100001);
        for(int i=1;i<=100000;i++) {
            pq.push(i);
            arr[i] = 0;
        }
    }
    
    int reserve() { 
        int res = pq.top();
        arr[res] = 1;
        pq.pop();
        return res;
    }
    
    void unreserve(int seatNumber) {
        arr[seatNumber] = 0;
        pq.push(seatNumber);
    }
};

/**
 * Your SeatManager object will be instantiated and called as such:
 * SeatManager* obj = new SeatManager(n);
 * int param_1 = obj->reserve();
 * obj->unreserve(seatNumber);
 */