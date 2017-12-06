#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolPerksChampionPreferredStyle_t {
    uint32_t championId;
    int32_t style;
    std::string championName;
  };

  inline void to_json(nlohmann::json& j, const LolPerksChampionPreferredStyle_t& v) {
    j["championId"] = v.championId;
    j["style"] = v.style;
    j["championName"] = v.championName;
  }

  inline void from_json(const nlohmann::json& j, LolPerksChampionPreferredStyle_t& v) {
    v.championId = j.at("championId").get<uint32_t>();
    v.style = j.at("style").get<int32_t>();
    v.championName = j.at("championName").get<std::string>();
  }
}
