#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolLootPlayerLootNotification_t {
    bool acknowledged;
    std::string id;
    int32_t count;
  };

  inline void to_json(nlohmann::json& j, const LolLootPlayerLootNotification_t& v) {
    j["acknowledged"] = v.acknowledged;
    j["id"] = v.id;
    j["count"] = v.count;
  }

  inline void from_json(const nlohmann::json& j, LolLootPlayerLootNotification_t& v) {
    v.acknowledged = j.at("acknowledged").get<bool>();
    v.id = j.at("id").get<std::string>();
    v.count = j.at("count").get<int32_t>();
  }
}
