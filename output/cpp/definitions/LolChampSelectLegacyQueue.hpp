#ifndef SWAGGER_TYPES_LolChampSelectLegacyQueue_HPP
#define SWAGGER_TYPES_LolChampSelectLegacyQueue_HPP
#include <json.hpp>
#include "LolChampSelectLegacyQueueGameTypeConfig.hpp"
namespace leagueapi {
  // 
  struct LolChampSelectLegacyQueue {
    // 
    LolChampSelectLegacyQueueGameTypeConfig gameTypeConfig;
    // 
    bool areFreeChampionsAllowed;
  };

  inline void to_json(nlohmann::json& j, const LolChampSelectLegacyQueue& v) {
    j["gameTypeConfig"] = v.gameTypeConfig;
    j["areFreeChampionsAllowed"] = v.areFreeChampionsAllowed;
  }

  inline void from_json(const nlohmann::json& j, LolChampSelectLegacyQueue& v) {
    v.gameTypeConfig = j.at("gameTypeConfig").get<LolChampSelectLegacyQueueGameTypeConfig>;
    v.areFreeChampionsAllowed = j.at("areFreeChampionsAllowed").get<bool>;
  }

}
#endif // SWAGGER_TYPES_LolChampSelectLegacyQueue_HPP
