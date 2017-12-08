#pragma once
#include <json.hpp>
namespace leagueapi {
  enum class LolChatChatRankedTier_t {
    GOLD_E = 4,
    NOT_RANKED_E = 0,
    PLATINUM_E = 5,
    SILVER_E = 3,
    DIAMOND_E = 6,
    MASTER_E = 7,
    PROVISIONAL_E = 1,
    BRONZE_E = 2,
    CHALLENGER_E = 8,
  };

  inline void to_json(nlohmann::json& j, const LolChatChatRankedTier_t& v) {
    switch(v) {
      case LolChatChatRankedTier_t::GOLD_E:
        j = "GOLD";
      break;
      case LolChatChatRankedTier_t::NOT_RANKED_E:
        j = "NOT_RANKED";
      break;
      case LolChatChatRankedTier_t::PLATINUM_E:
        j = "PLATINUM";
      break;
      case LolChatChatRankedTier_t::SILVER_E:
        j = "SILVER";
      break;
      case LolChatChatRankedTier_t::DIAMOND_E:
        j = "DIAMOND";
      break;
      case LolChatChatRankedTier_t::MASTER_E:
        j = "MASTER";
      break;
      case LolChatChatRankedTier_t::PROVISIONAL_E:
        j = "PROVISIONAL";
      break;
      case LolChatChatRankedTier_t::BRONZE_E:
        j = "BRONZE";
      break;
      case LolChatChatRankedTier_t::CHALLENGER_E:
        j = "CHALLENGER";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, LolChatChatRankedTier_t& v) {
    const auto& s = j.get<std::string>();
    if(s == "GOLD"){
      v = LolChatChatRankedTier_t::GOLD_E;
      return;
    }
    if(s == "NOT_RANKED"){
      v = LolChatChatRankedTier_t::NOT_RANKED_E;
      return;
    }
    if(s == "PLATINUM"){
      v = LolChatChatRankedTier_t::PLATINUM_E;
      return;
    }
    if(s == "SILVER"){
      v = LolChatChatRankedTier_t::SILVER_E;
      return;
    }
    if(s == "DIAMOND"){
      v = LolChatChatRankedTier_t::DIAMOND_E;
      return;
    }
    if(s == "MASTER"){
      v = LolChatChatRankedTier_t::MASTER_E;
      return;
    }
    if(s == "PROVISIONAL"){
      v = LolChatChatRankedTier_t::PROVISIONAL_E;
      return;
    }
    if(s == "BRONZE"){
      v = LolChatChatRankedTier_t::BRONZE_E;
      return;
    }
    if(s == "CHALLENGER"){
      v = LolChatChatRankedTier_t::CHALLENGER_E;
      return;
    }
  }
  inline std::string to_string(const LolChatChatRankedTier_t& v) {
    switch(v) {
      case LolChatChatRankedTier_t::GOLD_E:
        return "GOLD";
      case LolChatChatRankedTier_t::NOT_RANKED_E:
        return "NOT_RANKED";
      case LolChatChatRankedTier_t::PLATINUM_E:
        return "PLATINUM";
      case LolChatChatRankedTier_t::SILVER_E:
        return "SILVER";
      case LolChatChatRankedTier_t::DIAMOND_E:
        return "DIAMOND";
      case LolChatChatRankedTier_t::MASTER_E:
        return "MASTER";
      case LolChatChatRankedTier_t::PROVISIONAL_E:
        return "PROVISIONAL";
      case LolChatChatRankedTier_t::BRONZE_E:
        return "BRONZE";
      case LolChatChatRankedTier_t::CHALLENGER_E:
        return "CHALLENGER";
    }
  }

}
