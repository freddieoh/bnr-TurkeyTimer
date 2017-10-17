//
//  main.c
//  TurkeyTimer
//
//  Created by Fredrick Ohen on 10/11/17.
//  Copyright © 2017 geeoku. All rights reserved.
//

#include <stdio.h>

void showCookTimeForTurkey(int pounds)
{
  int neccesaryMinutes = 15 + 15 *pounds;
  printf("Cook for %d minutes. \n", neccesaryMinutes);
  if (neccesaryMinutes > 120) {
    int halfway = neccesaryMinutes / 2;
  }
  printf("Rotate after %d of the %d minutes. \n", halfway, neccesaryMinutes);

}

int main(int argc, const char * argv[])
{
  int totalWeight = 10;
  int gibletsWeight = 1;
  int turkeyWeight = totalWeight - gibletsWeight;
  showCookTimeForTurkey(turkeyWeight);
}
