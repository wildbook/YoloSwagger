#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolLobbyQueueReward_t {
    std::vector<int32_t> partySizeIpRewards;
    bool isXpEnabled;
    bool isChampionPointsEnabled;
    bool isIpEnabled;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyQueueReward_t& v) {
    j["partySizeIpRewards"] = v.partySizeIpRewards;
    j["isXpEnabled"] = v.isXpEnabled;
    j["isChampionPointsEnabled"] = v.isChampionPointsEnabled;
    j["isIpEnabled"] = v.isIpEnabled;
  }

  inline void from_json(const nlohmann::json& j, LolLobbyQueueReward_t& v) {
    v.partySizeIpRewards = j.at("partySizeIpRewards").get<std::vector<int32_t>>();
    v.isXpEnabled = j.at("isXpEnabled").get<bool>();
    v.isChampionPointsEnabled = j.at("isChampionPointsEnabled").get<bool>();
    v.isIpEnabled = j.at("isIpEnabled").get<bool>();
  }
}
