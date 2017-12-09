#pragma once
#include <json.hpp>
#include <optional>
#include "LolQueueEligibilityQueueAvailability.hpp"
namespace leagueapi {
  struct LolQueueEligibilityQueue_t {
    bool isRanked;
    bool showPositionSelector;
    bool areFreeChampionsAllowed;
    int32_t numPlayersPerTeam;
    uint32_t maxLevel;
    int32_t maximumParticipantListSize;
    uint32_t championsRequiredToPlay;
    int32_t id;
    std::string type;
    uint32_t minLevel;
    LolQueueEligibilityQueueAvailability_t queueAvailability;
  };

  inline void to_json(nlohmann::json& j, const LolQueueEligibilityQueue_t& v) {
    j["isRanked"] = v.isRanked;
    j["showPositionSelector"] = v.showPositionSelector;
    j["areFreeChampionsAllowed"] = v.areFreeChampionsAllowed;
    j["numPlayersPerTeam"] = v.numPlayersPerTeam;
    j["maxLevel"] = v.maxLevel;
    j["maximumParticipantListSize"] = v.maximumParticipantListSize;
    j["championsRequiredToPlay"] = v.championsRequiredToPlay;
    j["id"] = v.id;
    j["type"] = v.type;
    j["minLevel"] = v.minLevel;
    j["queueAvailability"] = v.queueAvailability;
  }

  inline void from_json(const nlohmann::json& j, LolQueueEligibilityQueue_t& v) {
    v.isRanked = j.at("isRanked").get<bool>();
    v.showPositionSelector = j.at("showPositionSelector").get<bool>();
    v.areFreeChampionsAllowed = j.at("areFreeChampionsAllowed").get<bool>();
    v.numPlayersPerTeam = j.at("numPlayersPerTeam").get<int32_t>();
    v.maxLevel = j.at("maxLevel").get<uint32_t>();
    v.maximumParticipantListSize = j.at("maximumParticipantListSize").get<int32_t>();
    v.championsRequiredToPlay = j.at("championsRequiredToPlay").get<uint32_t>();
    v.id = j.at("id").get<int32_t>();
    v.type = j.at("type").get<std::string>();
    v.minLevel = j.at("minLevel").get<uint32_t>();
    v.queueAvailability = j.at("queueAvailability").get<LolQueueEligibilityQueueAvailability_t>();
  }
  inline std::string to_string(const LolQueueEligibilityQueue_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
