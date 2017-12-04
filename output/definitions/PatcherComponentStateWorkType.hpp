#ifndef SWAGGER_TYPES_PatcherComponentStateWorkType_HPP
#define SWAGGER_TYPES_PatcherComponentStateWorkType_HPP
#include <json.hpp>
namespace test {
  // 
  enum class PatcherComponentStateWorkType {
'    // 
    Disk = 2,
    // 
    Network = 1,
    // 
    Scanning = 0,
  };

  void to_json(nlohmann::json& j, const PatcherComponentStateWorkType& v) {
    switch(v) {
      case PatcherComponentStateWorkType::Disk:
        j = "Disk";
      break;
      case PatcherComponentStateWorkType::Network:
        j = "Network";
      break;
      case PatcherComponentStateWorkType::Scanning:
        j = "Scanning";
      break;
    }
  }

  void from_json(const nlohmann::json& j, PatcherComponentStateWorkType& v) {
    const auto s& = j.get<std::string>();
    if(s == "Disk"){
      v = PatcherComponentStateWorkType::Disk;
      return;
    }
    if(s == "Network"){
      v = PatcherComponentStateWorkType::Network;
      return;
    }
    if(s == "Scanning"){
      v = PatcherComponentStateWorkType::Scanning;
      return;
    }
  }

}
#endif // SWAGGER_TYPES_PatcherComponentStateWorkType_HPP
