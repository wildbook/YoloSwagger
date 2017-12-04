#ifndef SWAGGER_TYPES_LolClubsPublicClubsPublicData_HPP
#define SWAGGER_TYPES_LolClubsPublicClubsPublicData_HPP
#include <json.hpp>
#include "LolClubsPublicClubTag.hpp"
namespace leagueapi {
  // 
  struct LolClubsPublicClubsPublicData {
    // 
    std::string availability;
    // 
    std::string lastSeenOnlineTimestamp;
    // 
    int32_t summonerIconId;
    // 
    uint64_t summonerId;
    // 
    std::string summonerName;
    // 
    LolClubsPublicClubTag tag;
  };

  inline void to_json(nlohmann::json& j, const LolClubsPublicClubsPublicData& v) {
    j["availability"] = v.availability;
    j["lastSeenOnlineTimestamp"] = v.lastSeenOnlineTimestamp;
    j["summonerIconId"] = v.summonerIconId;
    j["summonerId"] = v.summonerId;
    j["summonerName"] = v.summonerName;
    j["tag"] = v.tag;
  }

  inline void from_json(const nlohmann::json& j, LolClubsPublicClubsPublicData& v) {
    v.availability = j.at("availability").get<std::string>;
    v.lastSeenOnlineTimestamp = j.at("lastSeenOnlineTimestamp").get<std::string>;
    v.summonerIconId = j.at("summonerIconId").get<int32_t>;
    v.summonerId = j.at("summonerId").get<uint64_t>;
    v.summonerName = j.at("summonerName").get<std::string>;
    v.tag = j.at("tag").get<LolClubsPublicClubTag>;
  }

}
#endif // SWAGGER_TYPES_LolClubsPublicClubsPublicData_HPP
