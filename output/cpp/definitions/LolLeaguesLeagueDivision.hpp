#pragma once
#include <json.hpp>
#include <optional>
#include "LolLeaguesLeagueRank.hpp"
#include "LolLeaguesLeagueStanding.hpp"
namespace leagueapi {
  struct LolLeaguesLeagueDivision_t {
    LolLeaguesLeagueRank_t leagueRank;
    std::vector<LolLeaguesLeagueStanding_t> standings;
  };

  inline void to_json(nlohmann::json& j, const LolLeaguesLeagueDivision_t& v) {
    j["leagueRank"] = v.leagueRank;
    j["standings"] = v.standings;
  }

  inline void from_json(const nlohmann::json& j, LolLeaguesLeagueDivision_t& v) {
    v.leagueRank = j.at("leagueRank").get<LolLeaguesLeagueRank_t>();
    v.standings = j.at("standings").get<std::vector<LolLeaguesLeagueStanding_t>>();
  }
  inline std::string to_string(const LolLeaguesLeagueDivision_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
