#ifndef SWAGGER_TYPES_LolClubsPublicClubsPublicData_HPP
#define SWAGGER_TYPES_LolClubsPublicClubsPublicData_HPP
#include <json.hpp>
#include "LolClubsPublicClubTag.hpp"
namespace leagueapi {
  // 
  struct LolClubsPublicClubsPublicData {
    // 
    std::string summonerName;
    // 
    std::string availability;
    // 
    LolClubsPublicClubTag tag;
    // 
    std::string lastSeenOnlineTimestamp;
    // 
    int32_t summonerIconId;
    // 
    uint64_t summonerId;
  };

  inline void to_json(nlohmann::json& j, const LolClubsPublicClubsPublicData& v) {
    j["summonerName"] = v.summonerName;
    j["availability"] = v.availability;
    j["tag"] = v.tag;
    j["lastSeenOnlineTimestamp"] = v.lastSeenOnlineTimestamp;
    j["summonerIconId"] = v.summonerIconId;
    j["summonerId"] = v.summonerId;
  }

  inline void from_json(const nlohmann::json& j, LolClubsPublicClubsPublicData& v) {
    v.summonerName = j.at("summonerName").get<std::string>;
    v.availability = j.at("availability").get<std::string>;
    v.tag = j.at("tag").get<LolClubsPublicClubTag>;
    v.lastSeenOnlineTimestamp = j.at("lastSeenOnlineTimestamp").get<std::string>;
    v.summonerIconId = j.at("summonerIconId").get<int32_t>;
    v.summonerId = j.at("summonerId").get<uint64_t>;
  }

}
#endif // SWAGGER_TYPES_LolClubsPublicClubsPublicData_HPP
