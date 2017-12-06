#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolLootPlayerLootNotification_t {
    bool acknowledged;
    int32_t count;
    std::string id;
  };

  inline void to_json(nlohmann::json& j, const LolLootPlayerLootNotification_t& v) {
    j["acknowledged"] = v.acknowledged;
    j["count"] = v.count;
    j["id"] = v.id;
  }

  inline void from_json(const nlohmann::json& j, LolLootPlayerLootNotification_t& v) {
    v.acknowledged = j.at("acknowledged").get<bool>();
    v.count = j.at("count").get<int32_t>();
    v.id = j.at("id").get<std::string>();
  }
}
