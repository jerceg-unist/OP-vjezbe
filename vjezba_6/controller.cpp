#include <iostream>
#include <string>
#include "model.hpp"
#include "controller.hpp"
#include <algorithm>
using namespace std;

void HangmanController::userEntry(HangmanModel& model)
{
	char letter;
	cin >> letter;
	checkLetter(letter, model);
}

void HangmanController::checkLetter(char letter, HangmanModel& model)
{
	string movie = model.getMovie();
	string unusedLetters = model.getUnusedLetters();
	string guessMovie = model.getGuessMovie();
	int movieWordSize = movie.size();

	letter = toupper(letter);

	unusedLetters.erase(remove(unusedLetters.begin(), unusedLetters.end(), letter), unusedLetters.end());
	model.setUnusedLetters(unusedLetters);

	for (int i = 0; i < movieWordSize; i++)
	{
		if (guessMovie[i] == letter && unusedLetters.find(letter) == string::npos) { //ako je slovo vec pogodeno u filmu a nema ga u raspolozivim slovima
			model.setInGame(false);
			break;
		}
		else if (movie.find(letter) == string::npos) //ako slovo nije pronadeno u filmu
		{
			model.setInGame(false);
			break;
		}
		else if (model.getMovie()[i] == letter) { //ako slovo je pronadeno u filmu
			guessMovie[i] = letter;
			model.setInGame(true);
		}
	}
	model.setGuessMovie(guessMovie);
}

void HangmanController::updateLives(HangmanModel& model)
{
	if (model.getInGame() == 0)
	{
		model.setLives();
	}
}

bool HangmanController::checkIfGameIsOver(HangmanModel& model)
{
	if (model.getGuessMovie() == model.getMovie())
		return 0;
	else
		return model.getLives();
}
