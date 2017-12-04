#ifndef SWAGGER_TYPES_LolAcsAcsChampionGames_HPP
#define SWAGGER_TYPES_LolAcsAcsChampionGames_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct LolAcsAcsChampionGames {
    // 
    int32_t championId;
    // 
    std::string lane;
    // 
    int32_t queue;
    // 
    std::string role;
  };

  void to_json(nlohmann::json& j, const LolAcsAcsChampionGames& v) {
    j["championId"] = v.championId;
    j["lane"] = v.lane;
    j["queue"] = v.queue;
    j["role"] = v.role;
  }

  void from_json(const nlohmann::json& j, LolAcsAcsChampionGames& v) {
    v.championId = j.at("championId").get<int32_t>;
    v.lane = j.at("lane").get<std::string>;
    v.queue = j.at("queue").get<int32_t>;
    v.role = j.at("role").get<std::string>;
  }

}
#endif // SWAGGER_TYPES_LolAcsAcsChampionGames_HPP
