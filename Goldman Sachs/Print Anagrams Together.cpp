vector<vector<string>> Anagrams(vector<string>& string_list) {
        
        // [a1b1c2, [abcc, acbc, cabc]] = main_map
        
        map<map<char, int>, vector<string>> main_map;
        
        // Iterate through each string in array
        for(string str : string_list) {
            map<char, int> freq_map;
            vector<string> arr;
            
            // Store each strings frequency map in main_map
            
            for(int i=0; i<str.length(); i++) {
                freq_map[str[i]]++;
            }
            
            auto it = main_map.find(freq_map);
            if(it != main_map.end()) {
                it -> second.push_back(str);
            } else {
                arr.push_back(str);
                main_map.insert({freq_map, arr});
            }
        }
        
        // Append main_map into an array of strings
        
        vector<vector<string>> result;
 
        for(auto it = main_map.begin(); it != main_map.end(); it++) {
            result.push_back(it->second);
        }
     
        return result;
    }