#ifndef SWAGGER_TYPES_LolQueueEligibilityChampionPlayableCountsForEligibility_HPP
#define SWAGGER_TYPES_LolQueueEligibilityChampionPlayableCountsForEligibility_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct LolQueueEligibilityChampionPlayableCountsForEligibility {
    // 
    uint32_t championsFreeToPlay;
    // 
    uint32_t championsFreeToPlayReward;
    // 
    uint32_t championsOwned;
    // 
    uint32_t championsRented;
  };

  void to_json(nlohmann::json& j, const LolQueueEligibilityChampionPlayableCountsForEligibility& v) {
    j["championsFreeToPlay"] = v.championsFreeToPlay;
    j["championsFreeToPlayReward"] = v.championsFreeToPlayReward;
    j["championsOwned"] = v.championsOwned;
    j["championsRented"] = v.championsRented;
  }

  void from_json(const nlohmann::json& j, LolQueueEligibilityChampionPlayableCountsForEligibility& v) {
    v.championsFreeToPlay = j.at("championsFreeToPlay").get<uint32_t>;
    v.championsFreeToPlayReward = j.at("championsFreeToPlayReward").get<uint32_t>;
    v.championsOwned = j.at("championsOwned").get<uint32_t>;
    v.championsRented = j.at("championsRented").get<uint32_t>;
  }

}
#endif // SWAGGER_TYPES_LolQueueEligibilityChampionPlayableCountsForEligibility_HPP
