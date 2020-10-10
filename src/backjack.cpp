/*
 * backjack.cpp
 *
 *  Created on: 10-Oct-2020
 *      Author: kuldeep
 */

//
//#include <iostream>
//#include <array>
//#include <algorithm>
//#include <random>
//
//
//enum class CardSuit {
//	SUIT_CLUB,
//	SUIT_DIAMOND,
//	SUIT_HEART,
//	SUIT_SPADE,
//	MAX_SUITS
//};
//
//enum class CardRank {
//	RANK_2,
//	RANK_3,
//	RANK_4,
//	RANK_5,
//	RANK_6,
//	RANK_7,
//	RANK_8,
//	RANK_9,
//	RANK_10,
//	RANK_JACK,
//	RANK_QUEEN,
//	RANK_KING,
//	RANK_ACE,
//	MAX_RANK
//};
//
//struct Card {
//	CardRank rank{};
//	CardSuit suit{};
//};
//
//struct Player {
//	int score {};
//};
//
//void printCard(const Card& card) {
//	switch (card.rank) {
//		case CardRank::RANK_2: std::cout << '2'; break;
//		case CardRank::RANK_3: std::cout << '3'; break;
//		case CardRank::RANK_4: std::cout << '4'; break;
//		case CardRank::RANK_5: std::cout << '5'; break;
//		case CardRank::RANK_6: std::cout << '6'; break;
//		case CardRank::RANK_7: std::cout << '7'; break;
//		case CardRank::RANK_8: std::cout << '8'; break;
//		case CardRank::RANK_9: std::cout << '9'; break;
//		case CardRank::RANK_10: std::cout << 'T'; break;
//		case CardRank::RANK_JACK: std::cout << 'J'; break;
//		case CardRank::RANK_QUEEN: std::cout << 'Q'; break;
//		case CardRank::RANK_KING: std::cout << 'K'; break;
//		case CardRank::RANK_ACE: std::cout << 'A'; break;
//		default: std::cout << '?';
//	}
//	switch (card.suit) {
//		case CardSuit::SUIT_CLUB: std::cout << 'C'; break;
//		case CardSuit::SUIT_DIAMOND: std::cout << 'D'; break;
//		case CardSuit::SUIT_HEART: std::cout << 'H'; break;
//		case CardSuit::SUIT_SPADE: std::cout << 'S'; break;
//		default: std::cout << '?';
//	}
//}
//
//std::array<Card, 52> createDeck() {
//	std::array<Card, 52> deck{};
//	std::array<Card, 52>::size_type card {0};
//
//	auto suits {static_cast<int>(CardSuit::MAX_SUITS)};
//	auto ranks {static_cast<int>(CardRank::MAX_RANK)};
//
//	for (int suit {0}; suit < suits; ++suit) {
//		for (int rank {0}; rank < ranks; ++rank) {
//			deck[card].suit = static_cast<CardSuit>(suit);
//			deck[card].rank = static_cast<CardRank>(rank);
//			++card;
//		}
//	}
//	return deck;
//}
//
//void printDeck(const std::array<Card, 52>& deck) {
//	for (const Card& card: deck) {
//		printCard(card);
//		std::cout << " ";
//	}
//	std::cout << std::endl;
//}
//
//void shuffleDeck(std::array<Card, 52>& deck) {
//	static std::mt19937 mt { static_cast<std::mt19937::result_type>(std::time(nullptr)) };
//	std::shuffle(deck.begin(), deck.end(), mt);
//}
//
//int getCardValue(const Card& card) {
//	if (card.rank <= CardRank::RANK_10) {
//		return static_cast<int>(card.rank) + 2;
//	}
//	switch(card.rank) {
//		case CardRank::RANK_JACK:
//		case CardRank::RANK_QUEEN:
//		case CardRank::RANK_KING: return 10;
//		case CardRank::RANK_ACE: return 11;
//		default: return 0;
//	}
//}
//
//// Constants
//constexpr int maxScore { 21 };
//constexpr int minDealerScore { 17 };
//
//// Get Player Input
//bool playerWantsHit() {
//	while (true) {
//		std::cout << "Press (h) to hit or (s) to stand : ";
//		char ch{};
//		std::cin >> ch;
//		switch(ch) {
//			case 'H':
//			case 'h': return true;
//			case 'S':
//			case 's': return false;
//		}
//	}
//}
//
//// Returns true if player went bust
//bool playerTurn(
//		const std::array<Card, 52>& deck,
//		std::array<Card, 52>::size_type& nextCardIndex,
//		Player& player) {
//	while (true) {
//		std::cout << "You have " << player.score << ".\n";
//
//		if (player.score > maxScore) {
//			std::cout << "You have " << player.score << ".\n";
//			return true;
//		} else if (player.score == maxScore) {
//			return false;
//		} else {
//			if (playerWantsHit()) {
//				std::cout << "You got ";
//				printCard(deck[nextCardIndex]);
//				std::cout << std::endl;
//				player.score += getCardValue(deck[nextCardIndex++]);
//			} else {
//				std::cout << "You have " << player.score << " currently.\n";
//				return false;
//			}
//		}
//	}
//}
//
//// Returns true if dealer went bust
//bool dealerTurn(
//		const std::array<Card, 52>& deck,
//		std::array<Card, 52>::size_type nextCardIndex,
//		Player& dealer) {
//	while (dealer.score < minDealerScore) {
//		std::cout << "I got ";
//		printCard(deck[nextCardIndex]);
//		dealer.score += getCardValue(deck[nextCardIndex++]);
//		std::cout << " so I have " << dealer.score << ".\n";
//	}
//	return (dealer.score > maxScore);
//}
//
//// Returns true if player wins
//bool playBlackJack(std::array<Card, 52>& deck) {
//	std::array<Card, 52>::size_type nextCardIndex { 0 };
//
//	std::cout << "The dealer is showing : ";
//	printCard(deck[nextCardIndex]);
//	std::cout << std::endl;
//
//	Player dealer { getCardValue(deck[nextCardIndex++]) };
//
//	std::cout << "You got ";
//	printCard(deck[nextCardIndex]);
//	std::cout << " and ";
//	printCard(deck[nextCardIndex + 1]);
//	std::cout << std::endl;
//
//	Player player { getCardValue(deck[nextCardIndex]) + getCardValue(deck[nextCardIndex + 1])};
//	nextCardIndex += 2;
//
//	if (playerTurn(deck, nextCardIndex, player)) {
//		return false;
//	}
//	if (player.score == maxScore) {
//		return true;
//	}
//	if (dealerTurn(deck, nextCardIndex, dealer)) {
//		return true;
//	}
//	return (player.score > dealer.score);
//
//}
//
//
//int main() {
//
//	auto deck { createDeck() };
//	printDeck(deck);
//	std::cout << "Shuffling the deck.\n";
//	shuffleDeck(deck);
//	printDeck(deck);
//
//	if (playBlackJack(deck)) {
//		std::cout << "You won!!";
//	} else {
//		std::cout << "You lost!!";
//	}
//
//	return 0;
//
//}


