class UndergroundSystem {
public:
    struct travelRecord{
        string start;
        int time;
    }travel[1000001];
    map<pair<string, string>, pair<double, double>> m;
    UndergroundSystem() {
        
    }
    
    void checkIn(int id, string stationName, int t) {
        travel[id].start = stationName; 
        travel[id].time = t;
    }
    
    void checkOut(int id, string stationName, int t) {
        if(m.find(pair(travel[id].start, stationName)) == m.end()){
            // not found
            pair<string, string> key = make_pair(travel[id].start, stationName);
            pair<int, int> val = make_pair(1, t - travel[id].time);
            m.insert({key, val});
        }else{
            // found
            m[{travel[id].start, stationName}].first++;
            m[{travel[id].start, stationName}].second += t - travel[id].time;
        }
    }
    
    double getAverageTime(string startStation, string endStation) {
        return m[{startStation, endStation}].second / m[{startStation, endStation}].first;
    }
};

/**
 * Your UndergroundSystem object will be instantiated and called as such:
 * UndergroundSystem* obj = new UndergroundSystem();
 * obj->checkIn(id,stationName,t);
 * obj->checkOut(id,stationName,t);
 * double param_3 = obj->getAverageTime(startStation,endStation);
 */