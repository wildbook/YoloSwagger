#pragma once
#include <json.hpp>
#include <optional>
#include "LolClubsPublicClubTag.hpp"
namespace leagueapi {
  struct LolClubsPublicClubsPublicData_t {
    int32_t summonerIconId;
    std::string summonerName;
    LolClubsPublicClubTag_t tag;
    std::string availability;
    uint64_t summonerId;
    std::optional<std::string> lastSeenOnlineTimestamp;
  };

  inline void to_json(nlohmann::json& j, const LolClubsPublicClubsPublicData_t& v) {
    j["summonerIconId"] = v.summonerIconId;
    j["summonerName"] = v.summonerName;
    j["tag"] = v.tag;
    j["availability"] = v.availability;
    j["summonerId"] = v.summonerId;
    if(v.lastSeenOnlineTimestamp)
      j["lastSeenOnlineTimestamp"] = *v.lastSeenOnlineTimestamp;
  }

  inline void from_json(const nlohmann::json& j, LolClubsPublicClubsPublicData_t& v) {
    v.summonerIconId = j.at("summonerIconId").get<int32_t>();
    v.summonerName = j.at("summonerName").get<std::string>();
    v.tag = j.at("tag").get<LolClubsPublicClubTag_t>();
    v.availability = j.at("availability").get<std::string>();
    v.summonerId = j.at("summonerId").get<uint64_t>();
    if(auto it = j.find("lastSeenOnlineTimestamp"); it != j.end() && !it->is_null())
      v.lastSeenOnlineTimestamp = it->get<std::string>();
  }
  inline std::string to_string(const LolClubsPublicClubsPublicData_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
