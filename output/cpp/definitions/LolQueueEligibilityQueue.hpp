#pragma once
#include <json.hpp>
#include <optional>
#include "LolQueueEligibilityQueueAvailability.hpp"
namespace leagueapi {
  struct LolQueueEligibilityQueue_t {
    std::string type;
    bool areFreeChampionsAllowed;
    LolQueueEligibilityQueueAvailability_t queueAvailability;
    uint32_t maxLevel;
    bool showPositionSelector;
    int32_t maximumParticipantListSize;
    uint32_t minLevel;
    int32_t id;
    bool isRanked;
    int32_t numPlayersPerTeam;
    uint32_t championsRequiredToPlay;
  };

  inline void to_json(nlohmann::json& j, const LolQueueEligibilityQueue_t& v) {
    j["type"] = v.type;
    j["areFreeChampionsAllowed"] = v.areFreeChampionsAllowed;
    j["queueAvailability"] = v.queueAvailability;
    j["maxLevel"] = v.maxLevel;
    j["showPositionSelector"] = v.showPositionSelector;
    j["maximumParticipantListSize"] = v.maximumParticipantListSize;
    j["minLevel"] = v.minLevel;
    j["id"] = v.id;
    j["isRanked"] = v.isRanked;
    j["numPlayersPerTeam"] = v.numPlayersPerTeam;
    j["championsRequiredToPlay"] = v.championsRequiredToPlay;
  }

  inline void from_json(const nlohmann::json& j, LolQueueEligibilityQueue_t& v) {
    v.type = j.at("type").get<std::string>();
    v.areFreeChampionsAllowed = j.at("areFreeChampionsAllowed").get<bool>();
    v.queueAvailability = j.at("queueAvailability").get<LolQueueEligibilityQueueAvailability_t>();
    v.maxLevel = j.at("maxLevel").get<uint32_t>();
    v.showPositionSelector = j.at("showPositionSelector").get<bool>();
    v.maximumParticipantListSize = j.at("maximumParticipantListSize").get<int32_t>();
    v.minLevel = j.at("minLevel").get<uint32_t>();
    v.id = j.at("id").get<int32_t>();
    v.isRanked = j.at("isRanked").get<bool>();
    v.numPlayersPerTeam = j.at("numPlayersPerTeam").get<int32_t>();
    v.championsRequiredToPlay = j.at("championsRequiredToPlay").get<uint32_t>();
  }
  inline std::string to_string(const LolQueueEligibilityQueue_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
