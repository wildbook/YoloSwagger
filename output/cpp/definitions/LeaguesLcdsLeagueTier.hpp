#pragma once
#include <json.hpp>
namespace leagueapi {
  enum class LeaguesLcdsLeagueTier_t {
    DIAMOND_E = 5,
    PLATINUM_E = 4,
    CHALLENGER_E = 7,
    GOLD_E = 3,
    SILVER_E = 2,
    MASTER_E = 6,
    BRONZE_E = 1,
  };

  inline void to_json(nlohmann::json& j, const LeaguesLcdsLeagueTier_t& v) {
    switch(v) {
      case LeaguesLcdsLeagueTier_t::DIAMOND_E:
        j = "DIAMOND";
      break;
      case LeaguesLcdsLeagueTier_t::PLATINUM_E:
        j = "PLATINUM";
      break;
      case LeaguesLcdsLeagueTier_t::CHALLENGER_E:
        j = "CHALLENGER";
      break;
      case LeaguesLcdsLeagueTier_t::GOLD_E:
        j = "GOLD";
      break;
      case LeaguesLcdsLeagueTier_t::SILVER_E:
        j = "SILVER";
      break;
      case LeaguesLcdsLeagueTier_t::MASTER_E:
        j = "MASTER";
      break;
      case LeaguesLcdsLeagueTier_t::BRONZE_E:
        j = "BRONZE";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, LeaguesLcdsLeagueTier_t& v) {
    const auto& s = j.get<std::string>();
    if(s == "DIAMOND"){
      v = LeaguesLcdsLeagueTier_t::DIAMOND_E;
      return;
    }
    if(s == "PLATINUM"){
      v = LeaguesLcdsLeagueTier_t::PLATINUM_E;
      return;
    }
    if(s == "CHALLENGER"){
      v = LeaguesLcdsLeagueTier_t::CHALLENGER_E;
      return;
    }
    if(s == "GOLD"){
      v = LeaguesLcdsLeagueTier_t::GOLD_E;
      return;
    }
    if(s == "SILVER"){
      v = LeaguesLcdsLeagueTier_t::SILVER_E;
      return;
    }
    if(s == "MASTER"){
      v = LeaguesLcdsLeagueTier_t::MASTER_E;
      return;
    }
    if(s == "BRONZE"){
      v = LeaguesLcdsLeagueTier_t::BRONZE_E;
      return;
    }
  }
  inline std::string to_string(const LeaguesLcdsLeagueTier_t& v) {
    switch(v) {
      case LeaguesLcdsLeagueTier_t::DIAMOND_E:
        return "DIAMOND";
      case LeaguesLcdsLeagueTier_t::PLATINUM_E:
        return "PLATINUM";
      case LeaguesLcdsLeagueTier_t::CHALLENGER_E:
        return "CHALLENGER";
      case LeaguesLcdsLeagueTier_t::GOLD_E:
        return "GOLD";
      case LeaguesLcdsLeagueTier_t::SILVER_E:
        return "SILVER";
      case LeaguesLcdsLeagueTier_t::MASTER_E:
        return "MASTER";
      case LeaguesLcdsLeagueTier_t::BRONZE_E:
        return "BRONZE";
    }
  }

}
