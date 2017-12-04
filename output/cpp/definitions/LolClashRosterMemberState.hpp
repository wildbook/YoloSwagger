#ifndef SWAGGER_TYPES_LolClashRosterMemberState_HPP
#define SWAGGER_TYPES_LolClashRosterMemberState_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  enum class LolClashRosterMemberState {
    // 
    READY = 3,
    // 
    FORCED_NOT_READY = 2,
    // 
    NOT_READY = 1,
    // 
    PENDING = 0,
  };

  inline void to_json(nlohmann::json& j, const LolClashRosterMemberState& v) {
    switch(v) {
      case LolClashRosterMemberState::READY:
        j = "READY";
      break;
      case LolClashRosterMemberState::FORCED_NOT_READY:
        j = "FORCED_NOT_READY";
      break;
      case LolClashRosterMemberState::NOT_READY:
        j = "NOT_READY";
      break;
      case LolClashRosterMemberState::PENDING:
        j = "PENDING";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, LolClashRosterMemberState& v) {
    const auto& s = j.get<std::string>();
    if(s == "READY"){
      v = LolClashRosterMemberState::READY;
      return;
    }
    if(s == "FORCED_NOT_READY"){
      v = LolClashRosterMemberState::FORCED_NOT_READY;
      return;
    }
    if(s == "NOT_READY"){
      v = LolClashRosterMemberState::NOT_READY;
      return;
    }
    if(s == "PENDING"){
      v = LolClashRosterMemberState::PENDING;
      return;
    }
  }

}
#endif // SWAGGER_TYPES_LolClashRosterMemberState_HPP
