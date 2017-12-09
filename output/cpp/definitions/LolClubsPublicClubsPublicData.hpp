#pragma once
#include <json.hpp>
#include <optional>
#include "LolClubsPublicClubTag.hpp"
namespace leagueapi {
  struct LolClubsPublicClubsPublicData_t {
    std::optional<std::string> lastSeenOnlineTimestamp;
    LolClubsPublicClubTag_t tag;
    std::string availability;
    std::string summonerName;
    int32_t summonerIconId;
    uint64_t summonerId;
  };

  inline void to_json(nlohmann::json& j, const LolClubsPublicClubsPublicData_t& v) {
    if(v.lastSeenOnlineTimestamp)
      j["lastSeenOnlineTimestamp"] = *v.lastSeenOnlineTimestamp;
    j["tag"] = v.tag;
    j["availability"] = v.availability;
    j["summonerName"] = v.summonerName;
    j["summonerIconId"] = v.summonerIconId;
    j["summonerId"] = v.summonerId;
  }

  inline void from_json(const nlohmann::json& j, LolClubsPublicClubsPublicData_t& v) {
    if(auto it = j.find("lastSeenOnlineTimestamp"); it != j.end() && !it->is_null())
      v.lastSeenOnlineTimestamp = it->get<std::string>();
    v.tag = j.at("tag").get<LolClubsPublicClubTag_t>();
    v.availability = j.at("availability").get<std::string>();
    v.summonerName = j.at("summonerName").get<std::string>();
    v.summonerIconId = j.at("summonerIconId").get<int32_t>();
    v.summonerId = j.at("summonerId").get<uint64_t>();
  }
  inline std::string to_string(const LolClubsPublicClubsPublicData_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
