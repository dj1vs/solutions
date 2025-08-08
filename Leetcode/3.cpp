// Aug 08, 2025 23:12

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        size_t cur_begin = 0;
        int max_len = 0;
        unordered_set<char> met_chars;
        list<char> pos_to_char;
        for (size_t i = 0; i < s.size(); ++i)
        {
            while (met_chars.find(s[i]) != met_chars.end())
            {
                met_chars.erase(pos_to_char.front());
                pos_to_char.pop_front();
                ++cur_begin;
            }

            met_chars.insert(s[i]);
            pos_to_char.push_back(s[i]);
            max_len = max(max_len, static_cast<int>(i - cur_begin) + 1);
        }

        return max_len;
    }
};