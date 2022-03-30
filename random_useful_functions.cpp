vector<int> parseInts(string str) { // takes in a string that contains integers separated by commas and outputs the integers in a vector
	// Complete this function
    stringstream ss(str);
    vector<int>result;
    char c;
    int temp;
    while(ss>>temp){
        result.push_back(temp);
        ss >> c;        
    }
    return result;
}
