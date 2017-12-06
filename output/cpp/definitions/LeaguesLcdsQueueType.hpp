#pragma once
#include <json.hpp>
namespace leagueapi {
  enum class LeaguesLcdsQueueType_t {
    RANKED_FLEX_SR_E = 2,
    RANKED_SOLO_5x5_E = 1,
    RANKED_FLEX_TT_E = 3,
  };

  inline void to_json(nlohmann::json& j, const LeaguesLcdsQueueType_t& v) {
    switch(v) {
      case LeaguesLcdsQueueType_t::RANKED_FLEX_SR_E:
        j = "RANKED_FLEX_SR";
      break;
      case LeaguesLcdsQueueType_t::RANKED_SOLO_5x5_E:
        j = "RANKED_SOLO_5x5";
      break;
      case LeaguesLcdsQueueType_t::RANKED_FLEX_TT_E:
        j = "RANKED_FLEX_TT";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, LeaguesLcdsQueueType_t& v) {
    const auto& s = j.get<std::string>();
    if(s == "RANKED_FLEX_SR"){
      v = LeaguesLcdsQueueType_t::RANKED_FLEX_SR_E;
      return;
    }
    if(s == "RANKED_SOLO_5x5"){
      v = LeaguesLcdsQueueType_t::RANKED_SOLO_5x5_E;
      return;
    }
    if(s == "RANKED_FLEX_TT"){
      v = LeaguesLcdsQueueType_t::RANKED_FLEX_TT_E;
      return;
    }
  }
}
