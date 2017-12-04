#ifndef SWAGGER_TYPES_PatcherHeaderEntry_HPP
#define SWAGGER_TYPES_PatcherHeaderEntry_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct PatcherHeaderEntry {
    // 
    std::string value;
    // 
    std::string key;
  };

  inline void to_json(nlohmann::json& j, const PatcherHeaderEntry& v) {
    j["value"] = v.value;
    j["key"] = v.key;
  }

  inline void from_json(const nlohmann::json& j, PatcherHeaderEntry& v) {
    v.value = j.at("value").get<std::string>;
    v.key = j.at("key").get<std::string>;
  }

}
#endif // SWAGGER_TYPES_PatcherHeaderEntry_HPP
