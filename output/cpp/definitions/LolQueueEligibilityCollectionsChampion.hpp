#pragma once
#include <json.hpp>
#include <optional>
#include "LolQueueEligibilityCollectionsOwnership.hpp"
namespace leagueapi {
  struct LolQueueEligibilityCollectionsChampion_t {
    std::vector<std::string> disabledQueues;
    bool freeToPlay;
    LolQueueEligibilityCollectionsOwnership_t ownership;
    uint64_t purchased;
    bool rankedPlayEnabled;
  };

  inline void to_json(nlohmann::json& j, const LolQueueEligibilityCollectionsChampion_t& v) {
    j["disabledQueues"] = v.disabledQueues;
    j["freeToPlay"] = v.freeToPlay;
    j["ownership"] = v.ownership;
    j["purchased"] = v.purchased;
    j["rankedPlayEnabled"] = v.rankedPlayEnabled;
  }

  inline void from_json(const nlohmann::json& j, LolQueueEligibilityCollectionsChampion_t& v) {
    v.disabledQueues = j.at("disabledQueues").get<std::vector<std::string>>();
    v.freeToPlay = j.at("freeToPlay").get<bool>();
    v.ownership = j.at("ownership").get<LolQueueEligibilityCollectionsOwnership_t>();
    v.purchased = j.at("purchased").get<uint64_t>();
    v.rankedPlayEnabled = j.at("rankedPlayEnabled").get<bool>();
  }
}
