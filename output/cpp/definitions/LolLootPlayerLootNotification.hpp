#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolLootPlayerLootNotification_t {
    std::string id;
    int32_t count;
    bool acknowledged;
  };

  inline void to_json(nlohmann::json& j, const LolLootPlayerLootNotification_t& v) {
    j["id"] = v.id;
    j["count"] = v.count;
    j["acknowledged"] = v.acknowledged;
  }

  inline void from_json(const nlohmann::json& j, LolLootPlayerLootNotification_t& v) {
    v.id = j.at("id").get<std::string>();
    v.count = j.at("count").get<int32_t>();
    v.acknowledged = j.at("acknowledged").get<bool>();
  }
  inline std::string to_string(const LolLootPlayerLootNotification_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
