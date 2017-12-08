#pragma once
#include <json.hpp>
#include <optional>
#include "LolQueueEligibilityQueueAvailability.hpp"
namespace leagueapi {
  struct LolQueueEligibilityQueue_t {
    LolQueueEligibilityQueueAvailability_t queueAvailability;
    int32_t id;
    int32_t numPlayersPerTeam;
    std::string type;
    bool showPositionSelector;
    bool areFreeChampionsAllowed;
    uint32_t minLevel;
    int32_t maximumParticipantListSize;
    bool isRanked;
    uint32_t championsRequiredToPlay;
    uint32_t maxLevel;
  };

  inline void to_json(nlohmann::json& j, const LolQueueEligibilityQueue_t& v) {
    j["queueAvailability"] = v.queueAvailability;
    j["id"] = v.id;
    j["numPlayersPerTeam"] = v.numPlayersPerTeam;
    j["type"] = v.type;
    j["showPositionSelector"] = v.showPositionSelector;
    j["areFreeChampionsAllowed"] = v.areFreeChampionsAllowed;
    j["minLevel"] = v.minLevel;
    j["maximumParticipantListSize"] = v.maximumParticipantListSize;
    j["isRanked"] = v.isRanked;
    j["championsRequiredToPlay"] = v.championsRequiredToPlay;
    j["maxLevel"] = v.maxLevel;
  }

  inline void from_json(const nlohmann::json& j, LolQueueEligibilityQueue_t& v) {
    v.queueAvailability = j.at("queueAvailability").get<LolQueueEligibilityQueueAvailability_t>();
    v.id = j.at("id").get<int32_t>();
    v.numPlayersPerTeam = j.at("numPlayersPerTeam").get<int32_t>();
    v.type = j.at("type").get<std::string>();
    v.showPositionSelector = j.at("showPositionSelector").get<bool>();
    v.areFreeChampionsAllowed = j.at("areFreeChampionsAllowed").get<bool>();
    v.minLevel = j.at("minLevel").get<uint32_t>();
    v.maximumParticipantListSize = j.at("maximumParticipantListSize").get<int32_t>();
    v.isRanked = j.at("isRanked").get<bool>();
    v.championsRequiredToPlay = j.at("championsRequiredToPlay").get<uint32_t>();
    v.maxLevel = j.at("maxLevel").get<uint32_t>();
  }
  inline std::string to_string(const LolQueueEligibilityQueue_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
