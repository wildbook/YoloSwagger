#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct FellowPlayerInfo_t {
    uint64_t teamId;
    uint64_t championId;
    uint64_t summonerId;
  };

  inline void to_json(nlohmann::json& j, const FellowPlayerInfo_t& v) {
    j["teamId"] = v.teamId;
    j["championId"] = v.championId;
    j["summonerId"] = v.summonerId;
  }

  inline void from_json(const nlohmann::json& j, FellowPlayerInfo_t& v) {
    v.teamId = j.at("teamId").get<uint64_t>();
    v.championId = j.at("championId").get<uint64_t>();
    v.summonerId = j.at("summonerId").get<uint64_t>();
  }
  inline std::string to_string(const FellowPlayerInfo_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
