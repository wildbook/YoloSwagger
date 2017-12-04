#ifndef SWAGGER_TYPES_LeaguesLcdsQueueType_HPP
#define SWAGGER_TYPES_LeaguesLcdsQueueType_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  enum class LeaguesLcdsQueueType {
    // 
    RANKED_FLEX_SR = 2,
    // 
    RANKED_FLEX_TT = 3,
    // 
    RANKED_SOLO_5x5 = 1,
  };

  inline void to_json(nlohmann::json& j, const LeaguesLcdsQueueType& v) {
    switch(v) {
      case LeaguesLcdsQueueType::RANKED_FLEX_SR:
        j = "RANKED_FLEX_SR";
      break;
      case LeaguesLcdsQueueType::RANKED_FLEX_TT:
        j = "RANKED_FLEX_TT";
      break;
      case LeaguesLcdsQueueType::RANKED_SOLO_5x5:
        j = "RANKED_SOLO_5x5";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, LeaguesLcdsQueueType& v) {
    const auto& s = j.get<std::string>();
    if(s == "RANKED_FLEX_SR"){
      v = LeaguesLcdsQueueType::RANKED_FLEX_SR;
      return;
    }
    if(s == "RANKED_FLEX_TT"){
      v = LeaguesLcdsQueueType::RANKED_FLEX_TT;
      return;
    }
    if(s == "RANKED_SOLO_5x5"){
      v = LeaguesLcdsQueueType::RANKED_SOLO_5x5;
      return;
    }
  }

}
#endif // SWAGGER_TYPES_LeaguesLcdsQueueType_HPP
