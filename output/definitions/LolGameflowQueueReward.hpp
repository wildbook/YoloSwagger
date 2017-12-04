#ifndef SWAGGER_TYPES_LolGameflowQueueReward_HPP
#define SWAGGER_TYPES_LolGameflowQueueReward_HPP
#include <json.hpp>
namespace test {
  // 
  struct LolGameflowQueueReward {
'    // 
    bool isChampionPointsEnabled;
    // 
    bool isIpEnabled;
    // 
    bool isXpEnabled;
    // 
    std::vector<int32_t> partySizeIpRewards;
  };

  void to_json(nlohmann::json& j, const LolGameflowQueueReward& v) {
    j["isChampionPointsEnabled"] = v.isChampionPointsEnabled;
    j["isIpEnabled"] = v.isIpEnabled;
    j["isXpEnabled"] = v.isXpEnabled;
    j["partySizeIpRewards"] = v.partySizeIpRewards;
  }

  void from_json(const nlohmann::json& j, LolGameflowQueueReward& v) {
    v.isChampionPointsEnabled = j.at("isChampionPointsEnabled").get<bool>;
    v.isIpEnabled = j.at("isIpEnabled").get<bool>;
    v.isXpEnabled = j.at("isXpEnabled").get<bool>;
    v.partySizeIpRewards = j.at("partySizeIpRewards").get<std::vector<int32_t>>;
  }

}
#endif // SWAGGER_TYPES_LolGameflowQueueReward_HPP
