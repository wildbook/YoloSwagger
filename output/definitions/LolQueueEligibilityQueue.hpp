#ifndef SWAGGER_TYPES_LolQueueEligibilityQueue_HPP
#define SWAGGER_TYPES_LolQueueEligibilityQueue_HPP
#include <json.hpp>
#include "LolQueueEligibilityQueueAvailability.hpp"
namespace test {
  // 
  struct LolQueueEligibilityQueue {
'    // 
    bool areFreeChampionsAllowed;
    // 
    uint32_t championsRequiredToPlay;
    // 
    int32_t id;
    // 
    bool isRanked;
    // 
    uint32_t maxLevel;
    // 
    int32_t maximumParticipantListSize;
    // 
    uint32_t minLevel;
    // 
    int32_t numPlayersPerTeam;
    // 
    LolQueueEligibilityQueueAvailability queueAvailability;
    // 
    bool showPositionSelector;
    // 
    std::string type;
  };

  void to_json(nlohmann::json& j, const LolQueueEligibilityQueue& v) {
    j["areFreeChampionsAllowed"] = v.areFreeChampionsAllowed;
    j["championsRequiredToPlay"] = v.championsRequiredToPlay;
    j["id"] = v.id;
    j["isRanked"] = v.isRanked;
    j["maxLevel"] = v.maxLevel;
    j["maximumParticipantListSize"] = v.maximumParticipantListSize;
    j["minLevel"] = v.minLevel;
    j["numPlayersPerTeam"] = v.numPlayersPerTeam;
    j["queueAvailability"] = v.queueAvailability;
    j["showPositionSelector"] = v.showPositionSelector;
    j["type"] = v.type;
  }

  void from_json(const nlohmann::json& j, LolQueueEligibilityQueue& v) {
    v.areFreeChampionsAllowed = j.at("areFreeChampionsAllowed").get<bool>;
    v.championsRequiredToPlay = j.at("championsRequiredToPlay").get<uint32_t>;
    v.id = j.at("id").get<int32_t>;
    v.isRanked = j.at("isRanked").get<bool>;
    v.maxLevel = j.at("maxLevel").get<uint32_t>;
    v.maximumParticipantListSize = j.at("maximumParticipantListSize").get<int32_t>;
    v.minLevel = j.at("minLevel").get<uint32_t>;
    v.numPlayersPerTeam = j.at("numPlayersPerTeam").get<int32_t>;
    v.queueAvailability = j.at("queueAvailability").get<LolQueueEligibilityQueueAvailability>;
    v.showPositionSelector = j.at("showPositionSelector").get<bool>;
    v.type = j.at("type").get<std::string>;
  }

}
#endif // SWAGGER_TYPES_LolQueueEligibilityQueue_HPP
