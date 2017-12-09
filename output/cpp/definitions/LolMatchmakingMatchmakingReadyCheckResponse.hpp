#pragma once
#include <json.hpp>
namespace leagueapi {
  enum class LolMatchmakingMatchmakingReadyCheckResponse_t {
    Accepted_E = 49,
    None_E = 48,
    Declined_E = 50,
  };

  inline void to_json(nlohmann::json& j, const LolMatchmakingMatchmakingReadyCheckResponse_t& v) {
    switch(v) {
      case LolMatchmakingMatchmakingReadyCheckResponse_t::Accepted_E:
        j = "Accepted";
      break;
      case LolMatchmakingMatchmakingReadyCheckResponse_t::None_E:
        j = "None";
      break;
      case LolMatchmakingMatchmakingReadyCheckResponse_t::Declined_E:
        j = "Declined";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, LolMatchmakingMatchmakingReadyCheckResponse_t& v) {
    const auto& s = j.get<std::string>();
    if(s == "Accepted"){
      v = LolMatchmakingMatchmakingReadyCheckResponse_t::Accepted_E;
      return;
    }
    if(s == "None"){
      v = LolMatchmakingMatchmakingReadyCheckResponse_t::None_E;
      return;
    }
    if(s == "Declined"){
      v = LolMatchmakingMatchmakingReadyCheckResponse_t::Declined_E;
      return;
    }
  }
  inline std::string to_string(const LolMatchmakingMatchmakingReadyCheckResponse_t& v) {
    switch(v) {
      case LolMatchmakingMatchmakingReadyCheckResponse_t::Accepted_E:
        return "Accepted";
      case LolMatchmakingMatchmakingReadyCheckResponse_t::None_E:
        return "None";
      case LolMatchmakingMatchmakingReadyCheckResponse_t::Declined_E:
        return "Declined";
    }
  }

}
