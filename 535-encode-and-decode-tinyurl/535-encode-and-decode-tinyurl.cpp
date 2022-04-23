class Solution {
public:
    map<int, string> save;
    int idx = 0;
    // Encodes a URL to a shortened URL.
    string encode(string longUrl) {
        save[idx] = longUrl;
        idx++;
        return "http://tinyurl.com/"+to_string(idx-1);
    }

    // Decodes a shortened URL to its original URL.
    string decode(string shortUrl) {
        int pos = shortUrl.find("m/");
        string key = shortUrl.substr(pos+2);
        return save[stoi(key)];
    }
};

// Your Solution object will be instantiated and called as such:
// Solution solution;
// solution.decode(solution.encode(url));