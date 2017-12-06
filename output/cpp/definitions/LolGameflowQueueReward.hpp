#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolGameflowQueueReward_t {
    bool isChampionPointsEnabled;
    bool isIpEnabled;
    bool isXpEnabled;
    std::vector<int32_t> partySizeIpRewards;
  };

  inline void to_json(nlohmann::json& j, const LolGameflowQueueReward_t& v) {
    j["isChampionPointsEnabled"] = v.isChampionPointsEnabled;
    j["isIpEnabled"] = v.isIpEnabled;
    j["isXpEnabled"] = v.isXpEnabled;
    j["partySizeIpRewards"] = v.partySizeIpRewards;
  }

  inline void from_json(const nlohmann::json& j, LolGameflowQueueReward_t& v) {
    v.isChampionPointsEnabled = j.at("isChampionPointsEnabled").get<bool>();
    v.isIpEnabled = j.at("isIpEnabled").get<bool>();
    v.isXpEnabled = j.at("isXpEnabled").get<bool>();
    v.partySizeIpRewards = j.at("partySizeIpRewards").get<std::vector<int32_t>>();
  }
}
