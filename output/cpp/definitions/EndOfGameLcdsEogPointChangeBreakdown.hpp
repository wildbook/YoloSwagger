#ifndef SWAGGER_TYPES_EndOfGameLcdsEogPointChangeBreakdown_HPP
#define SWAGGER_TYPES_EndOfGameLcdsEogPointChangeBreakdown_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct EndOfGameLcdsEogPointChangeBreakdown {
    // 
    int32_t pointChangeFromChampionsOwned;
    // 
    int32_t pointsUsed;
    // 
    int32_t endPoints;
    // 
    int32_t previousPoints;
    // 
    int32_t pointChangeFromGameplay;
  };

  inline void to_json(nlohmann::json& j, const EndOfGameLcdsEogPointChangeBreakdown& v) {
    j["pointChangeFromChampionsOwned"] = v.pointChangeFromChampionsOwned;
    j["pointsUsed"] = v.pointsUsed;
    j["endPoints"] = v.endPoints;
    j["previousPoints"] = v.previousPoints;
    j["pointChangeFromGameplay"] = v.pointChangeFromGameplay;
  }

  inline void from_json(const nlohmann::json& j, EndOfGameLcdsEogPointChangeBreakdown& v) {
    v.pointChangeFromChampionsOwned = j.at("pointChangeFromChampionsOwned").get<int32_t>;
    v.pointsUsed = j.at("pointsUsed").get<int32_t>;
    v.endPoints = j.at("endPoints").get<int32_t>;
    v.previousPoints = j.at("previousPoints").get<int32_t>;
    v.pointChangeFromGameplay = j.at("pointChangeFromGameplay").get<int32_t>;
  }

}
#endif // SWAGGER_TYPES_EndOfGameLcdsEogPointChangeBreakdown_HPP