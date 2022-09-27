#include <iostream>
#include "sortcar.h"

/**
 * I the undersigned promise that the submitted assignment is my own work. While I was
free to discuss ideas with others, the work contained is my own. I recognize that
should this not be the case; I will be subject to penalties as outlined in the course
syllabus.
Name:Omar Yusuf
Red ID: 823877555
date: 6/8/23
 * @brief sort car inventory
 * 
 * @param carInventory      input car inventory array
 * @param promotionOrder    car promotion order
 * @return vector<string>   sorted car inventory according to the car promotion order
 * 
 * Time complexity has to be linear: O(N), N is the size/length of the input car inventory array
 * Space complexity has to be constant: O(1), hint: sorting can be done by mutating 
 *                                      the input car inventory array.
 */
vector<string> SortCar::sortCarInventory(vector<string> carInventory, vector<string> promotionOrder) {

    //declaring and initializing the amount of each word as 0
    int amountOfFirst =0;
    int amountOfSecond = 0;
    int amountOfThird = 0;

//declaring the base value for the for loops
    int i ;

//declaring and initializing for amount in carInventory
    int AmountInInventory =  carInventory.size();

//declaring and intializing the variable to hold the values of promotionOrder in seperate strings
    string firstWord = promotionOrder.at(0);
    string secondWord = promotionOrder.at(1);
    string thirdWord = promotionOrder.at(2);


//for loop in order to get the amount each word shows up creating the algorithm to be at O(n)
    for(i = 0; i < AmountInInventory; i++){
        //count amount the first word is in carInventory
        if(carInventory.at(i) == firstWord){
            ++amountOfFirst;
        }

        //count amount the second word is in carInventory
        if(carInventory.at(i) == secondWord){
            ++amountOfSecond;
        }


        //count amount the third word is in carInventory
        if(carInventory.at(i) == thirdWord){
            ++amountOfThird;
        }
    }

//clear CarInventory in order to add new order
    //carInventory.clear();

//another for loop which gives the same words and amount of the original car inventory but in order
//with another for loop the algorithm is at O(2n) however it's the same rate as O(n)
    for(i = 0; i < AmountInInventory; i++){


        //swaps all amountOfFirst variable to CarInventory
        if(amountOfFirst != 0){
            carInventory.at(i) = firstWord;
            --amountOfFirst;
        }
            //swaps all amountOfSecond variable to CarInventory
        else{ if(amountOfSecond != 0){
                carInventory.at(i) = secondWord;
                --amountOfSecond;
            }
            else {
                //swaps all amountOfThird variable to CarInventory
                if (amountOfThird != 0) {
                    carInventory.at(i) = thirdWord;
                    --amountOfThird;
                }
            }
        }
    }
//returns the correct order CarInventory

    return carInventory;
}
  