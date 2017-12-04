#ifndef SWAGGER_TYPES_LootNameRefId_HPP
#define SWAGGER_TYPES_LootNameRefId_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct LootNameRefId {
    // 
    std::string lootName;
    // 
    std::string refId;
  };

  inline void to_json(nlohmann::json& j, const LootNameRefId& v) {
    j["lootName"] = v.lootName;
    j["refId"] = v.refId;
  }

  inline void from_json(const nlohmann::json& j, LootNameRefId& v) {
    v.lootName = j.at("lootName").get<std::string>;
    v.refId = j.at("refId").get<std::string>;
  }

}
#endif // SWAGGER_TYPES_LootNameRefId_HPP
