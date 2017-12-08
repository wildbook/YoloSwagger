#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolPerksChampionPreferredStyle_t {
    std::string_t championName;
    int32_t_t style;
    uint32_t_t championId;
  };

  inline void to_json(nlohmann::json& j, const LolPerksChampionPreferredStyle_t& v) {
    j["championName"] = v.championName;
    j["style"] = v.style;
    j["championId"] = v.championId;
  }

  inline void from_json(const nlohmann::json& j, LolPerksChampionPreferredStyle_t& v) {
    v.championName = j.at("championName").get<std::string_t>();
    v.style = j.at("style").get<int32_t_t>();
    v.championId = j.at("championId").get<uint32_t_t>();
  }
  inline std::string to_string(const LolPerksChampionPreferredStyle_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
