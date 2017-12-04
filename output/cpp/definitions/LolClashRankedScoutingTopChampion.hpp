#ifndef SWAGGER_TYPES_LolClashRankedScoutingTopChampion_HPP
#define SWAGGER_TYPES_LolClashRankedScoutingTopChampion_HPP
#include <json.hpp>
#include "LolClashKdaClassification.hpp"
namespace leagueapi {
  // 
  struct LolClashRankedScoutingTopChampion {
    // 
    int32_t championId;
    // 
    int32_t gameCount;
    // 
    std::string kda;
    // 
    int32_t rank;
    // 
    int32_t winRate;
    // 
    LolClashKdaClassification kdaClassification;
    // 
    int32_t winCount;
  };

  inline void to_json(nlohmann::json& j, const LolClashRankedScoutingTopChampion& v) {
    j["championId"] = v.championId;
    j["gameCount"] = v.gameCount;
    j["kda"] = v.kda;
    j["rank"] = v.rank;
    j["winRate"] = v.winRate;
    j["kdaClassification"] = v.kdaClassification;
    j["winCount"] = v.winCount;
  }

  inline void from_json(const nlohmann::json& j, LolClashRankedScoutingTopChampion& v) {
    v.championId = j.at("championId").get<int32_t>;
    v.gameCount = j.at("gameCount").get<int32_t>;
    v.kda = j.at("kda").get<std::string>;
    v.rank = j.at("rank").get<int32_t>;
    v.winRate = j.at("winRate").get<int32_t>;
    v.kdaClassification = j.at("kdaClassification").get<LolClashKdaClassification>;
    v.winCount = j.at("winCount").get<int32_t>;
  }

}
#endif // SWAGGER_TYPES_LolClashRankedScoutingTopChampion_HPP
