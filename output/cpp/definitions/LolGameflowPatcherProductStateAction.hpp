#pragma once
#include <json.hpp>
namespace leagueapi {
  enum class LolGameflowPatcherProductStateAction_t {
    Patching_E = 2,
    Repairing_E = 3,
    Idle_E = 0,
    CheckingForUpdates_E = 1,
  };

  inline void to_json(nlohmann::json& j, const LolGameflowPatcherProductStateAction_t& v) {
    switch(v) {
      case LolGameflowPatcherProductStateAction_t::Patching_E:
        j = "Patching";
      break;
      case LolGameflowPatcherProductStateAction_t::Repairing_E:
        j = "Repairing";
      break;
      case LolGameflowPatcherProductStateAction_t::Idle_E:
        j = "Idle";
      break;
      case LolGameflowPatcherProductStateAction_t::CheckingForUpdates_E:
        j = "CheckingForUpdates";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, LolGameflowPatcherProductStateAction_t& v) {
    const auto& s = j.get<std::string>();
    if(s == "Patching"){
      v = LolGameflowPatcherProductStateAction_t::Patching_E;
      return;
    }
    if(s == "Repairing"){
      v = LolGameflowPatcherProductStateAction_t::Repairing_E;
      return;
    }
    if(s == "Idle"){
      v = LolGameflowPatcherProductStateAction_t::Idle_E;
      return;
    }
    if(s == "CheckingForUpdates"){
      v = LolGameflowPatcherProductStateAction_t::CheckingForUpdates_E;
      return;
    }
  }
  inline std::string to_string(const LolGameflowPatcherProductStateAction_t& v) {
    switch(v) {
      case LolGameflowPatcherProductStateAction_t::Patching_E:
        return "Patching";
      case LolGameflowPatcherProductStateAction_t::Repairing_E:
        return "Repairing";
      case LolGameflowPatcherProductStateAction_t::Idle_E:
        return "Idle";
      case LolGameflowPatcherProductStateAction_t::CheckingForUpdates_E:
        return "CheckingForUpdates";
    }
  }

}
