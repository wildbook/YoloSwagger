#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct PlayerLootDTO_t {
    std::string refId;
    int32_t count;
    std::string lootName;
    int64_t expiryTime;
  };

  inline void to_json(nlohmann::json& j, const PlayerLootDTO_t& v) {
    j["refId"] = v.refId;
    j["count"] = v.count;
    j["lootName"] = v.lootName;
    j["expiryTime"] = v.expiryTime;
  }

  inline void from_json(const nlohmann::json& j, PlayerLootDTO_t& v) {
    v.refId = j.at("refId").get<std::string>();
    v.count = j.at("count").get<int32_t>();
    v.lootName = j.at("lootName").get<std::string>();
    v.expiryTime = j.at("expiryTime").get<int64_t>();
  }
  inline std::string to_string(const PlayerLootDTO_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
