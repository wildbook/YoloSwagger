#ifndef SWAGGER_TYPES_LolRankedStatsRankedQueue_HPP
#define SWAGGER_TYPES_LolRankedStatsRankedQueue_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  enum class LolRankedStatsRankedQueue {
    // 
    INVALID = 0,
    // 
    RANKED_FLEX_SR = 2,
    // 
    RANKED_FLEX_TT = 1,
    // 
    RANKED_SOLO_5x5 = 3,
    // 
    RANKED_TEAM_3x3 = 4,
    // 
    RANKED_TEAM_5x5 = 5,
  };

  inline void to_json(nlohmann::json& j, const LolRankedStatsRankedQueue& v) {
    switch(v) {
      case LolRankedStatsRankedQueue::INVALID:
        j = "INVALID";
      break;
      case LolRankedStatsRankedQueue::RANKED_FLEX_SR:
        j = "RANKED_FLEX_SR";
      break;
      case LolRankedStatsRankedQueue::RANKED_FLEX_TT:
        j = "RANKED_FLEX_TT";
      break;
      case LolRankedStatsRankedQueue::RANKED_SOLO_5x5:
        j = "RANKED_SOLO_5x5";
      break;
      case LolRankedStatsRankedQueue::RANKED_TEAM_3x3:
        j = "RANKED_TEAM_3x3";
      break;
      case LolRankedStatsRankedQueue::RANKED_TEAM_5x5:
        j = "RANKED_TEAM_5x5";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, LolRankedStatsRankedQueue& v) {
    const auto& s = j.get<std::string>();
    if(s == "INVALID"){
      v = LolRankedStatsRankedQueue::INVALID;
      return;
    }
    if(s == "RANKED_FLEX_SR"){
      v = LolRankedStatsRankedQueue::RANKED_FLEX_SR;
      return;
    }
    if(s == "RANKED_FLEX_TT"){
      v = LolRankedStatsRankedQueue::RANKED_FLEX_TT;
      return;
    }
    if(s == "RANKED_SOLO_5x5"){
      v = LolRankedStatsRankedQueue::RANKED_SOLO_5x5;
      return;
    }
    if(s == "RANKED_TEAM_3x3"){
      v = LolRankedStatsRankedQueue::RANKED_TEAM_3x3;
      return;
    }
    if(s == "RANKED_TEAM_5x5"){
      v = LolRankedStatsRankedQueue::RANKED_TEAM_5x5;
      return;
    }
  }

}
#endif // SWAGGER_TYPES_LolRankedStatsRankedQueue_HPP
