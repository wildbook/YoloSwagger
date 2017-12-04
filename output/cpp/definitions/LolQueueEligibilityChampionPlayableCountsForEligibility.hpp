#ifndef SWAGGER_TYPES_LolQueueEligibilityChampionPlayableCountsForEligibility_HPP
#define SWAGGER_TYPES_LolQueueEligibilityChampionPlayableCountsForEligibility_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct LolQueueEligibilityChampionPlayableCountsForEligibility {
    // 
    uint32_t championsOwned;
    // 
    uint32_t championsFreeToPlay;
    // 
    uint32_t championsRented;
    // 
    uint32_t championsFreeToPlayReward;
  };

  inline void to_json(nlohmann::json& j, const LolQueueEligibilityChampionPlayableCountsForEligibility& v) {
    j["championsOwned"] = v.championsOwned;
    j["championsFreeToPlay"] = v.championsFreeToPlay;
    j["championsRented"] = v.championsRented;
    j["championsFreeToPlayReward"] = v.championsFreeToPlayReward;
  }

  inline void from_json(const nlohmann::json& j, LolQueueEligibilityChampionPlayableCountsForEligibility& v) {
    v.championsOwned = j.at("championsOwned").get<uint32_t>;
    v.championsFreeToPlay = j.at("championsFreeToPlay").get<uint32_t>;
    v.championsRented = j.at("championsRented").get<uint32_t>;
    v.championsFreeToPlayReward = j.at("championsFreeToPlayReward").get<uint32_t>;
  }

}
#endif // SWAGGER_TYPES_LolQueueEligibilityChampionPlayableCountsForEligibility_HPP
