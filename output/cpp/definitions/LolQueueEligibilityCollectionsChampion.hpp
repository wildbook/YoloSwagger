#pragma once
#include <json.hpp>
#include <optional>
#include "LolQueueEligibilityCollectionsOwnership.hpp"
namespace leagueapi {
  struct LolQueueEligibilityCollectionsChampion_t {
    LolQueueEligibilityCollectionsOwnership_t ownership;
    std::vector<std::string> disabledQueues;
    bool rankedPlayEnabled;
    uint64_t purchased;
    bool freeToPlay;
  };

  inline void to_json(nlohmann::json& j, const LolQueueEligibilityCollectionsChampion_t& v) {
    j["ownership"] = v.ownership;
    j["disabledQueues"] = v.disabledQueues;
    j["rankedPlayEnabled"] = v.rankedPlayEnabled;
    j["purchased"] = v.purchased;
    j["freeToPlay"] = v.freeToPlay;
  }

  inline void from_json(const nlohmann::json& j, LolQueueEligibilityCollectionsChampion_t& v) {
    v.ownership = j.at("ownership").get<LolQueueEligibilityCollectionsOwnership_t>();
    v.disabledQueues = j.at("disabledQueues").get<std::vector<std::string>>();
    v.rankedPlayEnabled = j.at("rankedPlayEnabled").get<bool>();
    v.purchased = j.at("purchased").get<uint64_t>();
    v.freeToPlay = j.at("freeToPlay").get<bool>();
  }
  inline std::string to_string(const LolQueueEligibilityCollectionsChampion_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
