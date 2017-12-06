#pragma once
#include <json.hpp>
namespace leagueapi {
  enum class LolChatChatRankedTier_t {
    BRONZE_E = 2,
    CHALLENGER_E = 8,
    DIAMOND_E = 6,
    GOLD_E = 4,
    MASTER_E = 7,
    NOT_RANKED_E = 0,
    PLATINUM_E = 5,
    PROVISIONAL_E = 1,
    SILVER_E = 3,
  };

  inline void to_json(nlohmann::json& j, const LolChatChatRankedTier_t& v) {
    switch(v) {
      case LolChatChatRankedTier_t::BRONZE_E:
        j = "BRONZE";
      break;
      case LolChatChatRankedTier_t::CHALLENGER_E:
        j = "CHALLENGER";
      break;
      case LolChatChatRankedTier_t::DIAMOND_E:
        j = "DIAMOND";
      break;
      case LolChatChatRankedTier_t::GOLD_E:
        j = "GOLD";
      break;
      case LolChatChatRankedTier_t::MASTER_E:
        j = "MASTER";
      break;
      case LolChatChatRankedTier_t::NOT_RANKED_E:
        j = "NOT_RANKED";
      break;
      case LolChatChatRankedTier_t::PLATINUM_E:
        j = "PLATINUM";
      break;
      case LolChatChatRankedTier_t::PROVISIONAL_E:
        j = "PROVISIONAL";
      break;
      case LolChatChatRankedTier_t::SILVER_E:
        j = "SILVER";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, LolChatChatRankedTier_t& v) {
    const auto& s = j.get<std::string>();
    if(s == "BRONZE"){
      v = LolChatChatRankedTier_t::BRONZE_E;
      return;
    }
    if(s == "CHALLENGER"){
      v = LolChatChatRankedTier_t::CHALLENGER_E;
      return;
    }
    if(s == "DIAMOND"){
      v = LolChatChatRankedTier_t::DIAMOND_E;
      return;
    }
    if(s == "GOLD"){
      v = LolChatChatRankedTier_t::GOLD_E;
      return;
    }
    if(s == "MASTER"){
      v = LolChatChatRankedTier_t::MASTER_E;
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
    if(s == "PROVISIONAL"){
      v = LolChatChatRankedTier_t::PROVISIONAL_E;
      return;
    }
    if(s == "SILVER"){
      v = LolChatChatRankedTier_t::SILVER_E;
      return;
    }
  }
}
