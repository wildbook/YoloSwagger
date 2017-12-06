#pragma once
#include <json.hpp>
#include <optional>
#include "LolClubsPublicClubTag.hpp"
namespace leagueapi {
  struct LolClubsPublicClubsPublicData_t {
    std::string availability;
    LolClubsPublicClubTag_t tag;
    std::string summonerName;
    std::optional<std::string> lastSeenOnlineTimestamp;
    uint64_t summonerId;
    int32_t summonerIconId;
  };

  inline void to_json(nlohmann::json& j, const LolClubsPublicClubsPublicData_t& v) {
    j["availability"] = v.availability;
    j["tag"] = v.tag;
    j["summonerName"] = v.summonerName;
    if(v.lastSeenOnlineTimestamp)
      j["lastSeenOnlineTimestamp"] = *v.lastSeenOnlineTimestamp;
    j["summonerId"] = v.summonerId;
    j["summonerIconId"] = v.summonerIconId;
  }

  inline void from_json(const nlohmann::json& j, LolClubsPublicClubsPublicData_t& v) {
    v.availability = j.at("availability").get<std::string>();
    v.tag = j.at("tag").get<LolClubsPublicClubTag_t>();
    v.summonerName = j.at("summonerName").get<std::string>();
    if(auto it = j.find("lastSeenOnlineTimestamp"); it != j.end() !it->is_null())
      v.lastSeenOnlineTimestamp = it->get<std::string>();
    v.summonerId = j.at("summonerId").get<uint64_t>();
    v.summonerIconId = j.at("summonerIconId").get<int32_t>();
  }
}
