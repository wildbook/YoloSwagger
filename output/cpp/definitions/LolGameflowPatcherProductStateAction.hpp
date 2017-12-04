#ifndef SWAGGER_TYPES_LolGameflowPatcherProductStateAction_HPP
#define SWAGGER_TYPES_LolGameflowPatcherProductStateAction_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  enum class LolGameflowPatcherProductStateAction {
    // 
    Repairing = 3,
    // 
    Idle = 0,
    // 
    Patching = 2,
    // 
    CheckingForUpdates = 1,
  };

  inline void to_json(nlohmann::json& j, const LolGameflowPatcherProductStateAction& v) {
    switch(v) {
      case LolGameflowPatcherProductStateAction::Repairing:
        j = "Repairing";
      break;
      case LolGameflowPatcherProductStateAction::Idle:
        j = "Idle";
      break;
      case LolGameflowPatcherProductStateAction::Patching:
        j = "Patching";
      break;
      case LolGameflowPatcherProductStateAction::CheckingForUpdates:
        j = "CheckingForUpdates";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, LolGameflowPatcherProductStateAction& v) {
    const auto& s = j.get<std::string>();
    if(s == "Repairing"){
      v = LolGameflowPatcherProductStateAction::Repairing;
      return;
    }
    if(s == "Idle"){
      v = LolGameflowPatcherProductStateAction::Idle;
      return;
    }
    if(s == "Patching"){
      v = LolGameflowPatcherProductStateAction::Patching;
      return;
    }
    if(s == "CheckingForUpdates"){
      v = LolGameflowPatcherProductStateAction::CheckingForUpdates;
      return;
    }
  }

}
#endif // SWAGGER_TYPES_LolGameflowPatcherProductStateAction_HPP
