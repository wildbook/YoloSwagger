#pragma once
#include <json.hpp>
namespace leagueapi {
  enum class LeaguesLcdsLeagueRank_t {
    III_E = 2,
    IV_E = 3,
    II_E = 1,
    V_E = 4,
    I_E = 0,
  };

  inline void to_json(nlohmann::json& j, const LeaguesLcdsLeagueRank_t& v) {
    switch(v) {
      case LeaguesLcdsLeagueRank_t::III_E:
        j = "III";
      break;
      case LeaguesLcdsLeagueRank_t::IV_E:
        j = "IV";
      break;
      case LeaguesLcdsLeagueRank_t::II_E:
        j = "II";
      break;
      case LeaguesLcdsLeagueRank_t::V_E:
        j = "V";
      break;
      case LeaguesLcdsLeagueRank_t::I_E:
        j = "I";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, LeaguesLcdsLeagueRank_t& v) {
    const auto& s = j.get<std::string>();
    if(s == "III"){
      v = LeaguesLcdsLeagueRank_t::III_E;
      return;
    }
    if(s == "IV"){
      v = LeaguesLcdsLeagueRank_t::IV_E;
      return;
    }
    if(s == "II"){
      v = LeaguesLcdsLeagueRank_t::II_E;
      return;
    }
    if(s == "V"){
      v = LeaguesLcdsLeagueRank_t::V_E;
      return;
    }
    if(s == "I"){
      v = LeaguesLcdsLeagueRank_t::I_E;
      return;
    }
  }
}
