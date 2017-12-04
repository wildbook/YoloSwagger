#ifndef SWAGGER_TYPES_LCDSChampionReward_HPP
#define SWAGGER_TYPES_LCDSChampionReward_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct LCDSChampionReward {
    // 
    int32_t championId;
    // 
    std::vector<int32_t> skins;
  };

  void to_json(nlohmann::json& j, const LCDSChampionReward& v) {
    j["championId"] = v.championId;
    j["skins"] = v.skins;
  }

  void from_json(const nlohmann::json& j, LCDSChampionReward& v) {
    v.championId = j.at("championId").get<int32_t>;
    v.skins = j.at("skins").get<std::vector<int32_t>>;
  }

}
#endif // SWAGGER_TYPES_LCDSChampionReward_HPP
