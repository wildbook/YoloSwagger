#pragma once
#include <json.hpp>
#include <optional>
#include "LolClubsPublicClubTag.hpp"
namespace leagueapi {
  struct LolClubsPublicClubsPublicData_t {
    uint64_t summonerId;
    std::string availability;
    int32_t summonerIconId;
    std::string summonerName;
    std::optional<std::string> lastSeenOnlineTimestamp;
    LolClubsPublicClubTag_t tag;
  };

  inline void to_json(nlohmann::json& j, const LolClubsPublicClubsPublicData_t& v) {
    j["summonerId"] = v.summonerId;
    j["availability"] = v.availability;
    j["summonerIconId"] = v.summonerIconId;
    j["summonerName"] = v.summonerName;
    if(v.lastSeenOnlineTimestamp)
      j["lastSeenOnlineTimestamp"] = *v.lastSeenOnlineTimestamp;
    j["tag"] = v.tag;
  }

  inline void from_json(const nlohmann::json& j, LolClubsPublicClubsPublicData_t& v) {
    v.summonerId = j.at("summonerId").get<uint64_t>();
    v.availability = j.at("availability").get<std::string>();
    v.summonerIconId = j.at("summonerIconId").get<int32_t>();
    v.summonerName = j.at("summonerName").get<std::string>();
    if(auto it = j.find("lastSeenOnlineTimestamp"); it != j.end() && !it->is_null())
      v.lastSeenOnlineTimestamp = it->get<std::string>();
    v.tag = j.at("tag").get<LolClubsPublicClubTag_t>();
  }
  inline std::string to_string(const LolClubsPublicClubsPublicData_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
