#pragma once
#include <json.hpp>
namespace leagueapi {
  enum class LolRankedStatsRankedTier_t {
    PLATINUM_E = 5,
    DIAMOND_E = 6,
    NOT_RANKED_E = 0,
    GOLD_E = 4,
    SILVER_E = 3,
    CHALLENGER_E = 8,
    MASTER_E = 7,
    PROVISIONAL_E = 1,
    BRONZE_E = 2,
  };

  inline void to_json(nlohmann::json& j, const LolRankedStatsRankedTier_t& v) {
    switch(v) {
      case LolRankedStatsRankedTier_t::PLATINUM_E:
        j = "PLATINUM";
      break;
      case LolRankedStatsRankedTier_t::DIAMOND_E:
        j = "DIAMOND";
      break;
      case LolRankedStatsRankedTier_t::NOT_RANKED_E:
        j = "NOT_RANKED";
      break;
      case LolRankedStatsRankedTier_t::GOLD_E:
        j = "GOLD";
      break;
      case LolRankedStatsRankedTier_t::SILVER_E:
        j = "SILVER";
      break;
      case LolRankedStatsRankedTier_t::CHALLENGER_E:
        j = "CHALLENGER";
      break;
      case LolRankedStatsRankedTier_t::MASTER_E:
        j = "MASTER";
      break;
      case LolRankedStatsRankedTier_t::PROVISIONAL_E:
        j = "PROVISIONAL";
      break;
      case LolRankedStatsRankedTier_t::BRONZE_E:
        j = "BRONZE";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, LolRankedStatsRankedTier_t& v) {
    const auto& s = j.get<std::string>();
    if(s == "PLATINUM"){
      v = LolRankedStatsRankedTier_t::PLATINUM_E;
      return;
    }
    if(s == "DIAMOND"){
      v = LolRankedStatsRankedTier_t::DIAMOND_E;
      return;
    }
    if(s == "NOT_RANKED"){
      v = LolRankedStatsRankedTier_t::NOT_RANKED_E;
      return;
    }
    if(s == "GOLD"){
      v = LolRankedStatsRankedTier_t::GOLD_E;
      return;
    }
    if(s == "SILVER"){
      v = LolRankedStatsRankedTier_t::SILVER_E;
      return;
    }
    if(s == "CHALLENGER"){
      v = LolRankedStatsRankedTier_t::CHALLENGER_E;
      return;
    }
    if(s == "MASTER"){
      v = LolRankedStatsRankedTier_t::MASTER_E;
      return;
    }
    if(s == "PROVISIONAL"){
      v = LolRankedStatsRankedTier_t::PROVISIONAL_E;
      return;
    }
    if(s == "BRONZE"){
      v = LolRankedStatsRankedTier_t::BRONZE_E;
      return;
    }
  }
  inline std::string to_string(const LolRankedStatsRankedTier_t& v) {
    switch(v) {
      case LolRankedStatsRankedTier_t::PLATINUM_E:
        return "PLATINUM";
      case LolRankedStatsRankedTier_t::DIAMOND_E:
        return "DIAMOND";
      case LolRankedStatsRankedTier_t::NOT_RANKED_E:
        return "NOT_RANKED";
      case LolRankedStatsRankedTier_t::GOLD_E:
        return "GOLD";
      case LolRankedStatsRankedTier_t::SILVER_E:
        return "SILVER";
      case LolRankedStatsRankedTier_t::CHALLENGER_E:
        return "CHALLENGER";
      case LolRankedStatsRankedTier_t::MASTER_E:
        return "MASTER";
      case LolRankedStatsRankedTier_t::PROVISIONAL_E:
        return "PROVISIONAL";
      case LolRankedStatsRankedTier_t::BRONZE_E:
        return "BRONZE";
    }
  }

}
