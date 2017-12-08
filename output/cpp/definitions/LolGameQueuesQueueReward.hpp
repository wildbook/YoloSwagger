#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolGameQueuesQueueReward_t {
    bool isChampionPointsEnabled;
    bool isXpEnabled;
    std::vector<int32_t> partySizeIpRewards;
    bool isIpEnabled;
  };

  inline void to_json(nlohmann::json& j, const LolGameQueuesQueueReward_t& v) {
    j["isChampionPointsEnabled"] = v.isChampionPointsEnabled;
    j["isXpEnabled"] = v.isXpEnabled;
    j["partySizeIpRewards"] = v.partySizeIpRewards;
    j["isIpEnabled"] = v.isIpEnabled;
  }

  inline void from_json(const nlohmann::json& j, LolGameQueuesQueueReward_t& v) {
    v.isChampionPointsEnabled = j.at("isChampionPointsEnabled").get<bool>();
    v.isXpEnabled = j.at("isXpEnabled").get<bool>();
    v.partySizeIpRewards = j.at("partySizeIpRewards").get<std::vector<int32_t>>();
    v.isIpEnabled = j.at("isIpEnabled").get<bool>();
  }
  inline std::string to_string(const LolGameQueuesQueueReward_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
