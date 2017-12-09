#pragma once
#include <json.hpp>
#include <optional>
#include "LolQueueEligibilityCollectionsOwnership.hpp"
namespace leagueapi {
  struct LolQueueEligibilityCollectionsChampion_t {
    uint64_t purchased;
    bool rankedPlayEnabled;
    bool freeToPlay;
    LolQueueEligibilityCollectionsOwnership_t ownership;
    std::vector<std::string> disabledQueues;
  };

  inline void to_json(nlohmann::json& j, const LolQueueEligibilityCollectionsChampion_t& v) {
    j["purchased"] = v.purchased;
    j["rankedPlayEnabled"] = v.rankedPlayEnabled;
    j["freeToPlay"] = v.freeToPlay;
    j["ownership"] = v.ownership;
    j["disabledQueues"] = v.disabledQueues;
  }

  inline void from_json(const nlohmann::json& j, LolQueueEligibilityCollectionsChampion_t& v) {
    v.purchased = j.at("purchased").get<uint64_t>();
    v.rankedPlayEnabled = j.at("rankedPlayEnabled").get<bool>();
    v.freeToPlay = j.at("freeToPlay").get<bool>();
    v.ownership = j.at("ownership").get<LolQueueEligibilityCollectionsOwnership_t>();
    v.disabledQueues = j.at("disabledQueues").get<std::vector<std::string>>();
  }
  inline std::string to_string(const LolQueueEligibilityCollectionsChampion_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
