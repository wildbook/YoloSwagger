#pragma once
#include <json.hpp>
#include <optional>
#include "LolQueueEligibilityCollectionsOwnership.hpp"
namespace leagueapi {
  struct LolQueueEligibilityCollectionsChampion_t {
    bool freeToPlay;
    std::vector<std::string> disabledQueues;
    bool rankedPlayEnabled;
    uint64_t purchased;
    LolQueueEligibilityCollectionsOwnership_t ownership;
  };

  inline void to_json(nlohmann::json& j, const LolQueueEligibilityCollectionsChampion_t& v) {
    j["freeToPlay"] = v.freeToPlay;
    j["disabledQueues"] = v.disabledQueues;
    j["rankedPlayEnabled"] = v.rankedPlayEnabled;
    j["purchased"] = v.purchased;
    j["ownership"] = v.ownership;
  }

  inline void from_json(const nlohmann::json& j, LolQueueEligibilityCollectionsChampion_t& v) {
    v.freeToPlay = j.at("freeToPlay").get<bool>();
    v.disabledQueues = j.at("disabledQueues").get<std::vector<std::string>>();
    v.rankedPlayEnabled = j.at("rankedPlayEnabled").get<bool>();
    v.purchased = j.at("purchased").get<uint64_t>();
    v.ownership = j.at("ownership").get<LolQueueEligibilityCollectionsOwnership_t>();
  }
  inline std::string to_string(const LolQueueEligibilityCollectionsChampion_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
