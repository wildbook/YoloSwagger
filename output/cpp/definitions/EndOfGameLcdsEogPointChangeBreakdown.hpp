#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct EndOfGameLcdsEogPointChangeBreakdown_t {
    int32_t pointChangeFromGameplay;
    int32_t pointChangeFromChampionsOwned;
    int32_t endPoints;
    int32_t pointsUsed;
    int32_t previousPoints;
  };

  inline void to_json(nlohmann::json& j, const EndOfGameLcdsEogPointChangeBreakdown_t& v) {
    j["pointChangeFromGameplay"] = v.pointChangeFromGameplay;
    j["pointChangeFromChampionsOwned"] = v.pointChangeFromChampionsOwned;
    j["endPoints"] = v.endPoints;
    j["pointsUsed"] = v.pointsUsed;
    j["previousPoints"] = v.previousPoints;
  }

  inline void from_json(const nlohmann::json& j, EndOfGameLcdsEogPointChangeBreakdown_t& v) {
    v.pointChangeFromGameplay = j.at("pointChangeFromGameplay").get<int32_t>();
    v.pointChangeFromChampionsOwned = j.at("pointChangeFromChampionsOwned").get<int32_t>();
    v.endPoints = j.at("endPoints").get<int32_t>();
    v.pointsUsed = j.at("pointsUsed").get<int32_t>();
    v.previousPoints = j.at("previousPoints").get<int32_t>();
  }
}
