#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolLootPlayerLootNotification_t {
    int32_t count;
    std::string id;
    bool acknowledged;
  };

  inline void to_json(nlohmann::json& j, const LolLootPlayerLootNotification_t& v) {
    j["count"] = v.count;
    j["id"] = v.id;
    j["acknowledged"] = v.acknowledged;
  }

  inline void from_json(const nlohmann::json& j, LolLootPlayerLootNotification_t& v) {
    v.count = j.at("count").get<int32_t>();
    v.id = j.at("id").get<std::string>();
    v.acknowledged = j.at("acknowledged").get<bool>();
  }
  inline std::string to_string(const LolLootPlayerLootNotification_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
