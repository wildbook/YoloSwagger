#pragma once
#include <json.hpp>
#include <optional>
#include "LolClubsPublicClubTag.hpp"
namespace leagueapi {
  struct LolClubsPublicClubsPublicData_t {
    int32_t summonerIconId;
    LolClubsPublicClubTag_t tag;
    std::optional<std::string> lastSeenOnlineTimestamp;
    std::string summonerName;
    std::string availability;
    uint64_t summonerId;
  };

  inline void to_json(nlohmann::json& j, const LolClubsPublicClubsPublicData_t& v) {
    j["summonerIconId"] = v.summonerIconId;
    j["tag"] = v.tag;
    if(v.lastSeenOnlineTimestamp)
      j["lastSeenOnlineTimestamp"] = *v.lastSeenOnlineTimestamp;
    j["summonerName"] = v.summonerName;
    j["availability"] = v.availability;
    j["summonerId"] = v.summonerId;
  }

  inline void from_json(const nlohmann::json& j, LolClubsPublicClubsPublicData_t& v) {
    v.summonerIconId = j.at("summonerIconId").get<int32_t>();
    v.tag = j.at("tag").get<LolClubsPublicClubTag_t>();
    if(auto it = j.find("lastSeenOnlineTimestamp"); it != j.end() && !it->is_null())
      v.lastSeenOnlineTimestamp = it->get<std::string>();
    v.summonerName = j.at("summonerName").get<std::string>();
    v.availability = j.at("availability").get<std::string>();
    v.summonerId = j.at("summonerId").get<uint64_t>();
  }
  inline std::string to_string(const LolClubsPublicClubsPublicData_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
