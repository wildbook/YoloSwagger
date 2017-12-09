#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct EndOfGameLcdsEogPointChangeBreakdown_t {
    int32_t endPoints;
    int32_t pointChangeFromGameplay;
    int32_t previousPoints;
    int32_t pointChangeFromChampionsOwned;
    int32_t pointsUsed;
  };

  inline void to_json(nlohmann::json& j, const EndOfGameLcdsEogPointChangeBreakdown_t& v) {
    j["endPoints"] = v.endPoints;
    j["pointChangeFromGameplay"] = v.pointChangeFromGameplay;
    j["previousPoints"] = v.previousPoints;
    j["pointChangeFromChampionsOwned"] = v.pointChangeFromChampionsOwned;
    j["pointsUsed"] = v.pointsUsed;
  }

  inline void from_json(const nlohmann::json& j, EndOfGameLcdsEogPointChangeBreakdown_t& v) {
    v.endPoints = j.at("endPoints").get<int32_t>();
    v.pointChangeFromGameplay = j.at("pointChangeFromGameplay").get<int32_t>();
    v.previousPoints = j.at("previousPoints").get<int32_t>();
    v.pointChangeFromChampionsOwned = j.at("pointChangeFromChampionsOwned").get<int32_t>();
    v.pointsUsed = j.at("pointsUsed").get<int32_t>();
  }
  inline std::string to_string(const EndOfGameLcdsEogPointChangeBreakdown_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
