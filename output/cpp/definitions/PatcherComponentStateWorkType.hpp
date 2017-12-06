#pragma once
#include <json.hpp>
namespace leagueapi {
  enum class PatcherComponentStateWorkType_t {
    Scanning_E = 0,
    Network_E = 1,
    Disk_E = 2,
  };

  inline void to_json(nlohmann::json& j, const PatcherComponentStateWorkType_t& v) {
    switch(v) {
      case PatcherComponentStateWorkType_t::Scanning_E:
        j = "Scanning";
      break;
      case PatcherComponentStateWorkType_t::Network_E:
        j = "Network";
      break;
      case PatcherComponentStateWorkType_t::Disk_E:
        j = "Disk";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, PatcherComponentStateWorkType_t& v) {
    const auto& s = j.get<std::string>();
    if(s == "Scanning"){
      v = PatcherComponentStateWorkType_t::Scanning_E;
      return;
    }
    if(s == "Network"){
      v = PatcherComponentStateWorkType_t::Network_E;
      return;
    }
    if(s == "Disk"){
      v = PatcherComponentStateWorkType_t::Disk_E;
      return;
    }
  }
}
