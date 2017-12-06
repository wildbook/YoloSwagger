#pragma once
#include <json.hpp>
namespace leagueapi {
  enum class LolLeaguesMiniseries_t {
    W_E = 0,
    L_E = 1,
    N_E = 2,
  };

  inline void to_json(nlohmann::json& j, const LolLeaguesMiniseries_t& v) {
    switch(v) {
      case LolLeaguesMiniseries_t::W_E:
        j = "W";
      break;
      case LolLeaguesMiniseries_t::L_E:
        j = "L";
      break;
      case LolLeaguesMiniseries_t::N_E:
        j = "N";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, LolLeaguesMiniseries_t& v) {
    const auto& s = j.get<std::string>();
    if(s == "W"){
      v = LolLeaguesMiniseries_t::W_E;
      return;
    }
    if(s == "L"){
      v = LolLeaguesMiniseries_t::L_E;
      return;
    }
    if(s == "N"){
      v = LolLeaguesMiniseries_t::N_E;
      return;
    }
  }
}
