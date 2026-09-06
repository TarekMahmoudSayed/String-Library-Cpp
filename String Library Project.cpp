#include <iostream>

#include "clsString.h"

using namespace std;

void PrintLine()
{
    cout << "\n----------------------------------------\n";
}

int main()
{
    // ========================================
    // 1. Create String Object
    // ========================================

    clsString Text("hello world from c++");

    cout << "Original String: " << Text.getValue() << endl;

    PrintLine();

    // ========================================
    // 2. Print First Letters
    // ========================================

    cout << "First Letters:\n";
    Text.printFirstLettersOfString();

    PrintLine();

    // ========================================
    // 3. Upper First Letter Of Each Word
    // ========================================

    Text = "hello world from c++";

    cout << "Upper First Letter Of Each Word:\n";
    cout << Text.UpperFirstLetterOfEachWord() << endl;

    PrintLine();

    // ========================================
    // 4. Lower First Letter Of Each Word
    // ========================================

    Text = "Hello World From C++";

    cout << "Lower First Letter Of Each Word:\n";
    cout << Text.LowerFirstLetterOfEachWord() << endl;

    PrintLine();

    // ========================================
    // 5. Upper All String
    // ========================================

    Text = "hello world from c++";

    cout << "Upper All String:\n";
    cout << Text.UpperAllString() << endl;

    PrintLine();

    // ========================================
    // 6. Lower All String
    // ========================================

    Text = "HELLO WORLD FROM C++";

    cout << "Lower All String:\n";
    cout << Text.LowerAllString() << endl;

    PrintLine();

    // ========================================
    // 7. Invert All Letters Case
    // ========================================

    Text = "HeLLo WoRLD";

    cout << "Inverted Case:\n";
    cout << Text.InvertingAllLettersCase() << endl;

    PrintLine();

    // ========================================
    // 8. Count Capital Letters
    // ========================================

    Text = "Hello WORLD From C++";

    cout << "Capital Letters Count: "
        << Text.CountCapitalLetters() << endl;

    PrintLine();

    // ========================================
    // 9. Count Small Letters
    // ========================================

    cout << "Small Letters Count: "
        << Text.CountSmallLetters() << endl;

    PrintLine();

    // ========================================
    // 10. Count Specific Letter
    // ========================================

    Text = "Hello World Hello";

    cout << "Count 'H' (Match Case): "
        << Text.CountLetterInString('H') << endl;

    cout << "Count 'h' (Ignore Case): "
        << Text.CountLetterInString('h', false) << endl;

    PrintLine();

    // ========================================
    // 11. Count Vowels
    // ========================================

    cout << "Vowels Count: "
        << Text.CountVowel() << endl;

    PrintLine();

    // ========================================
    // 12. Print Vowels
    // ========================================

    cout << "Vowels In String: ";
    Text.PrintVowelsInString();
    cout << endl;

    PrintLine();

    // ========================================
    // 13. Print Each Word
    // ========================================

    Text = "C++ is powerful and interesting";

    cout << "Each Word:\n";
    Text.PrintEachWordInString();

    PrintLine();

    // ========================================
    // 14. Split String
    // ========================================

    vector<string> Words = Text.SplitString();

    cout << "Split String:\n";

    for (const string& Word : Words)
    {
        cout << "[" << Word << "]" << endl;
    }

    PrintLine();

    // ========================================
    // 15. Trim Left
    // ========================================

    Text = "     Hello World";

    cout << "Before Trim Left: [" << Text.getValue() << "]" << endl;

    cout << "After Trim Left:  ["
        << Text.TrimLeft()
        << "]" << endl;

    PrintLine();

    // ========================================
    // 16. Trim Right
    // ========================================

    Text = "Hello World     ";

    cout << "Before Trim Right: [" << Text.getValue() << "]" << endl;

    cout << "After Trim Right:  ["
        << Text.TrimRight()
        << "]" << endl;

    PrintLine();

    // ========================================
    // 17. Trim
    // ========================================

    Text = "     Hello World     ";

    cout << "Before Trim: [" << Text.getValue() << "]" << endl;

    cout << "After Trim:  ["
        << Text.Trim()
        << "]" << endl;

    PrintLine();

    // ========================================
    // 18. Join Strings - Vector
    // ========================================

    vector<string> Names =
    {
        "Tarek",
        "Ahmed",
        "Mohamed",
        "Omar"
    };

    cout << "Join Vector:\n";
    cout << Text.JoinStrings(Names, " - ") << endl;

    PrintLine();

    // ========================================
    // 19. Join Strings - Array
    // ========================================

    string NamesArray[] =
    {
        "C++",
        "Java",
        "C#",
        "Python"
    };

    cout << "Join Array:\n";
    cout << Text.JoinStrings(NamesArray, 4, " | ") << endl;

    PrintLine();

    // ========================================
    // 20. Reverse Words
    // ========================================

    Text = "I Love Programming";

    cout << "Original: "
        << Text.getValue() << endl;

    cout << "Reversed Words: "
        << Text.ReverseWordsinString() << endl;

    PrintLine();

    // ========================================
    // 21. Replace Using Built-in Function
    // ========================================

    Text = "I Love C++. I Love C++ Very Much.";

    cout << "Before Replace:\n"
        << Text.getValue() << endl;

    cout << "After Replace:\n"
        << Text.ReplaceWordInStringUsingBuiltInFunction(
            "C++",
            "Programming")
        << endl;

    PrintLine();

    // ========================================
    // 22. Replace Word - Match Case
    // ========================================

    Text = "Hello World Hello C++";

    cout << "Match Case:\n";

    cout << Text.ReplaceWordInString(
        "Hello",
        "Hi",
        true
    ) << endl;

    PrintLine();

    // ========================================
    // 23. Replace Word - Ignore Case
    // ========================================

    Text = "Hello hello HELLO World";

    cout << "Ignore Case:\n";

    cout << Text.ReplaceWordInString(
        "hello",
        "Hi",
        false
    ) << endl;

    PrintLine();

    // ========================================
    // 24. Operator = 
    // ========================================

    Text = "Assigned Using Operator =";

    cout << "Operator = Test:\n";
    cout << Text.getValue() << endl;

    PrintLine();

    // ========================================
    // 25. Conversion Operator
    // ========================================

    string ConvertedString = Text;

    cout << "Conversion Operator Test:\n";
    cout << ConvertedString << endl;

    PrintLine();

    cout << "All Tests Completed Successfully!" << endl;

    return 0;
}
