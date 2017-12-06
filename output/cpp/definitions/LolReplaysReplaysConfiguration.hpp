#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolReplaysReplaysConfiguration_t {
    std::string gameVersion;
    bool isLoggedIn;
    bool isPatching;
    bool isPlayingGame;
    bool isPlayingReplay;
    bool isReplaysEnabled;
    bool isReplaysForEndOfGameEnabled;
    bool isReplaysForMatchHistoryEnabled;
    std::string minServerVersion;
    double minutesUntilReplayConsideredLost;
  };

  inline void to_json(nlohmann::json& j, const LolReplaysReplaysConfiguration_t& v) {
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

  inline void from_json(const nlohmann::json& j, LolReplaysReplaysConfiguration_t& v) {
    v.gameVersion = j.at("gameVersion").get<std::string>();
    v.isLoggedIn = j.at("isLoggedIn").get<bool>();
    v.isPatching = j.at("isPatching").get<bool>();
    v.isPlayingGame = j.at("isPlayingGame").get<bool>();
    v.isPlayingReplay = j.at("isPlayingReplay").get<bool>();
    v.isReplaysEnabled = j.at("isReplaysEnabled").get<bool>();
    v.isReplaysForEndOfGameEnabled = j.at("isReplaysForEndOfGameEnabled").get<bool>();
    v.isReplaysForMatchHistoryEnabled = j.at("isReplaysForMatchHistoryEnabled").get<bool>();
    v.minServerVersion = j.at("minServerVersion").get<std::string>();
    v.minutesUntilReplayConsideredLost = j.at("minutesUntilReplayConsideredLost").get<double>();
  }
}
