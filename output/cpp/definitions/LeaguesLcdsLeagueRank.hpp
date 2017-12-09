#pragma once
#include <json.hpp>
namespace leagueapi {
  enum class LeaguesLcdsLeagueRank_t {
    III_E = 2,
    II_E = 1,
    I_E = 0,
    V_E = 4,
    IV_E = 3,
  };

  inline void to_json(nlohmann::json& j, const LeaguesLcdsLeagueRank_t& v) {
    switch(v) {
      case LeaguesLcdsLeagueRank_t::III_E:
        j = "III";
      break;
      case LeaguesLcdsLeagueRank_t::II_E:
        j = "II";
      break;
      case LeaguesLcdsLeagueRank_t::I_E:
        j = "I";
      break;
      case LeaguesLcdsLeagueRank_t::V_E:
        j = "V";
      break;
      case LeaguesLcdsLeagueRank_t::IV_E:
        j = "IV";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, LeaguesLcdsLeagueRank_t& v) {
    const auto& s = j.get<std::string>();
    if(s == "III"){
      v = LeaguesLcdsLeagueRank_t::III_E;
      return;
    }
    if(s == "II"){
      v = LeaguesLcdsLeagueRank_t::II_E;
      return;
    }
    if(s == "I"){
      v = LeaguesLcdsLeagueRank_t::I_E;
      return;
    }
    if(s == "V"){
      v = LeaguesLcdsLeagueRank_t::V_E;
      return;
    }
    if(s == "IV"){
      v = LeaguesLcdsLeagueRank_t::IV_E;
      return;
    }
  }
  inline std::string to_string(const LeaguesLcdsLeagueRank_t& v) {
    switch(v) {
      case LeaguesLcdsLeagueRank_t::III_E:
        return "III";
      case LeaguesLcdsLeagueRank_t::II_E:
        return "II";
      case LeaguesLcdsLeagueRank_t::I_E:
        return "I";
      case LeaguesLcdsLeagueRank_t::V_E:
        return "V";
      case LeaguesLcdsLeagueRank_t::IV_E:
        return "IV";
    }
  }

}
