#ifndef SWAGGER_TYPES_LolGameflowPatcherProductStateAction_HPP
#define SWAGGER_TYPES_LolGameflowPatcherProductStateAction_HPP
#include <json.hpp>
namespace test {
  // 
  enum class LolGameflowPatcherProductStateAction {
'    // 
    CheckingForUpdates = 1,
    // 
    Idle = 0,
    // 
    Patching = 2,
    // 
    Repairing = 3,
  };

  void to_json(nlohmann::json& j, const LolGameflowPatcherProductStateAction& v) {
    switch(v) {
      case LolGameflowPatcherProductStateAction::CheckingForUpdates:
        j = "CheckingForUpdates";
      break;
      case LolGameflowPatcherProductStateAction::Idle:
        j = "Idle";
      break;
      case LolGameflowPatcherProductStateAction::Patching:
        j = "Patching";
      break;
      case LolGameflowPatcherProductStateAction::Repairing:
        j = "Repairing";
      break;
    }
  }

  void from_json(const nlohmann::json& j, LolGameflowPatcherProductStateAction& v) {
    const auto s& = j.get<std::string>();
    if(s == "CheckingForUpdates"){
      v = LolGameflowPatcherProductStateAction::CheckingForUpdates;
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
    if(s == "Repairing"){
      v = LolGameflowPatcherProductStateAction::Repairing;
      return;
    }
  }

}
#endif // SWAGGER_TYPES_LolGameflowPatcherProductStateAction_HPP
