#ifndef SWAGGER_TYPES_LolLootPlayerLootNotification_HPP
#define SWAGGER_TYPES_LolLootPlayerLootNotification_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct LolLootPlayerLootNotification {
    // 
    int32_t count;
    // 
    bool acknowledged;
    // 
    std::string id;
  };

  inline void to_json(nlohmann::json& j, const LolLootPlayerLootNotification& v) {
    j["count"] = v.count;
    j["acknowledged"] = v.acknowledged;
    j["id"] = v.id;
  }

  inline void from_json(const nlohmann::json& j, LolLootPlayerLootNotification& v) {
    v.count = j.at("count").get<int32_t>;
    v.acknowledged = j.at("acknowledged").get<bool>;
    v.id = j.at("id").get<std::string>;
  }

}
#endif // SWAGGER_TYPES_LolLootPlayerLootNotification_HPP
