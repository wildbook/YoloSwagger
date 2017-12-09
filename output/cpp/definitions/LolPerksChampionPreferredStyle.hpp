#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolPerksChampionPreferredStyle_t {
    int32_t style;
    std::string championName;
    uint32_t championId;
  };

  inline void to_json(nlohmann::json& j, const LolPerksChampionPreferredStyle_t& v) {
    j["style"] = v.style;
    j["championName"] = v.championName;
    j["championId"] = v.championId;
  }

  inline void from_json(const nlohmann::json& j, LolPerksChampionPreferredStyle_t& v) {
    v.style = j.at("style").get<int32_t>();
    v.championName = j.at("championName").get<std::string>();
    v.championId = j.at("championId").get<uint32_t>();
  }
  inline std::string to_string(const LolPerksChampionPreferredStyle_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
