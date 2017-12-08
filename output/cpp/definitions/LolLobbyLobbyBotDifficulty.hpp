#pragma once
#include <json.hpp>
namespace leagueapi {
  enum class LolLobbyLobbyBotDifficulty_t {
    UBER_E = 3,
    NONE_E = -1,
    MEDIUM_E = 1,
    HARD_E = 2,
    INTRO_E = 5,
    EASY_E = 0,
    TUTORIAL_E = 4,
  };

  inline void to_json(nlohmann::json& j, const LolLobbyLobbyBotDifficulty_t& v) {
    switch(v) {
      case LolLobbyLobbyBotDifficulty_t::UBER_E:
        j = "UBER";
      break;
      case LolLobbyLobbyBotDifficulty_t::NONE_E:
        j = "NONE";
      break;
      case LolLobbyLobbyBotDifficulty_t::MEDIUM_E:
        j = "MEDIUM";
      break;
      case LolLobbyLobbyBotDifficulty_t::HARD_E:
        j = "HARD";
      break;
      case LolLobbyLobbyBotDifficulty_t::INTRO_E:
        j = "INTRO";
      break;
      case LolLobbyLobbyBotDifficulty_t::EASY_E:
        j = "EASY";
      break;
      case LolLobbyLobbyBotDifficulty_t::TUTORIAL_E:
        j = "TUTORIAL";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, LolLobbyLobbyBotDifficulty_t& v) {
    const auto& s = j.get<std::string>();
    if(s == "UBER"){
      v = LolLobbyLobbyBotDifficulty_t::UBER_E;
      return;
    }
    if(s == "NONE"){
      v = LolLobbyLobbyBotDifficulty_t::NONE_E;
      return;
    }
    if(s == "MEDIUM"){
      v = LolLobbyLobbyBotDifficulty_t::MEDIUM_E;
      return;
    }
    if(s == "HARD"){
      v = LolLobbyLobbyBotDifficulty_t::HARD_E;
      return;
    }
    if(s == "INTRO"){
      v = LolLobbyLobbyBotDifficulty_t::INTRO_E;
      return;
    }
    if(s == "EASY"){
      v = LolLobbyLobbyBotDifficulty_t::EASY_E;
      return;
    }
    if(s == "TUTORIAL"){
      v = LolLobbyLobbyBotDifficulty_t::TUTORIAL_E;
      return;
    }
  }
  inline std::string to_string(const LolLobbyLobbyBotDifficulty_t& v) {
    switch(v) {
      case LolLobbyLobbyBotDifficulty_t::UBER_E:
        return "UBER";
      case LolLobbyLobbyBotDifficulty_t::NONE_E:
        return "NONE";
      case LolLobbyLobbyBotDifficulty_t::MEDIUM_E:
        return "MEDIUM";
      case LolLobbyLobbyBotDifficulty_t::HARD_E:
        return "HARD";
      case LolLobbyLobbyBotDifficulty_t::INTRO_E:
        return "INTRO";
      case LolLobbyLobbyBotDifficulty_t::EASY_E:
        return "EASY";
      case LolLobbyLobbyBotDifficulty_t::TUTORIAL_E:
        return "TUTORIAL";
    }
  }

}
