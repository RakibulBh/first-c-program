#include <stdio.h>

int main()
{
      int c;
    bool is_comment = false;
    int slash_count = 0;
    char comments[100]; // Increased size to accommodate comments
    int comment_num = 0;
    int curr_comment_index = 0; // Changed to index for current comment

    while ((c = getchar()) != EOF)
    {
        if (c == '/')
        {
            slash_count++;
            if (slash_count == 2 && !is_comment)
            {
                is_comment = true;
                slash_count = 0;
                comments[comment_num++] = c; // Store the first '/'
            }
            else if (slash_count > 2 && is_comment)
            {
                comments[comment_num++] = c; // Store additional '/' characters in comment
            }
            else
            {
                // Not a comment, print the '/'
                putchar(c);
                slash_count = 0;
            }
        }
        else if (is_comment && c == '\n')
        {
            // End of comment
            is_comment = false;
            comments[comment_num++] = c; // Store newline character in comment
        }
        else if (is_comment)
        {
            // Inside a comment, store characters
            comments[comment_num++] = c;
        }
        else
        {
            // Not a comment, print the character
            // putchar(c);
        }
    }

    // Print out all the stored comments after the code
    for (int i = 0; i < comment_num; i++)
    {
        putchar(comments[i]);
    }

    return 0;
}
