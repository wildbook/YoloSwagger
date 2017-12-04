#ifndef SWAGGER_TYPES_LolQueueEligibilityQueue_HPP
#define SWAGGER_TYPES_LolQueueEligibilityQueue_HPP
#include <json.hpp>
#include "LolQueueEligibilityQueueAvailability.hpp"
namespace leagueapi {
  // 
  struct LolQueueEligibilityQueue {
    // 
    int32_t numPlayersPerTeam;
    // 
    LolQueueEligibilityQueueAvailability queueAvailability;
    // 
    std::string type;
    // 
    bool showPositionSelector;
    // 
    uint32_t minLevel;
    // 
    int32_t id;
    // 
    bool areFreeChampionsAllowed;
    // 
    int32_t maximumParticipantListSize;
    // 
    bool isRanked;
    // 
    uint32_t maxLevel;
    // 
    uint32_t championsRequiredToPlay;
  };

  inline void to_json(nlohmann::json& j, const LolQueueEligibilityQueue& v) {
    j["numPlayersPerTeam"] = v.numPlayersPerTeam;
    j["queueAvailability"] = v.queueAvailability;
    j["type"] = v.type;
    j["showPositionSelector"] = v.showPositionSelector;
    j["minLevel"] = v.minLevel;
    j["id"] = v.id;
    j["areFreeChampionsAllowed"] = v.areFreeChampionsAllowed;
    j["maximumParticipantListSize"] = v.maximumParticipantListSize;
    j["isRanked"] = v.isRanked;
    j["maxLevel"] = v.maxLevel;
    j["championsRequiredToPlay"] = v.championsRequiredToPlay;
  }

  inline void from_json(const nlohmann::json& j, LolQueueEligibilityQueue& v) {
    v.numPlayersPerTeam = j.at("numPlayersPerTeam").get<int32_t>;
    v.queueAvailability = j.at("queueAvailability").get<LolQueueEligibilityQueueAvailability>;
    v.type = j.at("type").get<std::string>;
    v.showPositionSelector = j.at("showPositionSelector").get<bool>;
    v.minLevel = j.at("minLevel").get<uint32_t>;
    v.id = j.at("id").get<int32_t>;
    v.areFreeChampionsAllowed = j.at("areFreeChampionsAllowed").get<bool>;
    v.maximumParticipantListSize = j.at("maximumParticipantListSize").get<int32_t>;
    v.isRanked = j.at("isRanked").get<bool>;
    v.maxLevel = j.at("maxLevel").get<uint32_t>;
    v.championsRequiredToPlay = j.at("championsRequiredToPlay").get<uint32_t>;
  }

}
#endif // SWAGGER_TYPES_LolQueueEligibilityQueue_HPP
