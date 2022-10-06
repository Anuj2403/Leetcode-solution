class TimeMap {
public:
    unordered_map<string, vector<pair<string, int>>> map; // key, {value, timestamp}
    
    string searchVal(vector<pair<string, int>> &vec, const int &timestamp) {
        int low = 0;
        int high = vec.size() - 1;
        
        while (low <= high) {
            int mid = low + (high - low) / 2;
            
            if (vec[mid].second > timestamp) {
                high = mid - 1;
            } else if (vec[mid].second < timestamp) {
                low = mid + 1;
            } else {
                return vec[mid].first;
            }
        }
        
        return high >= 0 ? vec[high].first : "";
    }
    
public:
    TimeMap() {
        
    }
    
    void set(string key, string value, int timestamp) {
        map[key].push_back({value, timestamp});
    }
    
    string get(string key, int timestamp) {
        if (map.find(key) == map.end()) {    // If key is not present 
            return "";
        }
        return searchVal(map[key], timestamp);    // otherwise do Binary Search
    }
};




// Link -->https://www.youtube.com/watch?v=kZAZqn_J8Fo

/*

// Reference  -->https://leetcode.com/problems/time-based-key-value-store/discuss/226664/C%2B%2B-3-lines-hash-map-%2B-map


class TimeMap {
public:
    TimeMap() {
        
    }
    unordered_map<string, map<int, string>> m;    // store string -->{timestamp, value}
    
    void set(string key, string value, int timestamp){
        m[key].insert({ timestamp, value }); 
    }
    string get(string key, int timestamp){
        auto it = m[key].upper_bound(timestamp); // return the just closest value <= timestamp
        return it == m[key].begin() ? "" : prev(it)->second; 
        //if key is not present && value of key is greater than timstamp -->return " " otherwise return             its value 
    }
};


*/


/**
 * Your TimeMap object will be instantiated and called as such:
 * TimeMap* obj = new TimeMap();
 * obj->set(key,value,timestamp);
 * string param_2 = obj->get(key,timestamp);
 */