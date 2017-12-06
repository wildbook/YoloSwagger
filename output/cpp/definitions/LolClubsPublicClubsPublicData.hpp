#pragma once
#include <json.hpp>
#include <optional>
#include "LolClubsPublicClubTag.hpp"
namespace leagueapi {
  struct LolClubsPublicClubsPublicData_t {
    std::string availability;
    std::optional<std::string> lastSeenOnlineTimestamp;
    int32_t summonerIconId;
    uint64_t summonerId;
    std::string summonerName;
    LolClubsPublicClubTag_t tag;
  };

  inline void to_json(nlohmann::json& j, const LolClubsPublicClubsPublicData_t& v) {
    j["availability"] = v.availability;
    if(v.lastSeenOnlineTimestamp)
      j["lastSeenOnlineTimestamp"] = *v.lastSeenOnlineTimestamp;
    j["summonerIconId"] = v.summonerIconId;
    j["summonerId"] = v.summonerId;
    j["summonerName"] = v.summonerName;
    j["tag"] = v.tag;
  }

  inline void from_json(const nlohmann::json& j, LolClubsPublicClubsPublicData_t& v) {
    v.availability = j.at("availability").get<std::string>();
    if(auto it = j.find("lastSeenOnlineTimestamp"); it != j.end() !it->is_null())
      v.lastSeenOnlineTimestamp = it->get<std::string>();
    v.summonerIconId = j.at("summonerIconId").get<int32_t>();
    v.summonerId = j.at("summonerId").get<uint64_t>();
    v.summonerName = j.at("summonerName").get<std::string>();
    v.tag = j.at("tag").get<LolClubsPublicClubTag_t>();
  }
}
