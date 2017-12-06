#pragma once
#include <json.hpp>
#include <optional>
#include "LolQueueEligibilityCollectionsOwnership.hpp"
namespace leagueapi {
  struct LolQueueEligibilityCollectionsChampion_t {
    LolQueueEligibilityCollectionsOwnership_t ownership;
    bool freeToPlay;
    bool rankedPlayEnabled;
    std::vector<std::string> disabledQueues;
    uint64_t purchased;
  };

  inline void to_json(nlohmann::json& j, const LolQueueEligibilityCollectionsChampion_t& v) {
    j["ownership"] = v.ownership;
    j["freeToPlay"] = v.freeToPlay;
    j["rankedPlayEnabled"] = v.rankedPlayEnabled;
    j["disabledQueues"] = v.disabledQueues;
    j["purchased"] = v.purchased;
  }

  inline void from_json(const nlohmann::json& j, LolQueueEligibilityCollectionsChampion_t& v) {
    v.ownership = j.at("ownership").get<LolQueueEligibilityCollectionsOwnership_t>();
    v.freeToPlay = j.at("freeToPlay").get<bool>();
    v.rankedPlayEnabled = j.at("rankedPlayEnabled").get<bool>();
    v.disabledQueues = j.at("disabledQueues").get<std::vector<std::string>>();
    v.purchased = j.at("purchased").get<uint64_t>();
  }
}
