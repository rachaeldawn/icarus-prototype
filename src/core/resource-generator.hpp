#pragma once
#include "entity.hpp"
#include "pool.hpp"
#include "activities/crafting.hpp"

namespace Icarus {

  /**
   * Anything that generates a resource of any kind
   */
  class ResourceGenerator
  : public Pool<Entity*> {
  private:

    /** The rate at which the resource is being generated */
    int rate;

    /** The resource being generated */
    Entity* resource;

    /** The name of this resource generator */
    string name; 

  public:
    
    int getRate();

    ResourceGenerator(string name,
                      Entity* resource,
                      int amt,
                      int max,
                      int rate);


    void onThink();
  };
}
