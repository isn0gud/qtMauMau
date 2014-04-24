#ifndef DECK_H_
#define DECK_H_

#include <QVector>
#include <algorithm>
#include <ctime>
#include "card.h"

class Deck {
private:
    QVector<Card> cards;

public:
    Deck(bool full_deck = false);
    void shuffle();
    void pushCard(const Card card);
    const Card getLast(Deck& deck);
    const Card back() const;
    //int size() const;
    bool empty() const;
    const Card getCard(int index) const;
    void addCards(QVector<Card>& newCards);
    QVector<Card>& getUnderlyingCards();
};

#endif /* DECK_H_ */
