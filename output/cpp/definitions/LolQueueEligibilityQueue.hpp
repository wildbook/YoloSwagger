#pragma once
#include <json.hpp>
#include <optional>
#include "LolQueueEligibilityQueueAvailability.hpp"
namespace leagueapi {
  struct LolQueueEligibilityQueue_t {
    bool isRanked;
    int32_t numPlayersPerTeam;
    uint32_t championsRequiredToPlay;
    bool showPositionSelector;
    int32_t id;
    int32_t maximumParticipantListSize;
    uint32_t minLevel;
    bool areFreeChampionsAllowed;
    LolQueueEligibilityQueueAvailability_t queueAvailability;
    uint32_t maxLevel;
    std::string type;
  };

  inline void to_json(nlohmann::json& j, const LolQueueEligibilityQueue_t& v) {
    j["isRanked"] = v.isRanked;
    j["numPlayersPerTeam"] = v.numPlayersPerTeam;
    j["championsRequiredToPlay"] = v.championsRequiredToPlay;
    j["showPositionSelector"] = v.showPositionSelector;
    j["id"] = v.id;
    j["maximumParticipantListSize"] = v.maximumParticipantListSize;
    j["minLevel"] = v.minLevel;
    j["areFreeChampionsAllowed"] = v.areFreeChampionsAllowed;
    j["queueAvailability"] = v.queueAvailability;
    j["maxLevel"] = v.maxLevel;
    j["type"] = v.type;
  }

  inline void from_json(const nlohmann::json& j, LolQueueEligibilityQueue_t& v) {
    v.isRanked = j.at("isRanked").get<bool>();
    v.numPlayersPerTeam = j.at("numPlayersPerTeam").get<int32_t>();
    v.championsRequiredToPlay = j.at("championsRequiredToPlay").get<uint32_t>();
    v.showPositionSelector = j.at("showPositionSelector").get<bool>();
    v.id = j.at("id").get<int32_t>();
    v.maximumParticipantListSize = j.at("maximumParticipantListSize").get<int32_t>();
    v.minLevel = j.at("minLevel").get<uint32_t>();
    v.areFreeChampionsAllowed = j.at("areFreeChampionsAllowed").get<bool>();
    v.queueAvailability = j.at("queueAvailability").get<LolQueueEligibilityQueueAvailability_t>();
    v.maxLevel = j.at("maxLevel").get<uint32_t>();
    v.type = j.at("type").get<std::string>();
  }
  inline std::string to_string(const LolQueueEligibilityQueue_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
