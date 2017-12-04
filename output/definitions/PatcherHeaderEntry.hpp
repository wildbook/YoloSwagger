#ifndef SWAGGER_TYPES_PatcherHeaderEntry_HPP
#define SWAGGER_TYPES_PatcherHeaderEntry_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct PatcherHeaderEntry {
    // 
    std::string key;
    // 
    std::string value;
  };

  void to_json(nlohmann::json& j, const PatcherHeaderEntry& v) {
    j["key"] = v.key;
    j["value"] = v.value;
  }

  void from_json(const nlohmann::json& j, PatcherHeaderEntry& v) {
    v.key = j.at("key").get<std::string>;
    v.value = j.at("value").get<std::string>;
  }

}
#endif // SWAGGER_TYPES_PatcherHeaderEntry_HPP
