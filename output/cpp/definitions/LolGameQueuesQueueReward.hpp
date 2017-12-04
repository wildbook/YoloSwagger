#ifndef SWAGGER_TYPES_LolGameQueuesQueueReward_HPP
#define SWAGGER_TYPES_LolGameQueuesQueueReward_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct LolGameQueuesQueueReward {
    // 
    bool isChampionPointsEnabled;
    // 
    bool isXpEnabled;
    // 
    std::vector<int32_t> partySizeIpRewards;
    // 
    bool isIpEnabled;
  };

  inline void to_json(nlohmann::json& j, const LolGameQueuesQueueReward& v) {
    j["isChampionPointsEnabled"] = v.isChampionPointsEnabled;
    j["isXpEnabled"] = v.isXpEnabled;
    j["partySizeIpRewards"] = v.partySizeIpRewards;
    j["isIpEnabled"] = v.isIpEnabled;
  }

  inline void from_json(const nlohmann::json& j, LolGameQueuesQueueReward& v) {
    v.isChampionPointsEnabled = j.at("isChampionPointsEnabled").get<bool>;
    v.isXpEnabled = j.at("isXpEnabled").get<bool>;
    v.partySizeIpRewards = j.at("partySizeIpRewards").get<std::vector<int32_t>>;
    v.isIpEnabled = j.at("isIpEnabled").get<bool>;
  }

}
#endif // SWAGGER_TYPES_LolGameQueuesQueueReward_HPP
