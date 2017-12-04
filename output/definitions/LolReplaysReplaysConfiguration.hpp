#ifndef SWAGGER_TYPES_LolReplaysReplaysConfiguration_HPP
#define SWAGGER_TYPES_LolReplaysReplaysConfiguration_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct LolReplaysReplaysConfiguration {
    // 
    std::string gameVersion;
    // 
    bool isLoggedIn;
    // 
    bool isPatching;
    // 
    bool isPlayingGame;
    // 
    bool isPlayingReplay;
    // 
    bool isReplaysEnabled;
    // 
    bool isReplaysForEndOfGameEnabled;
    // 
    bool isReplaysForMatchHistoryEnabled;
    // 
    std::string minServerVersion;
    // 
    double minutesUntilReplayConsideredLost;
  };

  void to_json(nlohmann::json& j, const LolReplaysReplaysConfiguration& v) {
    j["gameVersion"] = v.gameVersion;
    j["isLoggedIn"] = v.isLoggedIn;
    j["isPatching"] = v.isPatching;
    j["isPlayingGame"] = v.isPlayingGame;
    j["isPlayingReplay"] = v.isPlayingReplay;
    j["isReplaysEnabled"] = v.isReplaysEnabled;
    j["isReplaysForEndOfGameEnabled"] = v.isReplaysForEndOfGameEnabled;
    j["isReplaysForMatchHistoryEnabled"] = v.isReplaysForMatchHistoryEnabled;
    j["minServerVersion"] = v.minServerVersion;
    j["minutesUntilReplayConsideredLost"] = v.minutesUntilReplayConsideredLost;
  }

  void from_json(const nlohmann::json& j, LolReplaysReplaysConfiguration& v) {
    v.gameVersion = j.at("gameVersion").get<std::string>;
    v.isLoggedIn = j.at("isLoggedIn").get<bool>;
    v.isPatching = j.at("isPatching").get<bool>;
    v.isPlayingGame = j.at("isPlayingGame").get<bool>;
    v.isPlayingReplay = j.at("isPlayingReplay").get<bool>;
    v.isReplaysEnabled = j.at("isReplaysEnabled").get<bool>;
    v.isReplaysForEndOfGameEnabled = j.at("isReplaysForEndOfGameEnabled").get<bool>;
    v.isReplaysForMatchHistoryEnabled = j.at("isReplaysForMatchHistoryEnabled").get<bool>;
    v.minServerVersion = j.at("minServerVersion").get<std::string>;
    v.minutesUntilReplayConsideredLost = j.at("minutesUntilReplayConsideredLost").get<double>;
  }

}
#endif // SWAGGER_TYPES_LolReplaysReplaysConfiguration_HPP
