#pragma once
#include <json.hpp>
namespace leagueapi {
  enum class LolLeaguesLeagueTier_t {
    MASTER_E = 6,
    CHALLENGER_E = 7,
    NONE_E = 0,
    PLATINUM_E = 4,
    DIAMOND_E = 5,
    GOLD_E = 3,
    SILVER_E = 2,
    BRONZE_E = 1,
  };

  inline void to_json(nlohmann::json& j, const LolLeaguesLeagueTier_t& v) {
    switch(v) {
      case LolLeaguesLeagueTier_t::MASTER_E:
        j = "MASTER";
      break;
      case LolLeaguesLeagueTier_t::CHALLENGER_E:
        j = "CHALLENGER";
      break;
      case LolLeaguesLeagueTier_t::NONE_E:
        j = "NONE";
      break;
      case LolLeaguesLeagueTier_t::PLATINUM_E:
        j = "PLATINUM";
      break;
      case LolLeaguesLeagueTier_t::DIAMOND_E:
        j = "DIAMOND";
      break;
      case LolLeaguesLeagueTier_t::GOLD_E:
        j = "GOLD";
      break;
      case LolLeaguesLeagueTier_t::SILVER_E:
        j = "SILVER";
      break;
      case LolLeaguesLeagueTier_t::BRONZE_E:
        j = "BRONZE";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, LolLeaguesLeagueTier_t& v) {
    const auto& s = j.get<std::string>();
    if(s == "MASTER"){
      v = LolLeaguesLeagueTier_t::MASTER_E;
      return;
    }
    if(s == "CHALLENGER"){
      v = LolLeaguesLeagueTier_t::CHALLENGER_E;
      return;
    }
    if(s == "NONE"){
      v = LolLeaguesLeagueTier_t::NONE_E;
      return;
    }
    if(s == "PLATINUM"){
      v = LolLeaguesLeagueTier_t::PLATINUM_E;
      return;
    }
    if(s == "DIAMOND"){
      v = LolLeaguesLeagueTier_t::DIAMOND_E;
      return;
    }
    if(s == "GOLD"){
      v = LolLeaguesLeagueTier_t::GOLD_E;
      return;
    }
    if(s == "SILVER"){
      v = LolLeaguesLeagueTier_t::SILVER_E;
      return;
    }
    if(s == "BRONZE"){
      v = LolLeaguesLeagueTier_t::BRONZE_E;
      return;
    }
  }
  inline std::string to_string(const LolLeaguesLeagueTier_t& v) {
    switch(v) {
      case LolLeaguesLeagueTier_t::MASTER_E:
        return "MASTER";
      case LolLeaguesLeagueTier_t::CHALLENGER_E:
        return "CHALLENGER";
      case LolLeaguesLeagueTier_t::NONE_E:
        return "NONE";
      case LolLeaguesLeagueTier_t::PLATINUM_E:
        return "PLATINUM";
      case LolLeaguesLeagueTier_t::DIAMOND_E:
        return "DIAMOND";
      case LolLeaguesLeagueTier_t::GOLD_E:
        return "GOLD";
      case LolLeaguesLeagueTier_t::SILVER_E:
        return "SILVER";
      case LolLeaguesLeagueTier_t::BRONZE_E:
        return "BRONZE";
    }
  }

}
