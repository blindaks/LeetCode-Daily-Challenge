class Solution {
public:
    string solve(string word, vector<string>& dictionary)
    {
        for(int i=0; i<dictionary.size(); i++)
        {
            if(dictionary[i].length() <= word.length())
            {
                if(word.substr(0, dictionary[i].length()) == dictionary[i])
                {
                    word = dictionary[i];
                }
            }
        }
        return word;
    }
    string replaceWords(vector<string>& dictionary, string sentence) {
        string s = "";
        string word = "";
        for(int i=0; i<sentence.length(); i++)
        {
            if(sentence[i] == ' ')
            {
                s = s + solve(word, dictionary);
                s = s + " ";
                word = "";
            }
            else
            {
                word = word + sentence[i];
            }
        }
        if(word != "")
        s = s + solve(word, dictionary);
        return s;
    }
};
