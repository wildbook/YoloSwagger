#ifndef SWAGGER_TYPES_LolCollectionsAcsChampionGamesCollection_HPP
#define SWAGGER_TYPES_LolCollectionsAcsChampionGamesCollection_HPP
#include <json.hpp>
#include "LolCollectionsAcsChampionGames.hpp"
namespace leagueapi {
  // 
  struct LolCollectionsAcsChampionGamesCollection {
    // 
    std::vector<LolCollectionsAcsChampionGames> champions;
    // 
    uint32_t gameCount;
  };

  inline void to_json(nlohmann::json& j, const LolCollectionsAcsChampionGamesCollection& v) {
    j["champions"] = v.champions;
    j["gameCount"] = v.gameCount;
  }

  inline void from_json(const nlohmann::json& j, LolCollectionsAcsChampionGamesCollection& v) {
    v.champions = j.at("champions").get<std::vector<LolCollectionsAcsChampionGames>>;
    v.gameCount = j.at("gameCount").get<uint32_t>;
  }

}
#endif // SWAGGER_TYPES_LolCollectionsAcsChampionGamesCollection_HPP
