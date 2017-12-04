#ifndef SWAGGER_TYPES_ClubsPresenceDataDto_HPP
#define SWAGGER_TYPES_ClubsPresenceDataDto_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct ClubsPresenceDataDto {
    // 
    std::string clubName;
    // 
    std::string clubTag;
    // 
    uint64_t summonerId;
    // 
    std::string summonerName;
  };

  void to_json(nlohmann::json& j, const ClubsPresenceDataDto& v) {
    j["clubName"] = v.clubName;
    j["clubTag"] = v.clubTag;
    j["summonerId"] = v.summonerId;
    j["summonerName"] = v.summonerName;
  }

  void from_json(const nlohmann::json& j, ClubsPresenceDataDto& v) {
    v.clubName = j.at("clubName").get<std::string>;
    v.clubTag = j.at("clubTag").get<std::string>;
    v.summonerId = j.at("summonerId").get<uint64_t>;
    v.summonerName = j.at("summonerName").get<std::string>;
  }

}
#endif // SWAGGER_TYPES_ClubsPresenceDataDto_HPP
