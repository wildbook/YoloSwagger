#ifndef SWAGGER_TYPES_LolReplaysReplaysConfiguration_HPP
#define SWAGGER_TYPES_LolReplaysReplaysConfiguration_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct LolReplaysReplaysConfiguration {
    // 
    double minutesUntilReplayConsideredLost;
    // 
    std::string gameVersion;
    // 
    bool isPlayingReplay;
    // 
    bool isReplaysForMatchHistoryEnabled;
    // 
    bool isReplaysForEndOfGameEnabled;
    // 
    bool isReplaysEnabled;
    // 
    bool isPatching;
    // 
    bool isLoggedIn;
    // 
    bool isPlayingGame;
    // 
    std::string minServerVersion;
  };

  inline void to_json(nlohmann::json& j, const LolReplaysReplaysConfiguration& v) {
    j["minutesUntilReplayConsideredLost"] = v.minutesUntilReplayConsideredLost;
    j["gameVersion"] = v.gameVersion;
    j["isPlayingReplay"] = v.isPlayingReplay;
    j["isReplaysForMatchHistoryEnabled"] = v.isReplaysForMatchHistoryEnabled;
    j["isReplaysForEndOfGameEnabled"] = v.isReplaysForEndOfGameEnabled;
    j["isReplaysEnabled"] = v.isReplaysEnabled;
    j["isPatching"] = v.isPatching;
    j["isLoggedIn"] = v.isLoggedIn;
    j["isPlayingGame"] = v.isPlayingGame;
    j["minServerVersion"] = v.minServerVersion;
  }

  inline void from_json(const nlohmann::json& j, LolReplaysReplaysConfiguration& v) {
    v.minutesUntilReplayConsideredLost = j.at("minutesUntilReplayConsideredLost").get<double>;
    v.gameVersion = j.at("gameVersion").get<std::string>;
    v.isPlayingReplay = j.at("isPlayingReplay").get<bool>;
    v.isReplaysForMatchHistoryEnabled = j.at("isReplaysForMatchHistoryEnabled").get<bool>;
    v.isReplaysForEndOfGameEnabled = j.at("isReplaysForEndOfGameEnabled").get<bool>;
    v.isReplaysEnabled = j.at("isReplaysEnabled").get<bool>;
    v.isPatching = j.at("isPatching").get<bool>;
    v.isLoggedIn = j.at("isLoggedIn").get<bool>;
    v.isPlayingGame = j.at("isPlayingGame").get<bool>;
    v.minServerVersion = j.at("minServerVersion").get<std::string>;
  }

}
#endif // SWAGGER_TYPES_LolReplaysReplaysConfiguration_HPP
