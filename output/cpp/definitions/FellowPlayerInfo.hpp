#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct FellowPlayerInfo_t {
    uint64_t championId;
    uint64_t summonerId;
    uint64_t teamId;
  };

  inline void to_json(nlohmann::json& j, const FellowPlayerInfo_t& v) {
    j["championId"] = v.championId;
    j["summonerId"] = v.summonerId;
    j["teamId"] = v.teamId;
  }

  inline void from_json(const nlohmann::json& j, FellowPlayerInfo_t& v) {
    v.championId = j.at("championId").get<uint64_t>();
    v.summonerId = j.at("summonerId").get<uint64_t>();
    v.teamId = j.at("teamId").get<uint64_t>();
  }
}
