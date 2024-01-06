class Solution(object):
    def uniqueMorseRepresentations(self, words):
        """
        :type words: List[str]
        :rtype: int
        """
        d = {'a':".-", 'b':"-...", 'c':"-.-.", 'd':"-..", 'e':".", 'f':"..-.", 'g':"--.", 'h':"....", 'i':"..", 'j':".---", 'k':"-.-", 'l':".-..", 'm':"--", 'n':"-.", 'o':"---", 'p':".--.", 'q':"--.-", 'r':".-.", 's':"...", 't':"-", 'u':"..-", 'v':"...-", 'w':".--", 'x':"-..-", 'y':"-.--", 'z':"--.."}

        words_in_morse = []
        for i in range(len(words)):
            m = ''
            for j in range(len(words[i])):
                m += d[words[i][j]]
            words_in_morse.append(m)
        
        transformations = {}
        for i in words_in_morse:
            if transformations.get(i) is not None:
                transformations[i] += 1
            else:
                transformations[i] = 1
        
        return len(transformations)

        

        