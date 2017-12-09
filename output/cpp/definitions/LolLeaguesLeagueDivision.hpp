#pragma once
#include <json.hpp>
#include <optional>
#include "LolLeaguesLeagueRank.hpp"
#include "LolLeaguesLeagueStanding.hpp"
namespace leagueapi {
  struct LolLeaguesLeagueDivision_t {
    std::vector<LolLeaguesLeagueStanding_t> standings;
    LolLeaguesLeagueRank_t leagueRank;
  };

  inline void to_json(nlohmann::json& j, const LolLeaguesLeagueDivision_t& v) {
    j["standings"] = v.standings;
    j["leagueRank"] = v.leagueRank;
  }

  inline void from_json(const nlohmann::json& j, LolLeaguesLeagueDivision_t& v) {
    v.standings = j.at("standings").get<std::vector<LolLeaguesLeagueStanding_t>>();
    v.leagueRank = j.at("leagueRank").get<LolLeaguesLeagueRank_t>();
  }
  inline std::string to_string(const LolLeaguesLeagueDivision_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
