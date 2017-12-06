#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct ClubPlayer_t {
    uint64_t accountId;
    std::string summonerName;
    uint64_t summonerId;
    int32_t summonerIconId;
  };

  inline void to_json(nlohmann::json& j, const ClubPlayer_t& v) {
    j["accountId"] = v.accountId;
    j["summonerName"] = v.summonerName;
    j["summonerId"] = v.summonerId;
    j["summonerIconId"] = v.summonerIconId;
  }

  inline void from_json(const nlohmann::json& j, ClubPlayer_t& v) {
    v.accountId = j.at("accountId").get<uint64_t>();
    v.summonerName = j.at("summonerName").get<std::string>();
    v.summonerId = j.at("summonerId").get<uint64_t>();
    v.summonerIconId = j.at("summonerIconId").get<int32_t>();
  }
}
