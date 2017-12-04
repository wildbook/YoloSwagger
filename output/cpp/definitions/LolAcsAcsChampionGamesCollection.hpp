#ifndef SWAGGER_TYPES_LolAcsAcsChampionGamesCollection_HPP
#define SWAGGER_TYPES_LolAcsAcsChampionGamesCollection_HPP
#include <json.hpp>
#include "LolAcsAcsChampionGames.hpp"
namespace leagueapi {
  // 
  struct LolAcsAcsChampionGamesCollection {
    // 
    uint32_t gameCount;
    // 
    std::vector<LolAcsAcsChampionGames> champions;
  };

  inline void to_json(nlohmann::json& j, const LolAcsAcsChampionGamesCollection& v) {
    j["gameCount"] = v.gameCount;
    j["champions"] = v.champions;
  }

  inline void from_json(const nlohmann::json& j, LolAcsAcsChampionGamesCollection& v) {
    v.gameCount = j.at("gameCount").get<uint32_t>;
    v.champions = j.at("champions").get<std::vector<LolAcsAcsChampionGames>>;
  }

}
#endif // SWAGGER_TYPES_LolAcsAcsChampionGamesCollection_HPP
