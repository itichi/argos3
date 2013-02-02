/**
 * @file <argos3/core/control_interface/ci_actuator.h>
 *
 * @brief This file provides the basic interface for all actuators.
 *
 * @author Carlo Pinciroli - <ilpincy@gmail.com>
 */

#ifndef CI_ACTUATOR_H
#define CI_ACTUATOR_H

namespace argos {
   class CCI_Actuator;
}

#include <argos3/core/utility/datatypes/datatypes.h>
#include <argos3/core/utility/configuration/base_configurable_resource.h>

#include <map>

namespace argos {

   class CCI_Actuator : public CBaseConfigurableResource {

   public:

      typedef std::map<std::string, CCI_Actuator*, std::less<std::string> > TMap;

   public:

      virtual ~CCI_Actuator() {}

      virtual void Init(TConfigurationNode& t_node) {}

      virtual void Reset() {}

      virtual void Destroy() {}
   };

}

#endif
