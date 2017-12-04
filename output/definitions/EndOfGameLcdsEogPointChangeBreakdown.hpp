#ifndef SWAGGER_TYPES_EndOfGameLcdsEogPointChangeBreakdown_HPP
#define SWAGGER_TYPES_EndOfGameLcdsEogPointChangeBreakdown_HPP
#include <json.hpp>
namespace test {
  // 
  struct EndOfGameLcdsEogPointChangeBreakdown {
'    // 
    int32_t endPoints;
    // 
    int32_t pointChangeFromChampionsOwned;
    // 
    int32_t pointChangeFromGameplay;
    // 
    int32_t pointsUsed;
    // 
    int32_t previousPoints;
  };

  void to_json(nlohmann::json& j, const EndOfGameLcdsEogPointChangeBreakdown& v) {
    j["endPoints"] = v.endPoints;
    j["pointChangeFromChampionsOwned"] = v.pointChangeFromChampionsOwned;
    j["pointChangeFromGameplay"] = v.pointChangeFromGameplay;
    j["pointsUsed"] = v.pointsUsed;
    j["previousPoints"] = v.previousPoints;
  }

  void from_json(const nlohmann::json& j, EndOfGameLcdsEogPointChangeBreakdown& v) {
    v.endPoints = j.at("endPoints").get<int32_t>;
    v.pointChangeFromChampionsOwned = j.at("pointChangeFromChampionsOwned").get<int32_t>;
    v.pointChangeFromGameplay = j.at("pointChangeFromGameplay").get<int32_t>;
    v.pointsUsed = j.at("pointsUsed").get<int32_t>;
    v.previousPoints = j.at("previousPoints").get<int32_t>;
  }

}
#endif // SWAGGER_TYPES_EndOfGameLcdsEogPointChangeBreakdown_HPP
