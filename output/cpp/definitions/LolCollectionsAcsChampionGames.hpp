#ifndef SWAGGER_TYPES_LolCollectionsAcsChampionGames_HPP
#define SWAGGER_TYPES_LolCollectionsAcsChampionGames_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct LolCollectionsAcsChampionGames {
    // 
    int32_t queue;
    // 
    int32_t championId;
  };

  inline void to_json(nlohmann::json& j, const LolCollectionsAcsChampionGames& v) {
    j["queue"] = v.queue;
    j["championId"] = v.championId;
  }

  inline void from_json(const nlohmann::json& j, LolCollectionsAcsChampionGames& v) {
    v.queue = j.at("queue").get<int32_t>;
    v.championId = j.at("championId").get<int32_t>;
  }

}
#endif // SWAGGER_TYPES_LolCollectionsAcsChampionGames_HPP
