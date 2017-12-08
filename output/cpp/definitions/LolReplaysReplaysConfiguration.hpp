#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolReplaysReplaysConfiguration_t {
    bool isPlayingGame;
    bool isReplaysForMatchHistoryEnabled;
    bool isLoggedIn;
    bool isPatching;
    bool isPlayingReplay;
    double minutesUntilReplayConsideredLost;
    std::string minServerVersion;
    std::string gameVersion;
    bool isReplaysEnabled;
    bool isReplaysForEndOfGameEnabled;
  };

  inline void to_json(nlohmann::json& j, const LolReplaysReplaysConfiguration_t& v) {
    j["isPlayingGame"] = v.isPlayingGame;
    j["isReplaysForMatchHistoryEnabled"] = v.isReplaysForMatchHistoryEnabled;
    j["isLoggedIn"] = v.isLoggedIn;
    j["isPatching"] = v.isPatching;
    j["isPlayingReplay"] = v.isPlayingReplay;
    j["minutesUntilReplayConsideredLost"] = v.minutesUntilReplayConsideredLost;
    j["minServerVersion"] = v.minServerVersion;
    j["gameVersion"] = v.gameVersion;
    j["isReplaysEnabled"] = v.isReplaysEnabled;
    j["isReplaysForEndOfGameEnabled"] = v.isReplaysForEndOfGameEnabled;
  }

  inline void from_json(const nlohmann::json& j, LolReplaysReplaysConfiguration_t& v) {
    v.isPlayingGame = j.at("isPlayingGame").get<bool>();
    v.isReplaysForMatchHistoryEnabled = j.at("isReplaysForMatchHistoryEnabled").get<bool>();
    v.isLoggedIn = j.at("isLoggedIn").get<bool>();
    v.isPatching = j.at("isPatching").get<bool>();
    v.isPlayingReplay = j.at("isPlayingReplay").get<bool>();
    v.minutesUntilReplayConsideredLost = j.at("minutesUntilReplayConsideredLost").get<double>();
    v.minServerVersion = j.at("minServerVersion").get<std::string>();
    v.gameVersion = j.at("gameVersion").get<std::string>();
    v.isReplaysEnabled = j.at("isReplaysEnabled").get<bool>();
    v.isReplaysForEndOfGameEnabled = j.at("isReplaysForEndOfGameEnabled").get<bool>();
  }
  inline std::string to_string(const LolReplaysReplaysConfiguration_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
