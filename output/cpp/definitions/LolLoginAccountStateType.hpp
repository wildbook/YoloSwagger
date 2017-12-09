#pragma once
#include <json.hpp>
namespace leagueapi {
  enum class LolLoginAccountStateType_t {
    ENABLED_E = 2,
    TRANSFERRING_IN_E = 4,
    TRANSFERRED_OUT_E = 5,
    CREATING_E = 1,
    GENERATING_E = 6,
    TRANSFERRING_OUT_E = 3,
  };

  inline void to_json(nlohmann::json& j, const LolLoginAccountStateType_t& v) {
    switch(v) {
      case LolLoginAccountStateType_t::ENABLED_E:
        j = "ENABLED";
      break;
      case LolLoginAccountStateType_t::TRANSFERRING_IN_E:
        j = "TRANSFERRING_IN";
      break;
      case LolLoginAccountStateType_t::TRANSFERRED_OUT_E:
        j = "TRANSFERRED_OUT";
      break;
      case LolLoginAccountStateType_t::CREATING_E:
        j = "CREATING";
      break;
      case LolLoginAccountStateType_t::GENERATING_E:
        j = "GENERATING";
      break;
      case LolLoginAccountStateType_t::TRANSFERRING_OUT_E:
        j = "TRANSFERRING_OUT";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, LolLoginAccountStateType_t& v) {
    const auto& s = j.get<std::string>();
    if(s == "ENABLED"){
      v = LolLoginAccountStateType_t::ENABLED_E;
      return;
    }
    if(s == "TRANSFERRING_IN"){
      v = LolLoginAccountStateType_t::TRANSFERRING_IN_E;
      return;
    }
    if(s == "TRANSFERRED_OUT"){
      v = LolLoginAccountStateType_t::TRANSFERRED_OUT_E;
      return;
    }
    if(s == "CREATING"){
      v = LolLoginAccountStateType_t::CREATING_E;
      return;
    }
    if(s == "GENERATING"){
      v = LolLoginAccountStateType_t::GENERATING_E;
      return;
    }
    if(s == "TRANSFERRING_OUT"){
      v = LolLoginAccountStateType_t::TRANSFERRING_OUT_E;
      return;
    }
  }
  inline std::string to_string(const LolLoginAccountStateType_t& v) {
    switch(v) {
      case LolLoginAccountStateType_t::ENABLED_E:
        return "ENABLED";
      case LolLoginAccountStateType_t::TRANSFERRING_IN_E:
        return "TRANSFERRING_IN";
      case LolLoginAccountStateType_t::TRANSFERRED_OUT_E:
        return "TRANSFERRED_OUT";
      case LolLoginAccountStateType_t::CREATING_E:
        return "CREATING";
      case LolLoginAccountStateType_t::GENERATING_E:
        return "GENERATING";
      case LolLoginAccountStateType_t::TRANSFERRING_OUT_E:
        return "TRANSFERRING_OUT";
    }
  }

}
