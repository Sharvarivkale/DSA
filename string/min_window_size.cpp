vector<int> freq(128, 0);

        for (char ch : t) {
            freq[ch]++;
        }

        int left = 0;
        int start = 0;
        int minLen = INT_MAX;
        int required = t.length();

        for (int right = 0; right < s.length(); right++) {
            char ch = s[right];

            if (freq[ch] > 0) {
                required--;
            }
            freq[ch]--;

            while (required == 0) {
                int len = right - left + 1;

                if (len < minLen) {
                    minLen = len;
                    start = left;
                }

                char leftChar = s[left];
                freq[leftChar]++;

                if (freq[leftChar] > 0) {
                    required++;
                }

                left++;
            }
        }

        if (minLen == INT_MAX) {
            return "";
        }

        return s.substr(start, minLen);