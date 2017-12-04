#ifndef SWAGGER_TYPES_LolCollectionsAcsChampionGamesCollection_HPP
#define SWAGGER_TYPES_LolCollectionsAcsChampionGamesCollection_HPP
#include <json.hpp>
#include "LolCollectionsAcsChampionGames.hpp"
namespace leagueapi {
  // 
  struct LolCollectionsAcsChampionGamesCollection {
    // 
    uint32_t gameCount;
    // 
    std::vector<LolCollectionsAcsChampionGames> champions;
  };

  inline void to_json(nlohmann::json& j, const LolCollectionsAcsChampionGamesCollection& v) {
    j["gameCount"] = v.gameCount;
    j["champions"] = v.champions;
  }

  inline void from_json(const nlohmann::json& j, LolCollectionsAcsChampionGamesCollection& v) {
    v.gameCount = j.at("gameCount").get<uint32_t>;
    v.champions = j.at("champions").get<std::vector<LolCollectionsAcsChampionGames>>;
  }

}
#endif // SWAGGER_TYPES_LolCollectionsAcsChampionGamesCollection_HPP
