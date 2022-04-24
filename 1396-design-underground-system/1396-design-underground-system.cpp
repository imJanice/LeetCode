class UndergroundSystem {
public:
    map<int, pair<string, int>> r;
    map<pair<string, string>, pair<int, int>> m;
    
    UndergroundSystem() {}
    
    void checkIn(int id, string stationName, int t) {
        r[id].first = stationName; 
        r[id].second = t;
    }
    
    void checkOut(int id, string stationName, int t) {
        if(m.find(pair(r[id].first, stationName)) == m.end()){
            // not found
            pair<string, string> key = make_pair(r[id].first, stationName);
            pair<int, int> val = make_pair(1, t - r[id].second);
            m.insert({key, val});
        }else{
            // found
            m[{r[id].first, stationName}].first++;
            m[{r[id].first, stationName}].second += t - r[id].second;
        }
    }
    
    double getAverageTime(string startStation, string endStation) {
        return (double)m[{startStation, endStation}].second / (double)m[{startStation, endStation}].first;
    }
};

/**
 * Your UndergroundSystem object will be instantiated and called as such:
 * UndergroundSystem* obj = new UndergroundSystem();
 * obj->checkIn(id,stationName,t);
 * obj->checkOut(id,stationName,t);
 * double param_3 = obj->getAverageTime(startStation,endStation);
 */