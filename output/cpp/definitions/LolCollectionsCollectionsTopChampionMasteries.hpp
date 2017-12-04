#ifndef SWAGGER_TYPES_LolCollectionsCollectionsTopChampionMasteries_HPP
#define SWAGGER_TYPES_LolCollectionsCollectionsTopChampionMasteries_HPP
#include <json.hpp>
#include "LolCollectionsCollectionsChampionMastery.hpp"
namespace leagueapi {
  // 
  struct LolCollectionsCollectionsTopChampionMasteries {
    // 
    std::vector<LolCollectionsCollectionsChampionMastery> masteries;
    // 
    uint64_t score;
    // 
    uint64_t summonerId;
  };

  inline void to_json(nlohmann::json& j, const LolCollectionsCollectionsTopChampionMasteries& v) {
    j["masteries"] = v.masteries;
    j["score"] = v.score;
    j["summonerId"] = v.summonerId;
  }

  inline void from_json(const nlohmann::json& j, LolCollectionsCollectionsTopChampionMasteries& v) {
    v.masteries = j.at("masteries").get<std::vector<LolCollectionsCollectionsChampionMastery>>;
    v.score = j.at("score").get<uint64_t>;
    v.summonerId = j.at("summonerId").get<uint64_t>;
  }

}
#endif // SWAGGER_TYPES_LolCollectionsCollectionsTopChampionMasteries_HPP
