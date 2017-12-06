#pragma once
#include <json.hpp>
#include <optional>
#include "LolQueueEligibilityQueueAvailability.hpp"
namespace leagueapi {
  struct LolQueueEligibilityQueue_t {
    uint32_t maxLevel;
    bool areFreeChampionsAllowed;
    bool showPositionSelector;
    int32_t id;
    std::string type;
    bool isRanked;
    int32_t maximumParticipantListSize;
    uint32_t championsRequiredToPlay;
    uint32_t minLevel;
    LolQueueEligibilityQueueAvailability_t queueAvailability;
    int32_t numPlayersPerTeam;
  };

  inline void to_json(nlohmann::json& j, const LolQueueEligibilityQueue_t& v) {
    j["maxLevel"] = v.maxLevel;
    j["areFreeChampionsAllowed"] = v.areFreeChampionsAllowed;
    j["showPositionSelector"] = v.showPositionSelector;
    j["id"] = v.id;
    j["type"] = v.type;
    j["isRanked"] = v.isRanked;
    j["maximumParticipantListSize"] = v.maximumParticipantListSize;
    j["championsRequiredToPlay"] = v.championsRequiredToPlay;
    j["minLevel"] = v.minLevel;
    j["queueAvailability"] = v.queueAvailability;
    j["numPlayersPerTeam"] = v.numPlayersPerTeam;
  }

  inline void from_json(const nlohmann::json& j, LolQueueEligibilityQueue_t& v) {
    v.maxLevel = j.at("maxLevel").get<uint32_t>();
    v.areFreeChampionsAllowed = j.at("areFreeChampionsAllowed").get<bool>();
    v.showPositionSelector = j.at("showPositionSelector").get<bool>();
    v.id = j.at("id").get<int32_t>();
    v.type = j.at("type").get<std::string>();
    v.isRanked = j.at("isRanked").get<bool>();
    v.maximumParticipantListSize = j.at("maximumParticipantListSize").get<int32_t>();
    v.championsRequiredToPlay = j.at("championsRequiredToPlay").get<uint32_t>();
    v.minLevel = j.at("minLevel").get<uint32_t>();
    v.queueAvailability = j.at("queueAvailability").get<LolQueueEligibilityQueueAvailability_t>();
    v.numPlayersPerTeam = j.at("numPlayersPerTeam").get<int32_t>();
  }
}
