#ifndef SWAGGER_TYPES_LolLeaguesLeagueTeamMember_HPP
#define SWAGGER_TYPES_LolLeaguesLeagueTeamMember_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct LolLeaguesLeagueTeamMember {
    // 
    float winRate;
    // 
    uint64_t id;
    // 
    uint64_t totalGamePlayed;
    // 
    std::string name;
  };

  inline void to_json(nlohmann::json& j, const LolLeaguesLeagueTeamMember& v) {
    j["winRate"] = v.winRate;
    j["id"] = v.id;
    j["totalGamePlayed"] = v.totalGamePlayed;
    j["name"] = v.name;
  }

  inline void from_json(const nlohmann::json& j, LolLeaguesLeagueTeamMember& v) {
    v.winRate = j.at("winRate").get<float>;
    v.id = j.at("id").get<uint64_t>;
    v.totalGamePlayed = j.at("totalGamePlayed").get<uint64_t>;
    v.name = j.at("name").get<std::string>;
  }

}
#endif // SWAGGER_TYPES_LolLeaguesLeagueTeamMember_HPP
