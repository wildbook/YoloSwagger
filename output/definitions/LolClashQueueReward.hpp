#ifndef SWAGGER_TYPES_LolClashQueueReward_HPP
#define SWAGGER_TYPES_LolClashQueueReward_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct LolClashQueueReward {
    // 
    bool isChampionPointsEnabled;
    // 
    bool isIpEnabled;
    // 
    bool isXpEnabled;
    // 
    std::vector<int32_t> partySizeIpRewards;
  };

  void to_json(nlohmann::json& j, const LolClashQueueReward& v) {
    j["isChampionPointsEnabled"] = v.isChampionPointsEnabled;
    j["isIpEnabled"] = v.isIpEnabled;
    j["isXpEnabled"] = v.isXpEnabled;
    j["partySizeIpRewards"] = v.partySizeIpRewards;
  }

  void from_json(const nlohmann::json& j, LolClashQueueReward& v) {
    v.isChampionPointsEnabled = j.at("isChampionPointsEnabled").get<bool>;
    v.isIpEnabled = j.at("isIpEnabled").get<bool>;
    v.isXpEnabled = j.at("isXpEnabled").get<bool>;
    v.partySizeIpRewards = j.at("partySizeIpRewards").get<std::vector<int32_t>>;
  }

}
#endif // SWAGGER_TYPES_LolClashQueueReward_HPP
