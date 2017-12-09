#pragma once
#include <json.hpp>
namespace leagueapi {
  enum class LolLeaguesLeagueQueueType_t {
    FLEXSR_E = 3,
    NONE_E = 0,
    SOLO5V5_E = 1,
    FLEXTT_E = 2,
  };

  inline void to_json(nlohmann::json& j, const LolLeaguesLeagueQueueType_t& v) {
    switch(v) {
      case LolLeaguesLeagueQueueType_t::FLEXSR_E:
        j = "FLEXSR";
      break;
      case LolLeaguesLeagueQueueType_t::NONE_E:
        j = "NONE";
      break;
      case LolLeaguesLeagueQueueType_t::SOLO5V5_E:
        j = "SOLO5V5";
      break;
      case LolLeaguesLeagueQueueType_t::FLEXTT_E:
        j = "FLEXTT";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, LolLeaguesLeagueQueueType_t& v) {
    const auto& s = j.get<std::string>();
    if(s == "FLEXSR"){
      v = LolLeaguesLeagueQueueType_t::FLEXSR_E;
      return;
    }
    if(s == "NONE"){
      v = LolLeaguesLeagueQueueType_t::NONE_E;
      return;
    }
    if(s == "SOLO5V5"){
      v = LolLeaguesLeagueQueueType_t::SOLO5V5_E;
      return;
    }
    if(s == "FLEXTT"){
      v = LolLeaguesLeagueQueueType_t::FLEXTT_E;
      return;
    }
  }
  inline std::string to_string(const LolLeaguesLeagueQueueType_t& v) {
    switch(v) {
      case LolLeaguesLeagueQueueType_t::FLEXSR_E:
        return "FLEXSR";
      case LolLeaguesLeagueQueueType_t::NONE_E:
        return "NONE";
      case LolLeaguesLeagueQueueType_t::SOLO5V5_E:
        return "SOLO5V5";
      case LolLeaguesLeagueQueueType_t::FLEXTT_E:
        return "FLEXTT";
    }
  }

}
