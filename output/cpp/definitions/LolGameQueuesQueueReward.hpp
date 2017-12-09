#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolGameQueuesQueueReward_t {
    bool isIpEnabled;
    std::vector<int32_t> partySizeIpRewards;
    bool isXpEnabled;
    bool isChampionPointsEnabled;
  };

  inline void to_json(nlohmann::json& j, const LolGameQueuesQueueReward_t& v) {
    j["isIpEnabled"] = v.isIpEnabled;
    j["partySizeIpRewards"] = v.partySizeIpRewards;
    j["isXpEnabled"] = v.isXpEnabled;
    j["isChampionPointsEnabled"] = v.isChampionPointsEnabled;
  }

  inline void from_json(const nlohmann::json& j, LolGameQueuesQueueReward_t& v) {
    v.isIpEnabled = j.at("isIpEnabled").get<bool>();
    v.partySizeIpRewards = j.at("partySizeIpRewards").get<std::vector<int32_t>>();
    v.isXpEnabled = j.at("isXpEnabled").get<bool>();
    v.isChampionPointsEnabled = j.at("isChampionPointsEnabled").get<bool>();
  }
  inline std::string to_string(const LolGameQueuesQueueReward_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
