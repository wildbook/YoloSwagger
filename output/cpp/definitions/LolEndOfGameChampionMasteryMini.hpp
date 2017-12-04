#ifndef SWAGGER_TYPES_LolEndOfGameChampionMasteryMini_HPP
#define SWAGGER_TYPES_LolEndOfGameChampionMasteryMini_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct LolEndOfGameChampionMasteryMini {
    // 
    int64_t championLevel;
    // 
    uint64_t playerId;
    // 
    int32_t championId;
  };

  inline void to_json(nlohmann::json& j, const LolEndOfGameChampionMasteryMini& v) {
    j["championLevel"] = v.championLevel;
    j["playerId"] = v.playerId;
    j["championId"] = v.championId;
  }

  inline void from_json(const nlohmann::json& j, LolEndOfGameChampionMasteryMini& v) {
    v.championLevel = j.at("championLevel").get<int64_t>;
    v.playerId = j.at("playerId").get<uint64_t>;
    v.championId = j.at("championId").get<int32_t>;
  }

}
#endif // SWAGGER_TYPES_LolEndOfGameChampionMasteryMini_HPP
