#ifndef SWAGGER_TYPES_LolLeaguesLeagueTeamMember_HPP
#define SWAGGER_TYPES_LolLeaguesLeagueTeamMember_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct LolLeaguesLeagueTeamMember {
    // 
    uint64_t id;
    // 
    std::string name;
    // 
    uint64_t totalGamePlayed;
    // 
    float winRate;
  };

  void to_json(nlohmann::json& j, const LolLeaguesLeagueTeamMember& v) {
    j["id"] = v.id;
    j["name"] = v.name;
    j["totalGamePlayed"] = v.totalGamePlayed;
    j["winRate"] = v.winRate;
  }

  void from_json(const nlohmann::json& j, LolLeaguesLeagueTeamMember& v) {
    v.id = j.at("id").get<uint64_t>;
    v.name = j.at("name").get<std::string>;
    v.totalGamePlayed = j.at("totalGamePlayed").get<uint64_t>;
    v.winRate = j.at("winRate").get<float>;
  }

}
#endif // SWAGGER_TYPES_LolLeaguesLeagueTeamMember_HPP
