#pragma once
#include <json.hpp>
#include <optional>
#include "LolQueueEligibilityCollectionsOwnership.hpp"
namespace leagueapi {
  struct LolQueueEligibilityCollectionsChampion_t {
    bool freeToPlay;
    LolQueueEligibilityCollectionsOwnership_t ownership;
    bool rankedPlayEnabled;
    uint64_t purchased;
    std::vector<std::string> disabledQueues;
  };

  inline void to_json(nlohmann::json& j, const LolQueueEligibilityCollectionsChampion_t& v) {
    j["freeToPlay"] = v.freeToPlay;
    j["ownership"] = v.ownership;
    j["rankedPlayEnabled"] = v.rankedPlayEnabled;
    j["purchased"] = v.purchased;
    j["disabledQueues"] = v.disabledQueues;
  }

  inline void from_json(const nlohmann::json& j, LolQueueEligibilityCollectionsChampion_t& v) {
    v.freeToPlay = j.at("freeToPlay").get<bool>();
    v.ownership = j.at("ownership").get<LolQueueEligibilityCollectionsOwnership_t>();
    v.rankedPlayEnabled = j.at("rankedPlayEnabled").get<bool>();
    v.purchased = j.at("purchased").get<uint64_t>();
    v.disabledQueues = j.at("disabledQueues").get<std::vector<std::string>>();
  }
  inline std::string to_string(const LolQueueEligibilityCollectionsChampion_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
