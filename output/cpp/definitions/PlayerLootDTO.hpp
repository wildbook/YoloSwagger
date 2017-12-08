#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct PlayerLootDTO_t {
    int32_t_t count;
    std::string_t lootName;
    int64_t_t expiryTime;
    std::string_t refId;
  };

  inline void to_json(nlohmann::json& j, const PlayerLootDTO_t& v) {
    j["count"] = v.count;
    j["lootName"] = v.lootName;
    j["expiryTime"] = v.expiryTime;
    j["refId"] = v.refId;
  }

  inline void from_json(const nlohmann::json& j, PlayerLootDTO_t& v) {
    v.count = j.at("count").get<int32_t_t>();
    v.lootName = j.at("lootName").get<std::string_t>();
    v.expiryTime = j.at("expiryTime").get<int64_t_t>();
    v.refId = j.at("refId").get<std::string_t>();
  }
  inline std::string to_string(const PlayerLootDTO_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
