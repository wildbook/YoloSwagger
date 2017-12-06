#pragma once
#include <json.hpp>
namespace leagueapi {
  enum class ClientBracketMatchStatus_t {
    STARTED_E = 1,
    UPCOMING_E = 0,
    COMPLETED_E = 2,
  };

  inline void to_json(nlohmann::json& j, const ClientBracketMatchStatus_t& v) {
    switch(v) {
      case ClientBracketMatchStatus_t::STARTED_E:
        j = "STARTED";
      break;
      case ClientBracketMatchStatus_t::UPCOMING_E:
        j = "UPCOMING";
      break;
      case ClientBracketMatchStatus_t::COMPLETED_E:
        j = "COMPLETED";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, ClientBracketMatchStatus_t& v) {
    const auto& s = j.get<std::string>();
    if(s == "STARTED"){
      v = ClientBracketMatchStatus_t::STARTED_E;
      return;
    }
    if(s == "UPCOMING"){
      v = ClientBracketMatchStatus_t::UPCOMING_E;
      return;
    }
    if(s == "COMPLETED"){
      v = ClientBracketMatchStatus_t::COMPLETED_E;
      return;
    }
  }
}
