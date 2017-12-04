#ifndef SWAGGER_TYPES_PatcherComponentStateAction_HPP
#define SWAGGER_TYPES_PatcherComponentStateAction_HPP
#include <json.hpp>
namespace test {
  // 
  enum class PatcherComponentStateAction {
'    // 
    CheckingForUpdates = 1,
    // 
    Idle = 0,
    // 
    Patching = 2,
    // 
    Repairing = 3,
  };

  void to_json(nlohmann::json& j, const PatcherComponentStateAction& v) {
    switch(v) {
      case PatcherComponentStateAction::CheckingForUpdates:
        j = "CheckingForUpdates";
      break;
      case PatcherComponentStateAction::Idle:
        j = "Idle";
      break;
      case PatcherComponentStateAction::Patching:
        j = "Patching";
      break;
      case PatcherComponentStateAction::Repairing:
        j = "Repairing";
      break;
    }
  }

  void from_json(const nlohmann::json& j, PatcherComponentStateAction& v) {
    const auto s& = j.get<std::string>();
    if(s == "CheckingForUpdates"){
      v = PatcherComponentStateAction::CheckingForUpdates;
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
    if(s == "Repairing"){
      v = PatcherComponentStateAction::Repairing;
      return;
    }
  }

}
#endif // SWAGGER_TYPES_PatcherComponentStateAction_HPP
