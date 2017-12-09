#pragma once
#include <json.hpp>
namespace leagueapi {
  enum class GameQueuesLcdsAllowSpectators_t {
    DROPINONLY_E = 2,
    LOBBYONLY_E = 1,
    ALL_E = 3,
    NONE_E = 0,
  };

  inline void to_json(nlohmann::json& j, const GameQueuesLcdsAllowSpectators_t& v) {
    switch(v) {
      case GameQueuesLcdsAllowSpectators_t::DROPINONLY_E:
        j = "DROPINONLY";
      break;
      case GameQueuesLcdsAllowSpectators_t::LOBBYONLY_E:
        j = "LOBBYONLY";
      break;
      case GameQueuesLcdsAllowSpectators_t::ALL_E:
        j = "ALL";
      break;
      case GameQueuesLcdsAllowSpectators_t::NONE_E:
        j = "NONE";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, GameQueuesLcdsAllowSpectators_t& v) {
    const auto& s = j.get<std::string>();
    if(s == "DROPINONLY"){
      v = GameQueuesLcdsAllowSpectators_t::DROPINONLY_E;
      return;
    }
    if(s == "LOBBYONLY"){
      v = GameQueuesLcdsAllowSpectators_t::LOBBYONLY_E;
      return;
    }
    if(s == "ALL"){
      v = GameQueuesLcdsAllowSpectators_t::ALL_E;
      return;
    }
    if(s == "NONE"){
      v = GameQueuesLcdsAllowSpectators_t::NONE_E;
      return;
    }
  }
  inline std::string to_string(const GameQueuesLcdsAllowSpectators_t& v) {
    switch(v) {
      case GameQueuesLcdsAllowSpectators_t::DROPINONLY_E:
        return "DROPINONLY";
      case GameQueuesLcdsAllowSpectators_t::LOBBYONLY_E:
        return "LOBBYONLY";
      case GameQueuesLcdsAllowSpectators_t::ALL_E:
        return "ALL";
      case GameQueuesLcdsAllowSpectators_t::NONE_E:
        return "NONE";
    }
  }

}
