#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolSummonerSummonerRequestedName_t {
    std::string name;
  };

  inline void to_json(nlohmann::json& j, const LolSummonerSummonerRequestedName_t& v) {
    j["name"] = v.name;
  }

  inline void from_json(const nlohmann::json& j, LolSummonerSummonerRequestedName_t& v) {
    v.name = j.at("name").get<std::string>();
  }
}
