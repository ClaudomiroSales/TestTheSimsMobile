
#include <iostream>
using std::cout;

#include "Stories.h"
#include "Stories.cpp"

#include "StoriesRelationship.h"
#include "StoriesRelationship.cpp"

#include "FriendshipActions.h"
#include "FriendshipActions.cpp"

#include "Sims.h"
#include "Sims.cpp"

#include "SimsAppearance.h"
#include "SimsAppearance.cpp"

int main()
{

  Stories stories;
  StoriesRelationship storiesRelationship;
  StoriesRelationship storiesRelationship_;

  cout << "Teste Stories.\n";
  cout << stories;

  cout << "\nTeste StoriesRelationship.\n";
  cout << storiesRelationship;

  if( storiesRelationship == storiesRelationship_ )
    cout << "Sao iguais.\n";

  return 0;
}