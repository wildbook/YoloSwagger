#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolSummonerSummonerIdAndIcon_t {
    uint64_t summonerId;
    int32_t profileIconId;
  };

  inline void to_json(nlohmann::json& j, const LolSummonerSummonerIdAndIcon_t& v) {
    j["summonerId"] = v.summonerId;
    j["profileIconId"] = v.profileIconId;
  }

  inline void from_json(const nlohmann::json& j, LolSummonerSummonerIdAndIcon_t& v) {
    v.summonerId = j.at("summonerId").get<uint64_t>();
    v.profileIconId = j.at("profileIconId").get<int32_t>();
  }
}
