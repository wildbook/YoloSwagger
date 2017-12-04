#ifndef SWAGGER_TYPES_PatcherComponentStateWorkType_HPP
#define SWAGGER_TYPES_PatcherComponentStateWorkType_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  enum class PatcherComponentStateWorkType {
    // 
    Scanning = 0,
    // 
    Disk = 2,
    // 
    Network = 1,
  };

  inline void to_json(nlohmann::json& j, const PatcherComponentStateWorkType& v) {
    switch(v) {
      case PatcherComponentStateWorkType::Scanning:
        j = "Scanning";
      break;
      case PatcherComponentStateWorkType::Disk:
        j = "Disk";
      break;
      case PatcherComponentStateWorkType::Network:
        j = "Network";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, PatcherComponentStateWorkType& v) {
    const auto& s = j.get<std::string>();
    if(s == "Scanning"){
      v = PatcherComponentStateWorkType::Scanning;
      return;
    }
    if(s == "Disk"){
      v = PatcherComponentStateWorkType::Disk;
      return;
    }
    if(s == "Network"){
      v = PatcherComponentStateWorkType::Network;
      return;
    }
  }

}
#endif // SWAGGER_TYPES_PatcherComponentStateWorkType_HPP
