// game_theory_algorithms.h

#pragma once
#include <utility>
#include <vector>

// Simulate a round of the Prisoner's Dilemma given the players' moves
std::pair<int, int> prisonerDilemma(bool playerOneCooperates, bool playerTwoCooperates);

// Simulate a sequence of games given the players' moves
std::vector<std::pair<int, int>> simulateGame(std::vector<bool> playerOneMoves, std::vector<bool> playerTwoMoves);
