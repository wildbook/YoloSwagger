#pragma once
#include <json.hpp>
namespace leagueapi {
  enum class SubState_t {
    REVOKED_E = 3,
    FORCED_NOT_READY_E = 5,
    DECLINED_E = 2,
    PENDING_E = 1,
    SUGGESTED_E = 0,
    NOT_READY_E = 4,
    READY_E = 6,
  };

  inline void to_json(nlohmann::json& j, const SubState_t& v) {
    switch(v) {
      case SubState_t::REVOKED_E:
        j = "REVOKED";
      break;
      case SubState_t::FORCED_NOT_READY_E:
        j = "FORCED_NOT_READY";
      break;
      case SubState_t::DECLINED_E:
        j = "DECLINED";
      break;
      case SubState_t::PENDING_E:
        j = "PENDING";
      break;
      case SubState_t::SUGGESTED_E:
        j = "SUGGESTED";
      break;
      case SubState_t::NOT_READY_E:
        j = "NOT_READY";
      break;
      case SubState_t::READY_E:
        j = "READY";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, SubState_t& v) {
    const auto& s = j.get<std::string>();
    if(s == "REVOKED"){
      v = SubState_t::REVOKED_E;
      return;
    }
    if(s == "FORCED_NOT_READY"){
      v = SubState_t::FORCED_NOT_READY_E;
      return;
    }
    if(s == "DECLINED"){
      v = SubState_t::DECLINED_E;
      return;
    }
    if(s == "PENDING"){
      v = SubState_t::PENDING_E;
      return;
    }
    if(s == "SUGGESTED"){
      v = SubState_t::SUGGESTED_E;
      return;
    }
    if(s == "NOT_READY"){
      v = SubState_t::NOT_READY_E;
      return;
    }
    if(s == "READY"){
      v = SubState_t::READY_E;
      return;
    }
  }
  inline std::string to_string(const SubState_t& v) {
    switch(v) {
      case SubState_t::REVOKED_E:
        return "REVOKED";
      case SubState_t::FORCED_NOT_READY_E:
        return "FORCED_NOT_READY";
      case SubState_t::DECLINED_E:
        return "DECLINED";
      case SubState_t::PENDING_E:
        return "PENDING";
      case SubState_t::SUGGESTED_E:
        return "SUGGESTED";
      case SubState_t::NOT_READY_E:
        return "NOT_READY";
      case SubState_t::READY_E:
        return "READY";
    }
  }

}
