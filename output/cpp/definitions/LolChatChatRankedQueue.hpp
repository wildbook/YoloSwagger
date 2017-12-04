#ifndef SWAGGER_TYPES_LolChatChatRankedQueue_HPP
#define SWAGGER_TYPES_LolChatChatRankedQueue_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  enum class LolChatChatRankedQueue {
    // 
    RANKED_TEAM_3x3 = 4,
    // 
    INVALID = 0,
    // 
    RANKED_FLEX_SR = 2,
    // 
    RANKED_FLEX_TT = 1,
    // 
    RANKED_TEAM_5x5 = 5,
    // 
    RANKED_SOLO_5x5 = 3,
  };

  inline void to_json(nlohmann::json& j, const LolChatChatRankedQueue& v) {
    switch(v) {
      case LolChatChatRankedQueue::RANKED_TEAM_3x3:
        j = "RANKED_TEAM_3x3";
      break;
      case LolChatChatRankedQueue::INVALID:
        j = "INVALID";
      break;
      case LolChatChatRankedQueue::RANKED_FLEX_SR:
        j = "RANKED_FLEX_SR";
      break;
      case LolChatChatRankedQueue::RANKED_FLEX_TT:
        j = "RANKED_FLEX_TT";
      break;
      case LolChatChatRankedQueue::RANKED_TEAM_5x5:
        j = "RANKED_TEAM_5x5";
      break;
      case LolChatChatRankedQueue::RANKED_SOLO_5x5:
        j = "RANKED_SOLO_5x5";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, LolChatChatRankedQueue& v) {
    const auto& s = j.get<std::string>();
    if(s == "RANKED_TEAM_3x3"){
      v = LolChatChatRankedQueue::RANKED_TEAM_3x3;
      return;
    }
    if(s == "INVALID"){
      v = LolChatChatRankedQueue::INVALID;
      return;
    }
    if(s == "RANKED_FLEX_SR"){
      v = LolChatChatRankedQueue::RANKED_FLEX_SR;
      return;
    }
    if(s == "RANKED_FLEX_TT"){
      v = LolChatChatRankedQueue::RANKED_FLEX_TT;
      return;
    }
    if(s == "RANKED_TEAM_5x5"){
      v = LolChatChatRankedQueue::RANKED_TEAM_5x5;
      return;
    }
    if(s == "RANKED_SOLO_5x5"){
      v = LolChatChatRankedQueue::RANKED_SOLO_5x5;
      return;
    }
  }

}
#endif // SWAGGER_TYPES_LolChatChatRankedQueue_HPP
