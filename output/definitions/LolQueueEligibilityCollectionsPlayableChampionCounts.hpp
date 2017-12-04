#ifndef SWAGGER_TYPES_LolQueueEligibilityCollectionsPlayableChampionCounts_HPP
#define SWAGGER_TYPES_LolQueueEligibilityCollectionsPlayableChampionCounts_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct LolQueueEligibilityCollectionsPlayableChampionCounts {
    // 
    uint32_t championsOwned;
  };

  inline void to_json(nlohmann::json& j, const LolQueueEligibilityCollectionsPlayableChampionCounts& v) {
    j["championsOwned"] = v.championsOwned;
  }

  inline void from_json(const nlohmann::json& j, LolQueueEligibilityCollectionsPlayableChampionCounts& v) {
    v.championsOwned = j.at("championsOwned").get<uint32_t>;
  }

}
#endif // SWAGGER_TYPES_LolQueueEligibilityCollectionsPlayableChampionCounts_HPP
