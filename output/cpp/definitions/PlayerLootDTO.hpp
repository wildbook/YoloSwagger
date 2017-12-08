#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct PlayerLootDTO_t {
    int32_t count;
    std::string lootName;
    int64_t expiryTime;
    std::string refId;
  };

  inline void to_json(nlohmann::json& j, const PlayerLootDTO_t& v) {
    j["count"] = v.count;
    j["lootName"] = v.lootName;
    j["expiryTime"] = v.expiryTime;
    j["refId"] = v.refId;
  }

  inline void from_json(const nlohmann::json& j, PlayerLootDTO_t& v) {
    v.count = j.at("count").get<int32_t>();
    v.lootName = j.at("lootName").get<std::string>();
    v.expiryTime = j.at("expiryTime").get<int64_t>();
    v.refId = j.at("refId").get<std::string>();
  }
  inline std::string to_string(const PlayerLootDTO_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
