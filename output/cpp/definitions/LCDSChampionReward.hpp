#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LCDSChampionReward_t {
    int32_t championId;
    std::vector<int32_t> skins;
  };

  inline void to_json(nlohmann::json& j, const LCDSChampionReward_t& v) {
    j["championId"] = v.championId;
    j["skins"] = v.skins;
  }

  inline void from_json(const nlohmann::json& j, LCDSChampionReward_t& v) {
    v.championId = j.at("championId").get<int32_t>();
    v.skins = j.at("skins").get<std::vector<int32_t>>();
  }
  inline std::string to_string(const LCDSChampionReward_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
