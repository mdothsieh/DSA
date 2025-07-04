class Solution {
public:
    int romanToInt(string s) {
        const std::unordered_map<char,int> romanVal{
            {'I',1}, {'V',5}, {'X',10}, {'L',50}, {'C',100}, {'D',500}, {'M', 1000}
        };

        int total = 0;
        int length = s.size();

        for (int i = 0; i<length;i++){
            int current = romanVal.at(s[i]);
            int next;
            if(i+1<length){
                next = romanVal.at(s[i+1]);
            } else{
                next = 0;
            }

            if(current<next)
                total -= current;
            else 
                total +=current;
            
        }

        return total;
        
    }
};