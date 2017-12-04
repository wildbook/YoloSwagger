#ifndef SWAGGER_TYPES_LolCollectionsAcsChampionGames_HPP
#define SWAGGER_TYPES_LolCollectionsAcsChampionGames_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct LolCollectionsAcsChampionGames {
    // 
    int32_t championId;
    // 
    int32_t queue;
  };

  void to_json(nlohmann::json& j, const LolCollectionsAcsChampionGames& v) {
    j["championId"] = v.championId;
    j["queue"] = v.queue;
  }

  void from_json(const nlohmann::json& j, LolCollectionsAcsChampionGames& v) {
    v.championId = j.at("championId").get<int32_t>;
    v.queue = j.at("queue").get<int32_t>;
  }

}
#endif // SWAGGER_TYPES_LolCollectionsAcsChampionGames_HPP
