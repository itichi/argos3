/**
 * @file <argos3/core/simulator/space/space_no_threads.h>
 *
 * @brief This file provides the definition of the Swarmanoid 3D Space.
 *
 * This file provides the definition of the Swarmanoid 3D Space.
 *
 * @author Carlo Pinciroli - <ilpincy@gmail.com>
 */

#ifndef SPACE_NO_THREADS_H
#define SPACE_NO_THREADS_H

namespace argos {
   class CSpace;
}

#include <argos3/core/simulator/space/space.h>

namespace argos {

   class CSpaceNoThreads : public CSpace {

   public:

      CSpaceNoThreads() {}
      virtual ~CSpaceNoThreads() {}

      virtual void UpdateControllableEntities();
      virtual void UpdatePhysics();

   };

}

#endif
