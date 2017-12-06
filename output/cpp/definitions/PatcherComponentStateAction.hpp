#pragma once
#include <json.hpp>
namespace leagueapi {
  enum class PatcherComponentStateAction_t {
    CheckingForUpdates_E = 1,
    Idle_E = 0,
    Patching_E = 2,
    Repairing_E = 3,
  };

  inline void to_json(nlohmann::json& j, const PatcherComponentStateAction_t& v) {
    switch(v) {
      case PatcherComponentStateAction_t::CheckingForUpdates_E:
        j = "CheckingForUpdates";
      break;
      case PatcherComponentStateAction_t::Idle_E:
        j = "Idle";
      break;
      case PatcherComponentStateAction_t::Patching_E:
        j = "Patching";
      break;
      case PatcherComponentStateAction_t::Repairing_E:
        j = "Repairing";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, PatcherComponentStateAction_t& v) {
    const auto& s = j.get<std::string>();
    if(s == "CheckingForUpdates"){
      v = PatcherComponentStateAction_t::CheckingForUpdates_E;
      return;
    }
    if(s == "Idle"){
      v = PatcherComponentStateAction_t::Idle_E;
      return;
    }
    if(s == "Patching"){
      v = PatcherComponentStateAction_t::Patching_E;
      return;
    }
    if(s == "Repairing"){
      v = PatcherComponentStateAction_t::Repairing_E;
      return;
    }
  }
}
