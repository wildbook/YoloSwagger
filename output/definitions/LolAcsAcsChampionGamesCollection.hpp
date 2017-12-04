#ifndef SWAGGER_TYPES_LolAcsAcsChampionGamesCollection_HPP
#define SWAGGER_TYPES_LolAcsAcsChampionGamesCollection_HPP
#include <json.hpp>
#include "LolAcsAcsChampionGames.hpp"
namespace leagueapi {
  // 
  struct LolAcsAcsChampionGamesCollection {
    // 
    std::vector<LolAcsAcsChampionGames> champions;
    // 
    uint32_t gameCount;
  };

  inline void to_json(nlohmann::json& j, const LolAcsAcsChampionGamesCollection& v) {
    j["champions"] = v.champions;
    j["gameCount"] = v.gameCount;
  }

  inline void from_json(const nlohmann::json& j, LolAcsAcsChampionGamesCollection& v) {
    v.champions = j.at("champions").get<std::vector<LolAcsAcsChampionGames>>;
    v.gameCount = j.at("gameCount").get<uint32_t>;
  }

}
#endif // SWAGGER_TYPES_LolAcsAcsChampionGamesCollection_HPP
