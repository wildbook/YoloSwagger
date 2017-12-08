#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolLootPlayerLootNotification_t {
    int32_t_t count;
    bool_t acknowledged;
    std::string_t id;
  };

  inline void to_json(nlohmann::json& j, const LolLootPlayerLootNotification_t& v) {
    j["count"] = v.count;
    j["acknowledged"] = v.acknowledged;
    j["id"] = v.id;
  }

  inline void from_json(const nlohmann::json& j, LolLootPlayerLootNotification_t& v) {
    v.count = j.at("count").get<int32_t_t>();
    v.acknowledged = j.at("acknowledged").get<bool_t>();
    v.id = j.at("id").get<std::string_t>();
  }
  inline std::string to_string(const LolLootPlayerLootNotification_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
