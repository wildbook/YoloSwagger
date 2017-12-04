#ifndef SWAGGER_TYPES_LolQueueEligibilityCollectionsChampion_HPP
#define SWAGGER_TYPES_LolQueueEligibilityCollectionsChampion_HPP
#include <json.hpp>
#include "LolQueueEligibilityCollectionsOwnership.hpp"
namespace test {
  // 
  struct LolQueueEligibilityCollectionsChampion {
'    // 
    std::vector<std::string> disabledQueues;
    // 
    bool freeToPlay;
    // 
    LolQueueEligibilityCollectionsOwnership ownership;
    // 
    uint64_t purchased;
    // 
    bool rankedPlayEnabled;
  };

  void to_json(nlohmann::json& j, const LolQueueEligibilityCollectionsChampion& v) {
    j["disabledQueues"] = v.disabledQueues;
    j["freeToPlay"] = v.freeToPlay;
    j["ownership"] = v.ownership;
    j["purchased"] = v.purchased;
    j["rankedPlayEnabled"] = v.rankedPlayEnabled;
  }

  void from_json(const nlohmann::json& j, LolQueueEligibilityCollectionsChampion& v) {
    v.disabledQueues = j.at("disabledQueues").get<std::vector<std::string>>;
    v.freeToPlay = j.at("freeToPlay").get<bool>;
    v.ownership = j.at("ownership").get<LolQueueEligibilityCollectionsOwnership>;
    v.purchased = j.at("purchased").get<uint64_t>;
    v.rankedPlayEnabled = j.at("rankedPlayEnabled").get<bool>;
  }

}
#endif // SWAGGER_TYPES_LolQueueEligibilityCollectionsChampion_HPP
