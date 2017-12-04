#ifndef SWAGGER_TYPES_LolLobbyLobbyBotDifficulty_HPP
#define SWAGGER_TYPES_LolLobbyLobbyBotDifficulty_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  enum class LolLobbyLobbyBotDifficulty {
    // 
    EASY = 0,
    // 
    HARD = 2,
    // 
    INTRO = 5,
    // 
    MEDIUM = 1,
    // 
    NONE = -1,
    // 
    TUTORIAL = 4,
    // 
    UBER = 3,
  };

  inline void to_json(nlohmann::json& j, const LolLobbyLobbyBotDifficulty& v) {
    switch(v) {
      case LolLobbyLobbyBotDifficulty::EASY:
        j = "EASY";
      break;
      case LolLobbyLobbyBotDifficulty::HARD:
        j = "HARD";
      break;
      case LolLobbyLobbyBotDifficulty::INTRO:
        j = "INTRO";
      break;
      case LolLobbyLobbyBotDifficulty::MEDIUM:
        j = "MEDIUM";
      break;
      case LolLobbyLobbyBotDifficulty::NONE:
        j = "NONE";
      break;
      case LolLobbyLobbyBotDifficulty::TUTORIAL:
        j = "TUTORIAL";
      break;
      case LolLobbyLobbyBotDifficulty::UBER:
        j = "UBER";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, LolLobbyLobbyBotDifficulty& v) {
    const auto s& = j.get<std::string>();
    if(s == "EASY"){
      v = LolLobbyLobbyBotDifficulty::EASY;
      return;
    }
    if(s == "HARD"){
      v = LolLobbyLobbyBotDifficulty::HARD;
      return;
    }
    if(s == "INTRO"){
      v = LolLobbyLobbyBotDifficulty::INTRO;
      return;
    }
    if(s == "MEDIUM"){
      v = LolLobbyLobbyBotDifficulty::MEDIUM;
      return;
    }
    if(s == "NONE"){
      v = LolLobbyLobbyBotDifficulty::NONE;
      return;
    }
    if(s == "TUTORIAL"){
      v = LolLobbyLobbyBotDifficulty::TUTORIAL;
      return;
    }
    if(s == "UBER"){
      v = LolLobbyLobbyBotDifficulty::UBER;
      return;
    }
  }

}
#endif // SWAGGER_TYPES_LolLobbyLobbyBotDifficulty_HPP
