#include <SFML/Graphics.hpp>
#include <iostream>
#include <cstdlib>
#include<ctime>
#include <unistd.h>

int randomNum(int min, int max);

int main()
{
    int computerTurn = 2;
    int itteration = 14;
    int playerHand = 0;
    int computerHand = 0;

    sf::RenderWindow window(sf::VideoMode(900, 600), "Blackjack");
    window.setPosition(sf::Vector2i(10, 50));

//*******************************************************************************************
    // load texture for Deck of cards. 
    sf::Texture deck;
    if(!deck.loadFromFile("Pixel_Playing_Card_Set_YEWBI.png"))
    {
        std::cout << "error" << std::endl;
    }

    // make sprites for all cards using the playing card png

    sf::Sprite Aspade(deck);
    sf::Sprite Adiamond(deck);
    sf::Sprite Aclub(deck);
    sf::Sprite Aheart(deck);
    sf::Sprite twoSpade(deck);
    sf::Sprite twoDiamond(deck);
    sf::Sprite twoClub(deck);
    sf::Sprite twoHeart(deck);
    sf::Sprite threeSpade(deck);
    sf::Sprite threeDiamond(deck);
    sf::Sprite threeClub(deck);
    sf::Sprite threeHeart(deck);
    sf::Sprite fourSpade(deck);
    sf::Sprite fourDiamond(deck);
    sf::Sprite fourClub(deck);
    sf::Sprite fourHeart(deck);
    sf::Sprite fiveSpade(deck);
    sf::Sprite fiveDiamond(deck);
    sf::Sprite fiveClub(deck);
    sf::Sprite fiveHeart(deck);
    sf::Sprite sixSpade(deck);
    sf::Sprite sixDiamond(deck);
    sf::Sprite sixClub(deck);
    sf::Sprite sixHeart(deck);
    sf::Sprite sevenSpade(deck);
    sf::Sprite sevenDiamond(deck);
    sf::Sprite sevenClub(deck);
    sf::Sprite sevenHeart(deck);
    sf::Sprite eightSpade(deck);
    sf::Sprite eightDiamond(deck);
    sf::Sprite eightClub(deck);
    sf::Sprite eightHeart(deck);
    sf::Sprite nineSpade(deck);
    sf::Sprite nineDiamond(deck);
    sf::Sprite nineClub(deck);
    sf::Sprite nineHeart(deck);
    sf::Sprite tenSpade(deck);
    sf::Sprite tenDiamond(deck);
    sf::Sprite tenClub(deck);
    sf::Sprite tenHeart(deck);
    sf::Sprite jSpade(deck);
    sf::Sprite jDiamond(deck);
    sf::Sprite jClub(deck);
    sf::Sprite jHeart(deck);
    sf::Sprite qSpade(deck);
    sf::Sprite qDiamond(deck);
    sf::Sprite qClub(deck);
    sf::Sprite qHeart(deck);
    sf::Sprite kSpade(deck);
    sf::Sprite kDiamond(deck);
    sf::Sprite kClub(deck);
    sf::Sprite kHeart(deck);
    sf::Sprite backOfCard(deck);
    sf::Sprite blankCard(deck);

    blankCard.setTextureRect(sf::IntRect(500,500,35,50));


    Aspade.setTextureRect(sf::IntRect(30, 30, 35, 50 ));
    Adiamond.setTextureRect(sf::IntRect(63, 30, 34, 50 ));
    Aclub.setTextureRect(sf::IntRect(94, 30, 34, 50 ));
    Aheart.setTextureRect(sf::IntRect(126, 30, 34, 50 ));

    twoSpade.setTextureRect(sf::IntRect(30, 79, 34, 50 ));
    twoDiamond.setTextureRect(sf::IntRect(63, 79, 34, 50 ));
    twoClub.setTextureRect(sf::IntRect(94, 79, 34, 50 ));
    twoHeart.setTextureRect(sf::IntRect(126, 79, 34, 50 ));

    threeSpade.setTextureRect(sf::IntRect(30, 127, 34, 50 ));
    threeDiamond.setTextureRect(sf::IntRect(63, 127, 34, 50 ));
    threeClub.setTextureRect(sf::IntRect(94, 127, 34, 50 ));
    threeHeart.setTextureRect(sf::IntRect(126, 127, 34, 50 ));

    fourSpade.setTextureRect(sf::IntRect(160, 31, 34, 50 ));
    fourDiamond.setTextureRect(sf::IntRect(190, 31, 34, 50 ));
    fourClub.setTextureRect(sf::IntRect(223, 31, 34, 50 ));
    fourHeart.setTextureRect(sf::IntRect(255, 31, 34, 50 ));

    fiveSpade.setTextureRect(sf::IntRect(159, 78, 34, 50 ));
    fiveDiamond.setTextureRect(sf::IntRect(190, 78, 34, 50 ));
    fiveClub.setTextureRect(sf::IntRect(223, 78, 34, 50 ));
    fiveHeart.setTextureRect(sf::IntRect(255, 78, 34, 50 ));

    sixSpade.setTextureRect(sf::IntRect(159, 127, 34, 50 ));
    sixDiamond.setTextureRect(sf::IntRect(190, 127, 34, 50 ));
    sixClub.setTextureRect(sf::IntRect(223, 127, 34, 50 ));
    sixHeart.setTextureRect(sf::IntRect(255, 127, 34, 50 ));

    sevenSpade.setTextureRect(sf::IntRect(287, 30, 34, 50 ));
    sevenDiamond.setTextureRect(sf::IntRect(319, 30, 34, 50 ));
    sevenClub.setTextureRect(sf::IntRect(351, 30, 34, 50 ));
    sevenHeart.setTextureRect(sf::IntRect(383, 30, 34, 50 ));

    eightSpade.setTextureRect(sf::IntRect(287, 78, 34, 50 ));
    eightDiamond.setTextureRect(sf::IntRect(319, 78, 34, 50 ));
    eightClub.setTextureRect(sf::IntRect(351, 78, 34, 50 ));
    eightHeart.setTextureRect(sf::IntRect(383, 78, 34, 50 ));

    nineSpade.setTextureRect(sf::IntRect(287, 127, 34, 50 ));
    nineDiamond.setTextureRect(sf::IntRect(319, 127, 34, 50 ));
    nineClub.setTextureRect(sf::IntRect(351, 127, 34, 50 ));
    nineHeart.setTextureRect(sf::IntRect(383, 127, 34, 50 ));

    tenSpade.setTextureRect(sf::IntRect(415, 30, 34, 50 ));
    tenDiamond.setTextureRect(sf::IntRect(446, 30, 34, 50 ));
    tenClub.setTextureRect(sf::IntRect(478, 30, 34, 50 ));
    tenHeart.setTextureRect(sf::IntRect(510, 30, 34, 50 ));

    jSpade.setTextureRect(sf::IntRect(415, 78, 34, 50 ));
    jDiamond.setTextureRect(sf::IntRect(446, 78, 34, 50 ));
    jClub.setTextureRect(sf::IntRect(478, 78, 34, 50 ));
    jHeart.setTextureRect(sf::IntRect(510, 78, 34, 50 ));

    qSpade.setTextureRect(sf::IntRect(415, 127, 34, 50 ));
    qDiamond.setTextureRect(sf::IntRect(446, 127, 34, 50 ));
    qClub.setTextureRect(sf::IntRect(478, 127, 34, 50 ));
    qHeart.setTextureRect(sf::IntRect(510, 127, 34, 50 ));

    kSpade.setTextureRect(sf::IntRect(543, 30, 34, 50 ));
    kDiamond.setTextureRect(sf::IntRect(574, 30, 34, 50 ));
    kClub.setTextureRect(sf::IntRect(606, 30, 34, 50 ));
    kHeart.setTextureRect(sf::IntRect(638, 30, 34, 50 ));

    backOfCard.setTextureRect(sf::IntRect(127, 223, 34, 50 ));

//*********************************************************************************

// array to keep all the cards for loading with random number generator.
//0-51 is all the cards starting from A all the way to K SDCH order and 52 is back of the card

sf::Sprite arr1[] = {Aspade, Adiamond, Aclub, Aheart, twoSpade, twoDiamond, twoClub, twoHeart, threeSpade, 
                    threeDiamond, threeClub, threeHeart, fourSpade, fourDiamond, fourClub, fourHeart,
                    fiveSpade, fiveDiamond, fiveClub, fiveHeart, sixSpade, sixDiamond, sixClub, sixHeart,
                    sevenSpade, sevenDiamond, sevenClub, sevenHeart, eightSpade, eightDiamond, eightClub,
                    eightHeart, nineSpade, nineDiamond, nineClub, nineHeart, tenSpade, tenDiamond, tenClub,
                    tenHeart, jSpade, jDiamond, jClub, jHeart, qSpade, qDiamond, qClub, qHeart, kSpade,
                    kDiamond, kClub, kHeart, backOfCard, blankCard};

sf::Sprite arr2[] = {Aspade, Adiamond, Aclub, Aheart, twoSpade, twoDiamond, twoClub, twoHeart, threeSpade, 
                    threeDiamond, threeClub, threeHeart, fourSpade, fourDiamond, fourClub, fourHeart,
                    fiveSpade, fiveDiamond, fiveClub, fiveHeart, sixSpade, sixDiamond, sixClub, sixHeart,
                    sevenSpade, sevenDiamond, sevenClub, sevenHeart, eightSpade, eightDiamond, eightClub,
                    eightHeart, nineSpade, nineDiamond, nineClub, nineHeart, tenSpade, tenDiamond, tenClub,
                    tenHeart, jSpade, jDiamond, jClub, jHeart, qSpade, qDiamond, qClub, qHeart, kSpade,
                    kDiamond, kClub, kHeart, backOfCard, blankCard};

sf::Sprite arr3[] = {Aspade, Adiamond, Aclub, Aheart, twoSpade, twoDiamond, twoClub, twoHeart, threeSpade, 
                    threeDiamond, threeClub, threeHeart, fourSpade, fourDiamond, fourClub, fourHeart,
                    fiveSpade, fiveDiamond, fiveClub, fiveHeart, sixSpade, sixDiamond, sixClub, sixHeart,
                    sevenSpade, sevenDiamond, sevenClub, sevenHeart, eightSpade, eightDiamond, eightClub,
                    eightHeart, nineSpade, nineDiamond, nineClub, nineHeart, tenSpade, tenDiamond, tenClub,
                    tenHeart, jSpade, jDiamond, jClub, jHeart, qSpade, qDiamond, qClub, qHeart, kSpade,
                    kDiamond, kClub, kHeart, backOfCard, blankCard};

sf::Sprite arr4[] = {Aspade, Adiamond, Aclub, Aheart, twoSpade, twoDiamond, twoClub, twoHeart, threeSpade, 
                    threeDiamond, threeClub, threeHeart, fourSpade, fourDiamond, fourClub, fourHeart,
                    fiveSpade, fiveDiamond, fiveClub, fiveHeart, sixSpade, sixDiamond, sixClub, sixHeart,
                    sevenSpade, sevenDiamond, sevenClub, sevenHeart, eightSpade, eightDiamond, eightClub,
                    eightHeart, nineSpade, nineDiamond, nineClub, nineHeart, tenSpade, tenDiamond, tenClub,
                    tenHeart, jSpade, jDiamond, jClub, jHeart, qSpade, qDiamond, qClub, qHeart, kSpade,
                    kDiamond, kClub, kHeart, backOfCard, blankCard};

sf::Sprite arr5[] = {Aspade, Adiamond, Aclub, Aheart, twoSpade, twoDiamond, twoClub, twoHeart, threeSpade, 
                    threeDiamond, threeClub, threeHeart, fourSpade, fourDiamond, fourClub, fourHeart,
                    fiveSpade, fiveDiamond, fiveClub, fiveHeart, sixSpade, sixDiamond, sixClub, sixHeart,
                    sevenSpade, sevenDiamond, sevenClub, sevenHeart, eightSpade, eightDiamond, eightClub,
                    eightHeart, nineSpade, nineDiamond, nineClub, nineHeart, tenSpade, tenDiamond, tenClub,
                    tenHeart, jSpade, jDiamond, jClub, jHeart, qSpade, qDiamond, qClub, qHeart, kSpade,
                    kDiamond, kClub, kHeart, backOfCard, blankCard};

sf::Sprite arr6[] = {Aspade, Adiamond, Aclub, Aheart, twoSpade, twoDiamond, twoClub, twoHeart, threeSpade, 
                    threeDiamond, threeClub, threeHeart, fourSpade, fourDiamond, fourClub, fourHeart,
                    fiveSpade, fiveDiamond, fiveClub, fiveHeart, sixSpade, sixDiamond, sixClub, sixHeart,
                    sevenSpade, sevenDiamond, sevenClub, sevenHeart, eightSpade, eightDiamond, eightClub,
                    eightHeart, nineSpade, nineDiamond, nineClub, nineHeart, tenSpade, tenDiamond, tenClub,
                    tenHeart, jSpade, jDiamond, jClub, jHeart, qSpade, qDiamond, qClub, qHeart, kSpade,
                    kDiamond, kClub, kHeart, backOfCard, blankCard};

sf::Sprite arr7[] = {Aspade, Adiamond, Aclub, Aheart, twoSpade, twoDiamond, twoClub, twoHeart, threeSpade, 
                    threeDiamond, threeClub, threeHeart, fourSpade, fourDiamond, fourClub, fourHeart,
                    fiveSpade, fiveDiamond, fiveClub, fiveHeart, sixSpade, sixDiamond, sixClub, sixHeart,
                    sevenSpade, sevenDiamond, sevenClub, sevenHeart, eightSpade, eightDiamond, eightClub,
                    eightHeart, nineSpade, nineDiamond, nineClub, nineHeart, tenSpade, tenDiamond, tenClub,
                    tenHeart, jSpade, jDiamond, jClub, jHeart, qSpade, qDiamond, qClub, qHeart, kSpade,
                    kDiamond, kClub, kHeart, backOfCard, blankCard};

sf::Sprite arr8[] = {Aspade, Adiamond, Aclub, Aheart, twoSpade, twoDiamond, twoClub, twoHeart, threeSpade, 
                    threeDiamond, threeClub, threeHeart, fourSpade, fourDiamond, fourClub, fourHeart,
                    fiveSpade, fiveDiamond, fiveClub, fiveHeart, sixSpade, sixDiamond, sixClub, sixHeart,
                    sevenSpade, sevenDiamond, sevenClub, sevenHeart, eightSpade, eightDiamond, eightClub,
                    eightHeart, nineSpade, nineDiamond, nineClub, nineHeart, tenSpade, tenDiamond, tenClub,
                    tenHeart, jSpade, jDiamond, jClub, jHeart, qSpade, qDiamond, qClub, qHeart, kSpade,
                    kDiamond, kClub, kHeart, backOfCard, blankCard};


sf::Sprite arr9[] = {Aspade, Adiamond, Aclub, Aheart, twoSpade, twoDiamond, twoClub, twoHeart, threeSpade, 
                    threeDiamond, threeClub, threeHeart, fourSpade, fourDiamond, fourClub, fourHeart,
                    fiveSpade, fiveDiamond, fiveClub, fiveHeart, sixSpade, sixDiamond, sixClub, sixHeart,
                    sevenSpade, sevenDiamond, sevenClub, sevenHeart, eightSpade, eightDiamond, eightClub,
                    eightHeart, nineSpade, nineDiamond, nineClub, nineHeart, tenSpade, tenDiamond, tenClub,
                    tenHeart, jSpade, jDiamond, jClub, jHeart, qSpade, qDiamond, qClub, qHeart, kSpade,
                    kDiamond, kClub, kHeart, backOfCard, blankCard};

sf::Sprite arr10[] = {Aspade, Adiamond, Aclub, Aheart, twoSpade, twoDiamond, twoClub, twoHeart, threeSpade, 
                    threeDiamond, threeClub, threeHeart, fourSpade, fourDiamond, fourClub, fourHeart,
                    fiveSpade, fiveDiamond, fiveClub, fiveHeart, sixSpade, sixDiamond, sixClub, sixHeart,
                    sevenSpade, sevenDiamond, sevenClub, sevenHeart, eightSpade, eightDiamond, eightClub,
                    eightHeart, nineSpade, nineDiamond, nineClub, nineHeart, tenSpade, tenDiamond, tenClub,
                    tenHeart, jSpade, jDiamond, jClub, jHeart, qSpade, qDiamond, qClub, qHeart, kSpade,
                    kDiamond, kClub, kHeart, backOfCard, blankCard};

sf::Sprite arr11[] = {Aspade, Adiamond, Aclub, Aheart, twoSpade, twoDiamond, twoClub, twoHeart, threeSpade, 
                    threeDiamond, threeClub, threeHeart, fourSpade, fourDiamond, fourClub, fourHeart,
                    fiveSpade, fiveDiamond, fiveClub, fiveHeart, sixSpade, sixDiamond, sixClub, sixHeart,
                    sevenSpade, sevenDiamond, sevenClub, sevenHeart, eightSpade, eightDiamond, eightClub,
                    eightHeart, nineSpade, nineDiamond, nineClub, nineHeart, tenSpade, tenDiamond, tenClub,
                    tenHeart, jSpade, jDiamond, jClub, jHeart, qSpade, qDiamond, qClub, qHeart, kSpade,
                    kDiamond, kClub, kHeart, backOfCard, blankCard};

sf::Sprite arr12[] = {Aspade, Adiamond, Aclub, Aheart, twoSpade, twoDiamond, twoClub, twoHeart, threeSpade, 
                    threeDiamond, threeClub, threeHeart, fourSpade, fourDiamond, fourClub, fourHeart,
                    fiveSpade, fiveDiamond, fiveClub, fiveHeart, sixSpade, sixDiamond, sixClub, sixHeart,
                    sevenSpade, sevenDiamond, sevenClub, sevenHeart, eightSpade, eightDiamond, eightClub,
                    eightHeart, nineSpade, nineDiamond, nineClub, nineHeart, tenSpade, tenDiamond, tenClub,
                    tenHeart, jSpade, jDiamond, jClub, jHeart, qSpade, qDiamond, qClub, qHeart, kSpade,
                    kDiamond, kClub, kHeart, backOfCard, blankCard};

sf::Sprite arr13[] = {Aspade, Adiamond, Aclub, Aheart, twoSpade, twoDiamond, twoClub, twoHeart, threeSpade, 
                    threeDiamond, threeClub, threeHeart, fourSpade, fourDiamond, fourClub, fourHeart,
                    fiveSpade, fiveDiamond, fiveClub, fiveHeart, sixSpade, sixDiamond, sixClub, sixHeart,
                    sevenSpade, sevenDiamond, sevenClub, sevenHeart, eightSpade, eightDiamond, eightClub,
                    eightHeart, nineSpade, nineDiamond, nineClub, nineHeart, tenSpade, tenDiamond, tenClub,
                    tenHeart, jSpade, jDiamond, jClub, jHeart, qSpade, qDiamond, qClub, qHeart, kSpade,
                    kDiamond, kClub, kHeart, backOfCard, blankCard};

sf::Sprite arr14[] = {Aspade, Adiamond, Aclub, Aheart, twoSpade, twoDiamond, twoClub, twoHeart, threeSpade, 
                    threeDiamond, threeClub, threeHeart, fourSpade, fourDiamond, fourClub, fourHeart,
                    fiveSpade, fiveDiamond, fiveClub, fiveHeart, sixSpade, sixDiamond, sixClub, sixHeart,
                    sevenSpade, sevenDiamond, sevenClub, sevenHeart, eightSpade, eightDiamond, eightClub,
                    eightHeart, nineSpade, nineDiamond, nineClub, nineHeart, tenSpade, tenDiamond, tenClub,
                    tenHeart, jSpade, jDiamond, jClub, jHeart, qSpade, qDiamond, qClub, qHeart, kSpade,
                    kDiamond, kClub, kHeart, backOfCard, blankCard};

sf::Sprite arr15[] = {Aspade, Adiamond, Aclub, Aheart, twoSpade, twoDiamond, twoClub, twoHeart, threeSpade, 
                    threeDiamond, threeClub, threeHeart, fourSpade, fourDiamond, fourClub, fourHeart,
                    fiveSpade, fiveDiamond, fiveClub, fiveHeart, sixSpade, sixDiamond, sixClub, sixHeart,
                    sevenSpade, sevenDiamond, sevenClub, sevenHeart, eightSpade, eightDiamond, eightClub,
                    eightHeart, nineSpade, nineDiamond, nineClub, nineHeart, tenSpade, tenDiamond, tenClub,
                    tenHeart, jSpade, jDiamond, jClub, jHeart, qSpade, qDiamond, qClub, qHeart, kSpade,
                    kDiamond, kClub, kHeart, backOfCard, blankCard};

sf::Sprite arr16[] = {Aspade, Adiamond, Aclub, Aheart, twoSpade, twoDiamond, twoClub, twoHeart, threeSpade, 
                    threeDiamond, threeClub, threeHeart, fourSpade, fourDiamond, fourClub, fourHeart,
                    fiveSpade, fiveDiamond, fiveClub, fiveHeart, sixSpade, sixDiamond, sixClub, sixHeart,
                    sevenSpade, sevenDiamond, sevenClub, sevenHeart, eightSpade, eightDiamond, eightClub,
                    eightHeart, nineSpade, nineDiamond, nineClub, nineHeart, tenSpade, tenDiamond, tenClub,
                    tenHeart, jSpade, jDiamond, jClub, jHeart, qSpade, qDiamond, qClub, qHeart, kSpade,
                    kDiamond, kClub, kHeart, backOfCard, blankCard};

sf::Sprite arr17[] = {Aspade, Adiamond, Aclub, Aheart, twoSpade, twoDiamond, twoClub, twoHeart, threeSpade, 
                    threeDiamond, threeClub, threeHeart, fourSpade, fourDiamond, fourClub, fourHeart,
                    fiveSpade, fiveDiamond, fiveClub, fiveHeart, sixSpade, sixDiamond, sixClub, sixHeart,
                    sevenSpade, sevenDiamond, sevenClub, sevenHeart, eightSpade, eightDiamond, eightClub,
                    eightHeart, nineSpade, nineDiamond, nineClub, nineHeart, tenSpade, tenDiamond, tenClub,
                    tenHeart, jSpade, jDiamond, jClub, jHeart, qSpade, qDiamond, qClub, qHeart, kSpade,
                    kDiamond, kClub, kHeart, backOfCard, blankCard};

sf::Sprite arr18[] = {Aspade, Adiamond, Aclub, Aheart, twoSpade, twoDiamond, twoClub, twoHeart, threeSpade, 
                    threeDiamond, threeClub, threeHeart, fourSpade, fourDiamond, fourClub, fourHeart,
                    fiveSpade, fiveDiamond, fiveClub, fiveHeart, sixSpade, sixDiamond, sixClub, sixHeart,
                    sevenSpade, sevenDiamond, sevenClub, sevenHeart, eightSpade, eightDiamond, eightClub,
                    eightHeart, nineSpade, nineDiamond, nineClub, nineHeart, tenSpade, tenDiamond, tenClub,
                    tenHeart, jSpade, jDiamond, jClub, jHeart, qSpade, qDiamond, qClub, qHeart, kSpade,
                    kDiamond, kClub, kHeart, backOfCard, blankCard};

sf::Sprite arr19[] = {Aspade, Adiamond, Aclub, Aheart, twoSpade, twoDiamond, twoClub, twoHeart, threeSpade, 
                    threeDiamond, threeClub, threeHeart, fourSpade, fourDiamond, fourClub, fourHeart,
                    fiveSpade, fiveDiamond, fiveClub, fiveHeart, sixSpade, sixDiamond, sixClub, sixHeart,
                    sevenSpade, sevenDiamond, sevenClub, sevenHeart, eightSpade, eightDiamond, eightClub,
                    eightHeart, nineSpade, nineDiamond, nineClub, nineHeart, tenSpade, tenDiamond, tenClub,
                    tenHeart, jSpade, jDiamond, jClub, jHeart, qSpade, qDiamond, qClub, qHeart, kSpade,
                    kDiamond, kClub, kHeart, backOfCard, blankCard};


sf::Sprite arr20[] = {Aspade, Adiamond, Aclub, Aheart, twoSpade, twoDiamond, twoClub, twoHeart, threeSpade, 
                    threeDiamond, threeClub, threeHeart, fourSpade, fourDiamond, fourClub, fourHeart,
                    fiveSpade, fiveDiamond, fiveClub, fiveHeart, sixSpade, sixDiamond, sixClub, sixHeart,
                    sevenSpade, sevenDiamond, sevenClub, sevenHeart, eightSpade, eightDiamond, eightClub,
                    eightHeart, nineSpade, nineDiamond, nineClub, nineHeart, tenSpade, tenDiamond, tenClub,
                    tenHeart, jSpade, jDiamond, jClub, jHeart, qSpade, qDiamond, qClub, qHeart, kSpade,
                    kDiamond, kClub, kHeart, backOfCard, blankCard};

sf::Sprite arr21[] = {Aspade, Adiamond, Aclub, Aheart, twoSpade, twoDiamond, twoClub, twoHeart, threeSpade, 
                    threeDiamond, threeClub, threeHeart, fourSpade, fourDiamond, fourClub, fourHeart,
                    fiveSpade, fiveDiamond, fiveClub, fiveHeart, sixSpade, sixDiamond, sixClub, sixHeart,
                    sevenSpade, sevenDiamond, sevenClub, sevenHeart, eightSpade, eightDiamond, eightClub,
                    eightHeart, nineSpade, nineDiamond, nineClub, nineHeart, tenSpade, tenDiamond, tenClub,
                    tenHeart, jSpade, jDiamond, jClub, jHeart, qSpade, qDiamond, qClub, qHeart, kSpade,
                    kDiamond, kClub, kHeart, backOfCard, blankCard};

sf::Sprite arr22[] = {Aspade, Adiamond, Aclub, Aheart, twoSpade, twoDiamond, twoClub, twoHeart, threeSpade, 
                    threeDiamond, threeClub, threeHeart, fourSpade, fourDiamond, fourClub, fourHeart,
                    fiveSpade, fiveDiamond, fiveClub, fiveHeart, sixSpade, sixDiamond, sixClub, sixHeart,
                    sevenSpade, sevenDiamond, sevenClub, sevenHeart, eightSpade, eightDiamond, eightClub,
                    eightHeart, nineSpade, nineDiamond, nineClub, nineHeart, tenSpade, tenDiamond, tenClub,
                    tenHeart, jSpade, jDiamond, jClub, jHeart, qSpade, qDiamond, qClub, qHeart, kSpade,
                    kDiamond, kClub, kHeart, backOfCard, blankCard};

// value for each of the cards. Aces will need additional coding since they can also be 11
int value[] = {1,1,1,1,2,2,2,2,3,3,3,3,4,4,4,4,5,5,5,5,6,6,6,6,7,7,7,7,8,8,8,8,9,9,9,9,10,10,10,10,10,10,10,10,
                10,10,10,10,10,10,10,10};

    //max number of the lowest cards to get over 21 is 11 so player and dealer will only be able to draw
    //a maximum of 11 cards each.
int num1, num2, num3, num4, num5, num6, num7, num8, num9, num10, num11, num12, num13, num14, num15,
    num16, num17, num18, num19, num20, num21, num22;
    
    //all cards will initially equal the blank card. 
    num1= num2 = num3 = num4 = num5 = num6 = num7 = num8 = num9 = num10 = num11 = 52;
    num12 = num13 = num14 = num15 = num16 = num17 = num18 = num19 = num20 = num21 = num22 = 52;
    
//*****************************************************************************************

// setting position for cards

arr1[num1].setScale(sf::Vector2f(2.0f,2.0f));
arr1[num1].setPosition(sf::Vector2f(10.f, 50.f));

arr2[num2].setScale(sf::Vector2f(2.0f,2.0f));
arr2[num2].setPosition(sf::Vector2f(85.f, 50.f));

arr3[num3].setScale(sf::Vector2f(2.0f,2.0f));
arr3[num3].setPosition(sf::Vector2f(160.f, 50.f));

arr4[num4].setScale(sf::Vector2f(2.0f,2.0f));
arr4[num4].setPosition(sf::Vector2f(235.f, 50.f));  

arr5[num5].setScale(sf::Vector2f(2.0f,2.0f));
arr5[num5].setPosition(sf::Vector2f(310.f, 50.f));

arr6[num6].setScale(sf::Vector2f(2.0f,2.0f));
arr6[num6].setPosition(sf::Vector2f(385.f, 50.f));

arr7[num7].setScale(sf::Vector2f(2.0f,2.0f));
arr7[num7].setPosition(sf::Vector2f(460.f, 50.f));

arr8[num8].setScale(sf::Vector2f(2.0f,2.0f));
arr8[num8].setPosition(sf::Vector2f(535.f, 50.f));

arr9[num9].setScale(sf::Vector2f(2.0f,2.0f));
arr9[num9].setPosition(sf::Vector2f(610.f, 50.f));

arr10[num10].setScale(sf::Vector2f(2.0f,2.0f));
arr10[num10].setPosition(sf::Vector2f(685.f, 50.f));

arr11[num11].setScale(sf::Vector2f(2.0f,2.0f));
arr11[num11].setPosition(sf::Vector2f(760.f, 50.f));

arr12[num12].setScale(sf::Vector2f(2.0f,2.0f));
arr12[num12].setPosition(sf::Vector2f(10.f, 250.f));

arr13[num13].setScale(sf::Vector2f(2.0f,2.0f));
arr13[num13].setPosition(sf::Vector2f(85.f, 250.f));

arr14[num14].setScale(sf::Vector2f(2.0f,2.0f));
arr14[num14].setPosition(sf::Vector2f(160.f, 250.f));

arr15[num15].setScale(sf::Vector2f(2.0f,2.0f));
arr15[num15].setPosition(sf::Vector2f(235.f, 250.f));  

arr16[num16].setScale(sf::Vector2f(2.0f,2.0f));
arr16[num16].setPosition(sf::Vector2f(310.f, 250.f));

arr17[num17].setScale(sf::Vector2f(2.0f,2.0f));
arr17[num17].setPosition(sf::Vector2f(385.f, 250.f));

arr18[num18].setScale(sf::Vector2f(2.0f,2.0f));
arr18[num18].setPosition(sf::Vector2f(460.f, 250.f));

arr19[num19].setScale(sf::Vector2f(2.0f,2.0f));
arr19[num19].setPosition(sf::Vector2f(535.f, 250.f));

arr20[num20].setScale(sf::Vector2f(2.0f,2.0f));
arr20[num20].setPosition(sf::Vector2f(610.f, 250.f));

arr21[num21].setScale(sf::Vector2f(2.0f,2.0f));
arr21[num21].setPosition(sf::Vector2f(685.f, 250.f));

arr22[num22].setScale(sf::Vector2f(2.0f,2.0f));
arr22[num22].setPosition(sf::Vector2f(760.f, 250.f));




//*******************************************************************************************

// getting font and making text for buttons in the game.

    sf::Font font;
    if(!font.loadFromFile("DOGMA.otf"))
    {
        std::cout << "error" << std::endl;
    }

    sf::Text lose;
    lose.setFont(font);
    lose.setString("You Lost Press A to play again.");
    lose.setCharacterSize(24);
    lose.setFillColor(sf::Color::Red);
    lose.setStyle(sf::Text::Bold);
    lose.setPosition(300,200);

    sf::Text win;
    win.setFont(font);
    win.setString("You Win Press A to play again.");
    win.setCharacterSize(24);
    win.setFillColor(sf::Color::Red);
    win.setStyle(sf::Text::Bold);
    win.setPosition(300,200);

    sf::Text prompt1;
    prompt1.setFont(font);
    prompt1.setString("Hit enter to start");
    prompt1.setCharacterSize(15);
    prompt1.setFillColor(sf::Color::Red);
    prompt1.setStyle(sf::Text::Bold);
    prompt1.setPosition(300,200);

    sf::Text prompt2;
    prompt2.setFont(font);
    prompt2.setString("Hit H to hit or S to stand");
    prompt2.setCharacterSize(15);
    prompt2.setFillColor(sf::Color::Red);
    prompt2.setStyle(sf::Text::Bold);
    prompt2.setPosition(300,200);


    sf::Text textarr[] = {win, lose, prompt1, prompt2};

    int text = 2;

//*********************************************************************




    while (window.isOpen())
        {
            sf::Event event;
            while (window.pollEvent(event))
            {
                switch(event.type)  
                {
                    case sf::Event::Closed:
                    window.close();
                    break;

                    case sf::Event::KeyPressed:
                    {
                        if(event.key.code == sf::Keyboard::Enter)
                        {
                            text = 3;

                            num1 = randomNum(0,51);
                            num2 = 52;
                            num12 = randomNum(0,51);
                            num13 = randomNum(0,51);

                            computerHand += value[num1];
                            playerHand += value[num12];
                            playerHand += value[num13];

                            if(playerHand == 21)
                            {
                                text = 0;
                            }

                            num3 = num4 = num5 = num6 = num7 = num8 = num9 = num10 = num11 = 53;
                            num14 = num15 = num16 = num17 = num18 = num19 = num20 = num21 = num22 = 53;

                            arr1[num1].setScale(sf::Vector2f(2.0f,2.0f));
                            arr1[num1].setPosition(sf::Vector2f(10.f, 50.f));

                            arr2[num2].setScale(sf::Vector2f(2.0f,2.0f));
                            arr2[num2].setPosition(sf::Vector2f(85.f, 50.f));

                            arr3[num3].setScale(sf::Vector2f(2.0f,2.0f));
                            arr3[num3].setPosition(sf::Vector2f(160.f, 50.f));

                            arr4[num4].setScale(sf::Vector2f(2.0f,2.0f));
                            arr4[num4].setPosition(sf::Vector2f(235.f, 50.f));  

                            arr5[num5].setScale(sf::Vector2f(2.0f,2.0f));
                            arr5[num5].setPosition(sf::Vector2f(310.f, 50.f));

                            arr6[num6].setScale(sf::Vector2f(2.0f,2.0f));
                            arr6[num6].setPosition(sf::Vector2f(385.f, 50.f));

                            arr7[num7].setScale(sf::Vector2f(2.0f,2.0f));
                            arr7[num7].setPosition(sf::Vector2f(460.f, 50.f));

                            arr8[num8].setScale(sf::Vector2f(2.0f,2.0f));
                            arr8[num8].setPosition(sf::Vector2f(535.f, 50.f));

                            arr9[num9].setScale(sf::Vector2f(2.0f,2.0f));
                            arr9[num9].setPosition(sf::Vector2f(610.f, 50.f));

                            arr10[num10].setScale(sf::Vector2f(2.0f,2.0f));
                            arr10[num10].setPosition(sf::Vector2f(685.f, 50.f));

                            arr11[num11].setScale(sf::Vector2f(2.0f,2.0f));
                            arr11[num11].setPosition(sf::Vector2f(760.f, 50.f));

                            arr12[num12].setScale(sf::Vector2f(2.0f,2.0f));
                            arr12[num12].setPosition(sf::Vector2f(10.f, 250.f));

                            arr13[num13].setScale(sf::Vector2f(2.0f,2.0f));
                            arr13[num13].setPosition(sf::Vector2f(85.f, 250.f));

                            arr14[num14].setScale(sf::Vector2f(2.0f,2.0f));
                            arr14[num14].setPosition(sf::Vector2f(160.f, 250.f));

                            arr15[num15].setScale(sf::Vector2f(2.0f,2.0f));
                            arr15[num15].setPosition(sf::Vector2f(235.f, 250.f));  

                            arr16[num16].setScale(sf::Vector2f(2.0f,2.0f));
                            arr16[num16].setPosition(sf::Vector2f(310.f, 250.f));

                            arr17[num17].setScale(sf::Vector2f(2.0f,2.0f));
                            arr17[num17].setPosition(sf::Vector2f(385.f, 250.f));

                            arr18[num18].setScale(sf::Vector2f(2.0f,2.0f));
                            arr18[num18].setPosition(sf::Vector2f(460.f, 250.f));

                            arr19[num19].setScale(sf::Vector2f(2.0f,2.0f));
                            arr19[num19].setPosition(sf::Vector2f(535.f, 250.f));

                            arr20[num20].setScale(sf::Vector2f(2.0f,2.0f));
                            arr20[num20].setPosition(sf::Vector2f(610.f, 250.f));

                            arr21[num21].setScale(sf::Vector2f(2.0f,2.0f));
                            arr21[num21].setPosition(sf::Vector2f(685.f, 250.f));

                            arr22[num22].setScale(sf::Vector2f(2.0f,2.0f));
                            arr22[num22].setPosition(sf::Vector2f(760.f, 250.f));          
                        }

                        if(event.key.code == sf::Keyboard::H)
                        {
                            if(itteration == 14)
                            {
                                num14 = randomNum(0,51);
                                itteration++;
                                playerHand += value[num14];
                            }
                            else if(itteration == 15)
                            {
                                num15 = randomNum(0,51);
                                itteration++;
                                playerHand += value[num15];
                            }
                            else if(itteration == 16)
                            {
                                num16 = randomNum(0,51);
                                itteration++;
                                playerHand += value[num16];
                            }
                            else if(itteration == 17)
                            {
                                num17 = randomNum(0,51);
                                itteration++;
                                playerHand += value[num17];
                            }
                            else if(itteration == 18)
                            {
                                num18 = randomNum(0,51);
                                itteration++;
                                playerHand += value[num18];
                            }
                            else if(itteration == 19)
                            {
                                num19 = randomNum(0,51);
                                itteration++;
                                playerHand += value[num19];
                            }
                            else if(itteration == 20)
                            {
                                num20 = randomNum(0,51);
                                itteration++;
                                playerHand += value[num20];
                            }
                            else if(itteration == 21)
                            {
                                num21 = randomNum(0,51);
                                itteration++;
                                playerHand += value[num21];
                            }
                            else if(itteration == 22)
                            {
                                num22 = randomNum(0,51);
                                itteration++;
                                playerHand += value[num22];
                            }

                            if(playerHand > 21)
                            text = 1;

                            
                            arr1[num1].setScale(sf::Vector2f(2.0f,2.0f));
                            arr1[num1].setPosition(sf::Vector2f(10.f, 50.f));

                            arr2[num2].setScale(sf::Vector2f(2.0f,2.0f));
                            arr2[num2].setPosition(sf::Vector2f(85.f, 50.f));

                            arr3[num3].setScale(sf::Vector2f(2.0f,2.0f));
                            arr3[num3].setPosition(sf::Vector2f(160.f, 50.f));

                            arr4[num4].setScale(sf::Vector2f(2.0f,2.0f));
                            arr4[num4].setPosition(sf::Vector2f(235.f, 50.f));  

                            arr5[num5].setScale(sf::Vector2f(2.0f,2.0f));
                            arr5[num5].setPosition(sf::Vector2f(310.f, 50.f));

                            arr6[num6].setScale(sf::Vector2f(2.0f,2.0f));
                            arr6[num6].setPosition(sf::Vector2f(385.f, 50.f));

                            arr7[num7].setScale(sf::Vector2f(2.0f,2.0f));
                            arr7[num7].setPosition(sf::Vector2f(460.f, 50.f));

                            arr8[num8].setScale(sf::Vector2f(2.0f,2.0f));
                            arr8[num8].setPosition(sf::Vector2f(535.f, 50.f));

                            arr9[num9].setScale(sf::Vector2f(2.0f,2.0f));
                            arr9[num9].setPosition(sf::Vector2f(610.f, 50.f));

                            arr10[num10].setScale(sf::Vector2f(2.0f,2.0f));
                            arr10[num10].setPosition(sf::Vector2f(685.f, 50.f));

                            arr11[num11].setScale(sf::Vector2f(2.0f,2.0f));
                            arr11[num11].setPosition(sf::Vector2f(760.f, 50.f));

                            arr12[num12].setScale(sf::Vector2f(2.0f,2.0f));
                            arr12[num12].setPosition(sf::Vector2f(10.f, 250.f));

                            arr13[num13].setScale(sf::Vector2f(2.0f,2.0f));
                            arr13[num13].setPosition(sf::Vector2f(85.f, 250.f));

                            arr14[num14].setScale(sf::Vector2f(2.0f,2.0f));
                            arr14[num14].setPosition(sf::Vector2f(160.f, 250.f));

                            arr15[num15].setScale(sf::Vector2f(2.0f,2.0f));
                            arr15[num15].setPosition(sf::Vector2f(235.f, 250.f));  

                            arr16[num16].setScale(sf::Vector2f(2.0f,2.0f));
                            arr16[num16].setPosition(sf::Vector2f(310.f, 250.f));

                            arr17[num17].setScale(sf::Vector2f(2.0f,2.0f));
                            arr17[num17].setPosition(sf::Vector2f(385.f, 250.f));

                            arr18[num18].setScale(sf::Vector2f(2.0f,2.0f));
                            arr18[num18].setPosition(sf::Vector2f(460.f, 250.f));

                            arr19[num19].setScale(sf::Vector2f(2.0f,2.0f));
                            arr19[num19].setPosition(sf::Vector2f(535.f, 250.f));

                            arr20[num20].setScale(sf::Vector2f(2.0f,2.0f));
                            arr20[num20].setPosition(sf::Vector2f(610.f, 250.f));

                            arr21[num21].setScale(sf::Vector2f(2.0f,2.0f));
                            arr21[num21].setPosition(sf::Vector2f(685.f, 250.f));

                            arr22[num22].setScale(sf::Vector2f(2.0f,2.0f));
                            arr22[num22].setPosition(sf::Vector2f(760.f, 250.f));          
                        }

                        if(event.key.code == sf::Keyboard::S)
                        {

                            if(computerTurn == 2)
                            {
                                num2 = randomNum(0,51);
                                computerTurn++;
                                computerHand += value[num2];
                                if(computerHand >= 17 && computerHand <= 21)
                                {
                                    if(computerHand > playerHand)
                                    text = 1;
                                    else
                                    text = 0;
                                }
                                else if(computerHand > 21)
                                text = 0;
                            }
                            else if(computerTurn == 3)
                            {
                                num3 = randomNum(0,51);
                                computerTurn++;
                                computerHand += value[num3];
                                if(computerHand >= 17 && computerHand <= 21)
                                {
                                    if(computerHand > playerHand)
                                    text = 1;
                                    else
                                    text = 0;
                                }
                                else if(computerHand > 21)
                                text = 0;
                            }
                            else if(computerTurn == 4)
                            {
                                num4 = randomNum(0,51);
                                computerTurn++;
                                computerHand += value[num4];
                                if(computerHand >= 17 && computerHand <= 21)
                                {
                                    if(computerHand > playerHand)
                                    text = 1;
                                    else
                                    text = 0;
                                }
                                else if(computerHand > 21)
                                text = 0;
                            }
                            else if(computerTurn == 5)
                            {
                                num5 = randomNum(0,51);
                                computerTurn++;
                                computerHand += value[num5];
                                if(computerHand >= 17 && computerHand <= 21)
                                {
                                    if(computerHand > playerHand)
                                    text = 1;
                                    else
                                    text = 0;
                                }
                                else if(computerHand > 21)
                                text = 0;
                            }
                            else if(computerTurn == 6)
                            {
                                num6 = randomNum(0,51);
                                computerTurn++;
                                computerHand += value[num6];
                                if(computerHand >= 17 && computerHand <= 21)
                                {
                                    if(computerHand > playerHand)
                                    text = 1;
                                    else
                                    text = 0;
                                }
                                else if(computerHand > 21)
                                text = 0;
                            }
                            else if(computerTurn == 7)
                            {
                                num7 = randomNum(0,51);
                                computerTurn++;
                                computerHand += value[num7];
                                if(computerHand >= 17 && computerHand <= 21)
                                {
                                    if(computerHand > playerHand)
                                    text = 1;
                                    else
                                    text = 0;
                                }
                                else if(computerHand > 21)
                                text = 0;
                            }
                            else if(computerTurn == 8)
                            {
                                num8 = randomNum(0,51);
                                computerTurn++;
                                computerHand += value[num8];
                                if(computerHand >= 17 && computerHand <= 21)
                                {
                                    if(computerHand > playerHand)
                                    text = 1;
                                    else
                                    text = 0;
                                }
                                else if(computerHand > 21)
                                text = 0;
                            }
                            else if(computerTurn == 9)
                            {
                                num9 = randomNum(0,51);
                                computerTurn++;
                                computerHand += value[num9];
                                if(computerHand >= 17 && computerHand <= 21)
                                {
                                    if(computerHand > playerHand)
                                    text = 1;
                                    else
                                    text = 0;
                                }
                                else if(computerHand > 21)
                                text = 0;
                            }
                            else if(computerTurn == 10)
                            {
                                num10 = randomNum(0,51);
                                computerTurn++;
                                computerHand += value[num10];
                                if(computerHand >= 17 && computerHand <= 21)
                                {
                                    if(computerHand > playerHand)
                                    text = 1;
                                    else
                                    text = 0;
                                }
                                else if(computerHand > 21)
                                text = 0;
                            }
                            

                            arr1[num1].setScale(sf::Vector2f(2.0f,2.0f));
                            arr1[num1].setPosition(sf::Vector2f(10.f, 50.f));

                            arr2[num2].setScale(sf::Vector2f(2.0f,2.0f));
                            arr2[num2].setPosition(sf::Vector2f(85.f, 50.f));

                            arr3[num3].setScale(sf::Vector2f(2.0f,2.0f));
                            arr3[num3].setPosition(sf::Vector2f(160.f, 50.f));

                            arr4[num4].setScale(sf::Vector2f(2.0f,2.0f));
                            arr4[num4].setPosition(sf::Vector2f(235.f, 50.f));  

                            arr5[num5].setScale(sf::Vector2f(2.0f,2.0f));
                            arr5[num5].setPosition(sf::Vector2f(310.f, 50.f));

                            arr6[num6].setScale(sf::Vector2f(2.0f,2.0f));
                            arr6[num6].setPosition(sf::Vector2f(385.f, 50.f));

                            arr7[num7].setScale(sf::Vector2f(2.0f,2.0f));
                            arr7[num7].setPosition(sf::Vector2f(460.f, 50.f));

                            arr8[num8].setScale(sf::Vector2f(2.0f,2.0f));
                            arr8[num8].setPosition(sf::Vector2f(535.f, 50.f));

                            arr9[num9].setScale(sf::Vector2f(2.0f,2.0f));
                            arr9[num9].setPosition(sf::Vector2f(610.f, 50.f));

                            arr10[num10].setScale(sf::Vector2f(2.0f,2.0f));
                            arr10[num10].setPosition(sf::Vector2f(685.f, 50.f));

                            arr11[num11].setScale(sf::Vector2f(2.0f,2.0f));
                            arr11[num11].setPosition(sf::Vector2f(760.f, 50.f));

                            arr12[num12].setScale(sf::Vector2f(2.0f,2.0f));
                            arr12[num12].setPosition(sf::Vector2f(10.f, 250.f));

                            arr13[num13].setScale(sf::Vector2f(2.0f,2.0f));
                            arr13[num13].setPosition(sf::Vector2f(85.f, 250.f));

                            arr14[num14].setScale(sf::Vector2f(2.0f,2.0f));
                            arr14[num14].setPosition(sf::Vector2f(160.f, 250.f));

                            arr15[num15].setScale(sf::Vector2f(2.0f,2.0f));
                            arr15[num15].setPosition(sf::Vector2f(235.f, 250.f));  

                            arr16[num16].setScale(sf::Vector2f(2.0f,2.0f));
                            arr16[num16].setPosition(sf::Vector2f(310.f, 250.f));

                            arr17[num17].setScale(sf::Vector2f(2.0f,2.0f));
                            arr17[num17].setPosition(sf::Vector2f(385.f, 250.f));

                            arr18[num18].setScale(sf::Vector2f(2.0f,2.0f));
                            arr18[num18].setPosition(sf::Vector2f(460.f, 250.f));

                            arr19[num19].setScale(sf::Vector2f(2.0f,2.0f));
                            arr19[num19].setPosition(sf::Vector2f(535.f, 250.f));

                            arr20[num20].setScale(sf::Vector2f(2.0f,2.0f));
                            arr20[num20].setPosition(sf::Vector2f(610.f, 250.f));

                            arr21[num21].setScale(sf::Vector2f(2.0f,2.0f));
                            arr21[num21].setPosition(sf::Vector2f(685.f, 250.f));

                            arr22[num22].setScale(sf::Vector2f(2.0f,2.0f));
                            arr22[num22].setPosition(sf::Vector2f(760.f, 250.f));          
                        }

                        if(event.key.code == sf::Keyboard::A)
                        {
                            playerHand = 0;
                            computerHand = 0;
                            computerTurn = 2;
                            itteration = 14;
                            text = 3;

                            num1 = randomNum(0,51);
                            num2 = 52;
                            num12 = randomNum(0,51);
                            num13 = randomNum(0,51);

                            computerHand += value[num1];
                            playerHand += value[num12];
                            playerHand += value[num13];

                            if(playerHand == 21)
                            {
                                text = 0;
                            }

                            num3 = num4 = num5 = num6 = num7 = num8 = num9 = num10 = num11 = 53;
                            num14 = num15 = num16 = num17 = num18 = num19 = num20 = num21 = num22 = 53;

                            arr1[num1].setScale(sf::Vector2f(2.0f,2.0f));
                            arr1[num1].setPosition(sf::Vector2f(10.f, 50.f));

                            arr2[num2].setScale(sf::Vector2f(2.0f,2.0f));
                            arr2[num2].setPosition(sf::Vector2f(85.f, 50.f));

                            arr3[num3].setScale(sf::Vector2f(2.0f,2.0f));
                            arr3[num3].setPosition(sf::Vector2f(160.f, 50.f));

                            arr4[num4].setScale(sf::Vector2f(2.0f,2.0f));
                            arr4[num4].setPosition(sf::Vector2f(235.f, 50.f));  

                            arr5[num5].setScale(sf::Vector2f(2.0f,2.0f));
                            arr5[num5].setPosition(sf::Vector2f(310.f, 50.f));

                            arr6[num6].setScale(sf::Vector2f(2.0f,2.0f));
                            arr6[num6].setPosition(sf::Vector2f(385.f, 50.f));

                            arr7[num7].setScale(sf::Vector2f(2.0f,2.0f));
                            arr7[num7].setPosition(sf::Vector2f(460.f, 50.f));

                            arr8[num8].setScale(sf::Vector2f(2.0f,2.0f));
                            arr8[num8].setPosition(sf::Vector2f(535.f, 50.f));

                            arr9[num9].setScale(sf::Vector2f(2.0f,2.0f));
                            arr9[num9].setPosition(sf::Vector2f(610.f, 50.f));

                            arr10[num10].setScale(sf::Vector2f(2.0f,2.0f));
                            arr10[num10].setPosition(sf::Vector2f(685.f, 50.f));

                            arr11[num11].setScale(sf::Vector2f(2.0f,2.0f));
                            arr11[num11].setPosition(sf::Vector2f(760.f, 50.f));

                            arr12[num12].setScale(sf::Vector2f(2.0f,2.0f));
                            arr12[num12].setPosition(sf::Vector2f(10.f, 250.f));

                            arr13[num13].setScale(sf::Vector2f(2.0f,2.0f));
                            arr13[num13].setPosition(sf::Vector2f(85.f, 250.f));

                            arr14[num14].setScale(sf::Vector2f(2.0f,2.0f));
                            arr14[num14].setPosition(sf::Vector2f(160.f, 250.f));

                            arr15[num15].setScale(sf::Vector2f(2.0f,2.0f));
                            arr15[num15].setPosition(sf::Vector2f(235.f, 250.f));  

                            arr16[num16].setScale(sf::Vector2f(2.0f,2.0f));
                            arr16[num16].setPosition(sf::Vector2f(310.f, 250.f));

                            arr17[num17].setScale(sf::Vector2f(2.0f,2.0f));
                            arr17[num17].setPosition(sf::Vector2f(385.f, 250.f));

                            arr18[num18].setScale(sf::Vector2f(2.0f,2.0f));
                            arr18[num18].setPosition(sf::Vector2f(460.f, 250.f));

                            arr19[num19].setScale(sf::Vector2f(2.0f,2.0f));
                            arr19[num19].setPosition(sf::Vector2f(535.f, 250.f));

                            arr20[num20].setScale(sf::Vector2f(2.0f,2.0f));
                            arr20[num20].setPosition(sf::Vector2f(610.f, 250.f));

                            arr21[num21].setScale(sf::Vector2f(2.0f,2.0f));
                            arr21[num21].setPosition(sf::Vector2f(685.f, 250.f));

                            arr22[num22].setScale(sf::Vector2f(2.0f,2.0f));
                            arr22[num22].setPosition(sf::Vector2f(760.f, 250.f));          
                        }
                    }
                }
            }

            window.clear();
            window.draw(arr1[num1]);
            window.draw(arr2[num2]);
            window.draw(arr3[num3]);
            window.draw(arr4[num4]);
            window.draw(arr5[num5]);
            window.draw(arr6[num6]);
            window.draw(arr7[num7]);
            window.draw(arr8[num8]);
            window.draw(arr9[num9]);
            window.draw(arr10[num10]);
            window.draw(arr11[num11]);

            window.draw(arr12[num12]);
            window.draw(arr13[num13]);
            window.draw(arr14[num14]);
            window.draw(arr15[num15]);
            window.draw(arr16[num16]);
            window.draw(arr17[num17]);
            window.draw(arr18[num18]);
            window.draw(arr19[num19]);
            window.draw(arr20[num20]);
            window.draw(arr21[num21]);
            window.draw(arr22[num22]);

            window.draw(textarr[text]);

            window.display();
        }


    return 0;
}



int randomNum(int min, int max)
{
    int number;
    unsigned seed;
    sleep(1);

    seed = time(0);
    srand(seed);

    number = rand() % (max - min +1) + min;

    return number;
}
