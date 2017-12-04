#ifndef SWAGGER_TYPES_LolAcsAcsChampionGames_HPP
#define SWAGGER_TYPES_LolAcsAcsChampionGames_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct LolAcsAcsChampionGames {
    // 
    int32_t queue;
    // 
    std::string role;
    // 
    std::string lane;
    // 
    int32_t championId;
  };

  inline void to_json(nlohmann::json& j, const LolAcsAcsChampionGames& v) {
    j["queue"] = v.queue;
    j["role"] = v.role;
    j["lane"] = v.lane;
    j["championId"] = v.championId;
  }

  inline void from_json(const nlohmann::json& j, LolAcsAcsChampionGames& v) {
    v.queue = j.at("queue").get<int32_t>;
    v.role = j.at("role").get<std::string>;
    v.lane = j.at("lane").get<std::string>;
    v.championId = j.at("championId").get<int32_t>;
  }

}
#endif // SWAGGER_TYPES_LolAcsAcsChampionGames_HPP
