#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LCDSChampionReward_t {
    std::vector<int32_t> skins;
    int32_t championId;
  };

  inline void to_json(nlohmann::json& j, const LCDSChampionReward_t& v) {
    j["skins"] = v.skins;
    j["championId"] = v.championId;
  }

  inline void from_json(const nlohmann::json& j, LCDSChampionReward_t& v) {
    v.skins = j.at("skins").get<std::vector<int32_t>>();
    v.championId = j.at("championId").get<int32_t>();
  }
  inline std::string to_string(const LCDSChampionReward_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
