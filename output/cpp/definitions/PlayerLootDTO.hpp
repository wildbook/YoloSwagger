#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct PlayerLootDTO_t {
    int64_t expiryTime;
    int32_t count;
    std::string refId;
    std::string lootName;
  };

  inline void to_json(nlohmann::json& j, const PlayerLootDTO_t& v) {
    j["expiryTime"] = v.expiryTime;
    j["count"] = v.count;
    j["refId"] = v.refId;
    j["lootName"] = v.lootName;
  }

  inline void from_json(const nlohmann::json& j, PlayerLootDTO_t& v) {
    v.expiryTime = j.at("expiryTime").get<int64_t>();
    v.count = j.at("count").get<int32_t>();
    v.refId = j.at("refId").get<std::string>();
    v.lootName = j.at("lootName").get<std::string>();
  }
  inline std::string to_string(const PlayerLootDTO_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
