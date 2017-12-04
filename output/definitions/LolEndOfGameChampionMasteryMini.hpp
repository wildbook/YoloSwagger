#ifndef SWAGGER_TYPES_LolEndOfGameChampionMasteryMini_HPP
#define SWAGGER_TYPES_LolEndOfGameChampionMasteryMini_HPP
#include <json.hpp>
namespace test {
  // 
  struct LolEndOfGameChampionMasteryMini {
'    // 
    int32_t championId;
    // 
    int64_t championLevel;
    // 
    uint64_t playerId;
  };

  void to_json(nlohmann::json& j, const LolEndOfGameChampionMasteryMini& v) {
    j["championId"] = v.championId;
    j["championLevel"] = v.championLevel;
    j["playerId"] = v.playerId;
  }

  void from_json(const nlohmann::json& j, LolEndOfGameChampionMasteryMini& v) {
    v.championId = j.at("championId").get<int32_t>;
    v.championLevel = j.at("championLevel").get<int64_t>;
    v.playerId = j.at("playerId").get<uint64_t>;
  }

}
#endif // SWAGGER_TYPES_LolEndOfGameChampionMasteryMini_HPP
