#!/bin/python3

import math
import os
import random
import re
import sys


def canFit(crossword, word, r, c):
    size = 0
    for i in range(len(word)):
        print(r + i)
        if r + i > 9 or (crossword[r + i][c] != '-' and crossword[r + i][c] != word[i]):
            break
        size += 1
    return size >= len(word)


def tryVert(crossword, word, r, c):
    if not canFit(crossword, word, r, c):
        return False
    for i in range(len(word)):
        if r + i < 10 and (crossword[r + i][c] == '-' or crossword[r + i][c] == word[i]):
            crossword[r + i] = crossword[r + i][:c] + word[i] + crossword[r + i][c + 1:]
        else:
            return False
    return True


def tryHor(crossword, word, r, c):
    for i in range(len(word)):
        if c + i > 9 or (crossword[r][c + i] != '-' and crossword[r][c + i] != word[i]):
            return False
    crossword[r] = crossword[r][:c] + word + crossword[r][c + len(word):]
    return True


def tryWord(crossword, word, r, c):
    return tryHor(crossword, word, r, c) or tryVert(crossword, word, r, c)


solution = []


def solve(crossword, words, curr):
    global solution
    if curr >= len(words):
        solution = crossword.copy()
        return True

    for i in range(10):
        for j in range(10):
            original = crossword.copy()
            if (tryVert(crossword, words[curr], i, j)):
                if (solve(crossword, words, curr + 1)):
                    return True
                crossword = original
            original = crossword.copy()
            if (tryHor(crossword, words[curr], i, j)):
                if (solve(crossword, words, curr + 1)):
                    return True
                crossword = original


# Complete the crosswordPuzzle function below.
def crosswordPuzzle(crossword, words):
    solve(crossword, words.split(";"), 0)
    return solution


if __name__ == '__main__':

    crossword = []

    for _ in range(10):
        crossword_item = input()
        crossword.append(crossword_item)

    words = input()

    result = crosswordPuzzle(crossword, words)

    print('\n'.join(result))
