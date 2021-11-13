'use strict';
//Selecting Elements
const score0 = document.querySelector('#score--0');
const score1 = document.querySelector('#score--1');
const current0 = document.querySelector('#current--0');
const current1 = document.querySelector('#current--1');
const dice = document.querySelector('.dice');
const btnNew = document.querySelector('.btn--new');
const btnRoll = document.querySelector('.btn--roll');
const btnHold = document.querySelector('.btn--hold');
let currentScore =0;


//Conditions
score0.textContent = 0;
score1.textContent = 0;
dice.classList.add('hidden');

//Rolling Dice Functionality
btnRoll.addEventListener('click',function(){
  //Rendom Dice Roll
  const diceNum = Math.trunc(Math.random()*6)+1;//1 to 6
  //Display Dice 
  dice.classList.remove('hidden');//remove hidden class
  dice.src = `dice-${diceNum}.png`;//Change IMG to random
  //Check for Rolled 1
  if (diceNum != 1) { //Add dice to currentScore
    currentScore += diceNum;
    current0.textContent = currentScore;
    
    
  } else {
    
  }
  
  
  
});
