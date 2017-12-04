#ifndef SWAGGER_TYPES_LolLobbyLobbyBotDifficulty_HPP
#define SWAGGER_TYPES_LolLobbyLobbyBotDifficulty_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  enum class LolLobbyLobbyBotDifficulty {
    // 
    UBER = 3,
    // 
    NONE = -1,
    // 
    MEDIUM = 1,
    // 
    HARD = 2,
    // 
    INTRO = 5,
    // 
    EASY = 0,
    // 
    TUTORIAL = 4,
  };

  inline void to_json(nlohmann::json& j, const LolLobbyLobbyBotDifficulty& v) {
    switch(v) {
      case LolLobbyLobbyBotDifficulty::UBER:
        j = "UBER";
      break;
      case LolLobbyLobbyBotDifficulty::NONE:
        j = "NONE";
      break;
      case LolLobbyLobbyBotDifficulty::MEDIUM:
        j = "MEDIUM";
      break;
      case LolLobbyLobbyBotDifficulty::HARD:
        j = "HARD";
      break;
      case LolLobbyLobbyBotDifficulty::INTRO:
        j = "INTRO";
      break;
      case LolLobbyLobbyBotDifficulty::EASY:
        j = "EASY";
      break;
      case LolLobbyLobbyBotDifficulty::TUTORIAL:
        j = "TUTORIAL";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, LolLobbyLobbyBotDifficulty& v) {
    const auto& s = j.get<std::string>();
    if(s == "UBER"){
      v = LolLobbyLobbyBotDifficulty::UBER;
      return;
    }
    if(s == "NONE"){
      v = LolLobbyLobbyBotDifficulty::NONE;
      return;
    }
    if(s == "MEDIUM"){
      v = LolLobbyLobbyBotDifficulty::MEDIUM;
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
    if(s == "EASY"){
      v = LolLobbyLobbyBotDifficulty::EASY;
      return;
    }
    if(s == "TUTORIAL"){
      v = LolLobbyLobbyBotDifficulty::TUTORIAL;
      return;
    }
  }

}
#endif // SWAGGER_TYPES_LolLobbyLobbyBotDifficulty_HPP
