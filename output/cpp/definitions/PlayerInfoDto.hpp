#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct PlayerInfoDto_t {
    uint64_t_t currentAccountId;
    std::string_t currentPlatformId;
    uint64_t_t summonerId;
  };

  inline void to_json(nlohmann::json& j, const PlayerInfoDto_t& v) {
    j["currentAccountId"] = v.currentAccountId;
    j["currentPlatformId"] = v.currentPlatformId;
    j["summonerId"] = v.summonerId;
  }

  inline void from_json(const nlohmann::json& j, PlayerInfoDto_t& v) {
    v.currentAccountId = j.at("currentAccountId").get<uint64_t_t>();
    v.currentPlatformId = j.at("currentPlatformId").get<std::string_t>();
    v.summonerId = j.at("summonerId").get<uint64_t_t>();
  }
  inline std::string to_string(const PlayerInfoDto_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
