#ifndef SWAGGER_TYPES_LolQueueEligibilityCollectionsChampion_HPP
#define SWAGGER_TYPES_LolQueueEligibilityCollectionsChampion_HPP
#include <json.hpp>
#include "LolQueueEligibilityCollectionsOwnership.hpp"
namespace leagueapi {
  // 
  struct LolQueueEligibilityCollectionsChampion {
    // 
    bool freeToPlay;
    // 
    std::vector<std::string> disabledQueues;
    // 
    bool rankedPlayEnabled;
    // 
    uint64_t purchased;
    // 
    LolQueueEligibilityCollectionsOwnership ownership;
  };

  inline void to_json(nlohmann::json& j, const LolQueueEligibilityCollectionsChampion& v) {
    j["freeToPlay"] = v.freeToPlay;
    j["disabledQueues"] = v.disabledQueues;
    j["rankedPlayEnabled"] = v.rankedPlayEnabled;
    j["purchased"] = v.purchased;
    j["ownership"] = v.ownership;
  }

  inline void from_json(const nlohmann::json& j, LolQueueEligibilityCollectionsChampion& v) {
    v.freeToPlay = j.at("freeToPlay").get<bool>;
    v.disabledQueues = j.at("disabledQueues").get<std::vector<std::string>>;
    v.rankedPlayEnabled = j.at("rankedPlayEnabled").get<bool>;
    v.purchased = j.at("purchased").get<uint64_t>;
    v.ownership = j.at("ownership").get<LolQueueEligibilityCollectionsOwnership>;
  }

}
#endif // SWAGGER_TYPES_LolQueueEligibilityCollectionsChampion_HPP
