#ifndef SWAGGER_TYPES_ClubsPresenceDataDto_HPP
#define SWAGGER_TYPES_ClubsPresenceDataDto_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct ClubsPresenceDataDto {
    // 
    std::string clubTag;
    // 
    std::string clubName;
    // 
    std::string summonerName;
    // 
    uint64_t summonerId;
  };

  inline void to_json(nlohmann::json& j, const ClubsPresenceDataDto& v) {
    j["clubTag"] = v.clubTag;
    j["clubName"] = v.clubName;
    j["summonerName"] = v.summonerName;
    j["summonerId"] = v.summonerId;
  }

  inline void from_json(const nlohmann::json& j, ClubsPresenceDataDto& v) {
    v.clubTag = j.at("clubTag").get<std::string>;
    v.clubName = j.at("clubName").get<std::string>;
    v.summonerName = j.at("summonerName").get<std::string>;
    v.summonerId = j.at("summonerId").get<uint64_t>;
  }

}
#endif // SWAGGER_TYPES_ClubsPresenceDataDto_HPP
