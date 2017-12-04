#ifndef SWAGGER_TYPES_PatcherComponentStateAction_HPP
#define SWAGGER_TYPES_PatcherComponentStateAction_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  enum class PatcherComponentStateAction {
    // 
    Repairing = 3,
    // 
    Idle = 0,
    // 
    Patching = 2,
    // 
    CheckingForUpdates = 1,
  };

  inline void to_json(nlohmann::json& j, const PatcherComponentStateAction& v) {
    switch(v) {
      case PatcherComponentStateAction::Repairing:
        j = "Repairing";
      break;
      case PatcherComponentStateAction::Idle:
        j = "Idle";
      break;
      case PatcherComponentStateAction::Patching:
        j = "Patching";
      break;
      case PatcherComponentStateAction::CheckingForUpdates:
        j = "CheckingForUpdates";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, PatcherComponentStateAction& v) {
    const auto& s = j.get<std::string>();
    if(s == "Repairing"){
      v = PatcherComponentStateAction::Repairing;
      return;
    }
    if(s == "Idle"){
      v = PatcherComponentStateAction::Idle;
      return;
    }
    if(s == "Patching"){
      v = PatcherComponentStateAction::Patching;
      return;
    }
    if(s == "CheckingForUpdates"){
      v = PatcherComponentStateAction::CheckingForUpdates;
      return;
    }
  }

}
#endif // SWAGGER_TYPES_PatcherComponentStateAction_HPP
