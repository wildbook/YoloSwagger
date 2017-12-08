#pragma once
#include <json.hpp>
namespace leagueapi {
  enum class GameQueuesLcdsAllowSpectators_t {
    NONE_E = 0,
    ALL_E = 3,
    LOBBYONLY_E = 1,
    DROPINONLY_E = 2,
  };

  inline void to_json(nlohmann::json& j, const GameQueuesLcdsAllowSpectators_t& v) {
    switch(v) {
      case GameQueuesLcdsAllowSpectators_t::NONE_E:
        j = "NONE";
      break;
      case GameQueuesLcdsAllowSpectators_t::ALL_E:
        j = "ALL";
      break;
      case GameQueuesLcdsAllowSpectators_t::LOBBYONLY_E:
        j = "LOBBYONLY";
      break;
      case GameQueuesLcdsAllowSpectators_t::DROPINONLY_E:
        j = "DROPINONLY";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, GameQueuesLcdsAllowSpectators_t& v) {
    const auto& s = j.get<std::string>();
    if(s == "NONE"){
      v = GameQueuesLcdsAllowSpectators_t::NONE_E;
      return;
    }
    if(s == "ALL"){
      v = GameQueuesLcdsAllowSpectators_t::ALL_E;
      return;
    }
    if(s == "LOBBYONLY"){
      v = GameQueuesLcdsAllowSpectators_t::LOBBYONLY_E;
      return;
    }
    if(s == "DROPINONLY"){
      v = GameQueuesLcdsAllowSpectators_t::DROPINONLY_E;
      return;
    }
  }
  inline std::string to_string(const GameQueuesLcdsAllowSpectators_t& v) {
    switch(v) {
      case GameQueuesLcdsAllowSpectators_t::NONE_E:
        return "NONE";
      case GameQueuesLcdsAllowSpectators_t::ALL_E:
        return "ALL";
      case GameQueuesLcdsAllowSpectators_t::LOBBYONLY_E:
        return "LOBBYONLY";
      case GameQueuesLcdsAllowSpectators_t::DROPINONLY_E:
        return "DROPINONLY";
    }
  }

}
