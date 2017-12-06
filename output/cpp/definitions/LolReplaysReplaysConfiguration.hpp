#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolReplaysReplaysConfiguration_t {
    bool isReplaysForMatchHistoryEnabled;
    std::string gameVersion;
    bool isReplaysEnabled;
    bool isReplaysForEndOfGameEnabled;
    double minutesUntilReplayConsideredLost;
    std::string minServerVersion;
    bool isPlayingReplay;
    bool isPatching;
    bool isPlayingGame;
    bool isLoggedIn;
  };

  inline void to_json(nlohmann::json& j, const LolReplaysReplaysConfiguration_t& v) {
    j["isReplaysForMatchHistoryEnabled"] = v.isReplaysForMatchHistoryEnabled;
    j["gameVersion"] = v.gameVersion;
    j["isReplaysEnabled"] = v.isReplaysEnabled;
    j["isReplaysForEndOfGameEnabled"] = v.isReplaysForEndOfGameEnabled;
    j["minutesUntilReplayConsideredLost"] = v.minutesUntilReplayConsideredLost;
    j["minServerVersion"] = v.minServerVersion;
    j["isPlayingReplay"] = v.isPlayingReplay;
    j["isPatching"] = v.isPatching;
    j["isPlayingGame"] = v.isPlayingGame;
    j["isLoggedIn"] = v.isLoggedIn;
  }

  inline void from_json(const nlohmann::json& j, LolReplaysReplaysConfiguration_t& v) {
    v.isReplaysForMatchHistoryEnabled = j.at("isReplaysForMatchHistoryEnabled").get<bool>();
    v.gameVersion = j.at("gameVersion").get<std::string>();
    v.isReplaysEnabled = j.at("isReplaysEnabled").get<bool>();
    v.isReplaysForEndOfGameEnabled = j.at("isReplaysForEndOfGameEnabled").get<bool>();
    v.minutesUntilReplayConsideredLost = j.at("minutesUntilReplayConsideredLost").get<double>();
    v.minServerVersion = j.at("minServerVersion").get<std::string>();
    v.isPlayingReplay = j.at("isPlayingReplay").get<bool>();
    v.isPatching = j.at("isPatching").get<bool>();
    v.isPlayingGame = j.at("isPlayingGame").get<bool>();
    v.isLoggedIn = j.at("isLoggedIn").get<bool>();
  }
}
