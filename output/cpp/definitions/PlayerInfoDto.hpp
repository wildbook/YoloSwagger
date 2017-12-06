#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct PlayerInfoDto_t {
    uint64_t summonerId;
    uint64_t currentAccountId;
    std::string currentPlatformId;
  };

  inline void to_json(nlohmann::json& j, const PlayerInfoDto_t& v) {
    j["summonerId"] = v.summonerId;
    j["currentAccountId"] = v.currentAccountId;
    j["currentPlatformId"] = v.currentPlatformId;
  }

  inline void from_json(const nlohmann::json& j, PlayerInfoDto_t& v) {
    v.summonerId = j.at("summonerId").get<uint64_t>();
    v.currentAccountId = j.at("currentAccountId").get<uint64_t>();
    v.currentPlatformId = j.at("currentPlatformId").get<std::string>();
  }
}
