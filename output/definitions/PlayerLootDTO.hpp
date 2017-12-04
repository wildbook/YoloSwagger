#ifndef SWAGGER_TYPES_PlayerLootDTO_HPP
#define SWAGGER_TYPES_PlayerLootDTO_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct PlayerLootDTO {
    // 
    int32_t count;
    // 
    int64_t expiryTime;
    // 
    std::string lootName;
    // 
    std::string refId;
  };

  inline void to_json(nlohmann::json& j, const PlayerLootDTO& v) {
    j["count"] = v.count;
    j["expiryTime"] = v.expiryTime;
    j["lootName"] = v.lootName;
    j["refId"] = v.refId;
  }

  inline void from_json(const nlohmann::json& j, PlayerLootDTO& v) {
    v.count = j.at("count").get<int32_t>;
    v.expiryTime = j.at("expiryTime").get<int64_t>;
    v.lootName = j.at("lootName").get<std::string>;
    v.refId = j.at("refId").get<std::string>;
  }

}
#endif // SWAGGER_TYPES_PlayerLootDTO_HPP
