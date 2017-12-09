#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct PlayerInfoDto_t {
    std::string currentPlatformId;
    uint64_t currentAccountId;
    uint64_t summonerId;
  };

  inline void to_json(nlohmann::json& j, const PlayerInfoDto_t& v) {
    j["currentPlatformId"] = v.currentPlatformId;
    j["currentAccountId"] = v.currentAccountId;
    j["summonerId"] = v.summonerId;
  }

  inline void from_json(const nlohmann::json& j, PlayerInfoDto_t& v) {
    v.currentPlatformId = j.at("currentPlatformId").get<std::string>();
    v.currentAccountId = j.at("currentAccountId").get<uint64_t>();
    v.summonerId = j.at("summonerId").get<uint64_t>();
  }
  inline std::string to_string(const PlayerInfoDto_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
