#ifndef SWAGGER_TYPES_LolChatChatRankedTier_HPP
#define SWAGGER_TYPES_LolChatChatRankedTier_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  enum class LolChatChatRankedTier {
    // 
    BRONZE = 2,
    // 
    CHALLENGER = 8,
    // 
    DIAMOND = 6,
    // 
    GOLD = 4,
    // 
    MASTER = 7,
    // 
    NOT_RANKED = 0,
    // 
    PLATINUM = 5,
    // 
    PROVISIONAL = 1,
    // 
    SILVER = 3,
  };

  inline void to_json(nlohmann::json& j, const LolChatChatRankedTier& v) {
    switch(v) {
      case LolChatChatRankedTier::BRONZE:
        j = "BRONZE";
      break;
      case LolChatChatRankedTier::CHALLENGER:
        j = "CHALLENGER";
      break;
      case LolChatChatRankedTier::DIAMOND:
        j = "DIAMOND";
      break;
      case LolChatChatRankedTier::GOLD:
        j = "GOLD";
      break;
      case LolChatChatRankedTier::MASTER:
        j = "MASTER";
      break;
      case LolChatChatRankedTier::NOT_RANKED:
        j = "NOT_RANKED";
      break;
      case LolChatChatRankedTier::PLATINUM:
        j = "PLATINUM";
      break;
      case LolChatChatRankedTier::PROVISIONAL:
        j = "PROVISIONAL";
      break;
      case LolChatChatRankedTier::SILVER:
        j = "SILVER";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, LolChatChatRankedTier& v) {
    const auto s& = j.get<std::string>();
    if(s == "BRONZE"){
      v = LolChatChatRankedTier::BRONZE;
      return;
    }
    if(s == "CHALLENGER"){
      v = LolChatChatRankedTier::CHALLENGER;
      return;
    }
    if(s == "DIAMOND"){
      v = LolChatChatRankedTier::DIAMOND;
      return;
    }
    if(s == "GOLD"){
      v = LolChatChatRankedTier::GOLD;
      return;
    }
    if(s == "MASTER"){
      v = LolChatChatRankedTier::MASTER;
      return;
    }
    if(s == "NOT_RANKED"){
      v = LolChatChatRankedTier::NOT_RANKED;
      return;
    }
    if(s == "PLATINUM"){
      v = LolChatChatRankedTier::PLATINUM;
      return;
    }
    if(s == "PROVISIONAL"){
      v = LolChatChatRankedTier::PROVISIONAL;
      return;
    }
    if(s == "SILVER"){
      v = LolChatChatRankedTier::SILVER;
      return;
    }
  }

}
#endif // SWAGGER_TYPES_LolChatChatRankedTier_HPP
