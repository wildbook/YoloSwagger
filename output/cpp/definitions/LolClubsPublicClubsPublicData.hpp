#pragma once
#include <json.hpp>
#include <optional>
#include "LolClubsPublicClubTag.hpp"
namespace leagueapi {
  struct LolClubsPublicClubsPublicData_t {
    std::string_t summonerName;
    std::string_t availability;
    LolClubsPublicClubTag_t tag;
    std::optional<std::string_t> lastSeenOnlineTimestamp;
    int32_t_t summonerIconId;
    uint64_t_t summonerId;
  };

  inline void to_json(nlohmann::json& j, const LolClubsPublicClubsPublicData_t& v) {
    j["summonerName"] = v.summonerName;
    j["availability"] = v.availability;
    j["tag"] = v.tag;
    if(v.lastSeenOnlineTimestamp)
      j["lastSeenOnlineTimestamp"] = *v.lastSeenOnlineTimestamp;
    j["summonerIconId"] = v.summonerIconId;
    j["summonerId"] = v.summonerId;
  }

  inline void from_json(const nlohmann::json& j, LolClubsPublicClubsPublicData_t& v) {
    v.summonerName = j.at("summonerName").get<std::string_t>();
    v.availability = j.at("availability").get<std::string_t>();
    v.tag = j.at("tag").get<LolClubsPublicClubTag_t>();
    if(auto it = j.find("lastSeenOnlineTimestamp"); it != j.end() && !it->is_null())
      v.lastSeenOnlineTimestamp = it->get<std::string_t>();
    v.summonerIconId = j.at("summonerIconId").get<int32_t_t>();
    v.summonerId = j.at("summonerId").get<uint64_t_t>();
  }
  inline std::string to_string(const LolClubsPublicClubsPublicData_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
