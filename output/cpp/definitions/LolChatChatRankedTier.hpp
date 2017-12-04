#ifndef SWAGGER_TYPES_LolChatChatRankedTier_HPP
#define SWAGGER_TYPES_LolChatChatRankedTier_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  enum class LolChatChatRankedTier {
    // 
    PLATINUM = 5,
    // 
    DIAMOND = 6,
    // 
    NOT_RANKED = 0,
    // 
    GOLD = 4,
    // 
    SILVER = 3,
    // 
    CHALLENGER = 8,
    // 
    MASTER = 7,
    // 
    PROVISIONAL = 1,
    // 
    BRONZE = 2,
  };

  inline void to_json(nlohmann::json& j, const LolChatChatRankedTier& v) {
    switch(v) {
      case LolChatChatRankedTier::PLATINUM:
        j = "PLATINUM";
      break;
      case LolChatChatRankedTier::DIAMOND:
        j = "DIAMOND";
      break;
      case LolChatChatRankedTier::NOT_RANKED:
        j = "NOT_RANKED";
      break;
      case LolChatChatRankedTier::GOLD:
        j = "GOLD";
      break;
      case LolChatChatRankedTier::SILVER:
        j = "SILVER";
      break;
      case LolChatChatRankedTier::CHALLENGER:
        j = "CHALLENGER";
      break;
      case LolChatChatRankedTier::MASTER:
        j = "MASTER";
      break;
      case LolChatChatRankedTier::PROVISIONAL:
        j = "PROVISIONAL";
      break;
      case LolChatChatRankedTier::BRONZE:
        j = "BRONZE";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, LolChatChatRankedTier& v) {
    const auto& s = j.get<std::string>();
    if(s == "PLATINUM"){
      v = LolChatChatRankedTier::PLATINUM;
      return;
    }
    if(s == "DIAMOND"){
      v = LolChatChatRankedTier::DIAMOND;
      return;
    }
    if(s == "NOT_RANKED"){
      v = LolChatChatRankedTier::NOT_RANKED;
      return;
    }
    if(s == "GOLD"){
      v = LolChatChatRankedTier::GOLD;
      return;
    }
    if(s == "SILVER"){
      v = LolChatChatRankedTier::SILVER;
      return;
    }
    if(s == "CHALLENGER"){
      v = LolChatChatRankedTier::CHALLENGER;
      return;
    }
    if(s == "MASTER"){
      v = LolChatChatRankedTier::MASTER;
      return;
    }
    if(s == "PROVISIONAL"){
      v = LolChatChatRankedTier::PROVISIONAL;
      return;
    }
    if(s == "BRONZE"){
      v = LolChatChatRankedTier::BRONZE;
      return;
    }
  }

}
#endif // SWAGGER_TYPES_LolChatChatRankedTier_HPP
