#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolReplaysReplaysConfiguration_t {
    bool isPatching;
    std::string gameVersion;
    std::string minServerVersion;
    bool isReplaysForMatchHistoryEnabled;
    bool isReplaysForEndOfGameEnabled;
    bool isReplaysEnabled;
    double minutesUntilReplayConsideredLost;
    bool isLoggedIn;
    bool isPlayingGame;
    bool isPlayingReplay;
  };

  inline void to_json(nlohmann::json& j, const LolReplaysReplaysConfiguration_t& v) {
    j["isPatching"] = v.isPatching;
    j["gameVersion"] = v.gameVersion;
    j["minServerVersion"] = v.minServerVersion;
    j["isReplaysForMatchHistoryEnabled"] = v.isReplaysForMatchHistoryEnabled;
    j["isReplaysForEndOfGameEnabled"] = v.isReplaysForEndOfGameEnabled;
    j["isReplaysEnabled"] = v.isReplaysEnabled;
    j["minutesUntilReplayConsideredLost"] = v.minutesUntilReplayConsideredLost;
    j["isLoggedIn"] = v.isLoggedIn;
    j["isPlayingGame"] = v.isPlayingGame;
    j["isPlayingReplay"] = v.isPlayingReplay;
  }

  inline void from_json(const nlohmann::json& j, LolReplaysReplaysConfiguration_t& v) {
    v.isPatching = j.at("isPatching").get<bool>();
    v.gameVersion = j.at("gameVersion").get<std::string>();
    v.minServerVersion = j.at("minServerVersion").get<std::string>();
    v.isReplaysForMatchHistoryEnabled = j.at("isReplaysForMatchHistoryEnabled").get<bool>();
    v.isReplaysForEndOfGameEnabled = j.at("isReplaysForEndOfGameEnabled").get<bool>();
    v.isReplaysEnabled = j.at("isReplaysEnabled").get<bool>();
    v.minutesUntilReplayConsideredLost = j.at("minutesUntilReplayConsideredLost").get<double>();
    v.isLoggedIn = j.at("isLoggedIn").get<bool>();
    v.isPlayingGame = j.at("isPlayingGame").get<bool>();
    v.isPlayingReplay = j.at("isPlayingReplay").get<bool>();
  }
  inline std::string to_string(const LolReplaysReplaysConfiguration_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
