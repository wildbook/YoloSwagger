#pragma once
#include <json.hpp>
namespace leagueapi {
  enum class LeaguesLcdsQueueType_t {
    RANKED_FLEX_SR_E = 2,
    RANKED_FLEX_TT_E = 3,
    RANKED_SOLO_5x5_E = 1,
  };

  inline void to_json(nlohmann::json& j, const LeaguesLcdsQueueType_t& v) {
    switch(v) {
      case LeaguesLcdsQueueType_t::RANKED_FLEX_SR_E:
        j = "RANKED_FLEX_SR";
      break;
      case LeaguesLcdsQueueType_t::RANKED_FLEX_TT_E:
        j = "RANKED_FLEX_TT";
      break;
      case LeaguesLcdsQueueType_t::RANKED_SOLO_5x5_E:
        j = "RANKED_SOLO_5x5";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, LeaguesLcdsQueueType_t& v) {
    const auto& s = j.get<std::string>();
    if(s == "RANKED_FLEX_SR"){
      v = LeaguesLcdsQueueType_t::RANKED_FLEX_SR_E;
      return;
    }
    if(s == "RANKED_FLEX_TT"){
      v = LeaguesLcdsQueueType_t::RANKED_FLEX_TT_E;
      return;
    }
    if(s == "RANKED_SOLO_5x5"){
      v = LeaguesLcdsQueueType_t::RANKED_SOLO_5x5_E;
      return;
    }
  }
  inline std::string to_string(const LeaguesLcdsQueueType_t& v) {
    switch(v) {
      case LeaguesLcdsQueueType_t::RANKED_FLEX_SR_E:
        return "RANKED_FLEX_SR";
      case LeaguesLcdsQueueType_t::RANKED_FLEX_TT_E:
        return "RANKED_FLEX_TT";
      case LeaguesLcdsQueueType_t::RANKED_SOLO_5x5_E:
        return "RANKED_SOLO_5x5";
    }
  }

}
