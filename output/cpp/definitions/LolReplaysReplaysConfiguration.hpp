#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolReplaysReplaysConfiguration_t {
    double minutesUntilReplayConsideredLost;
    std::string gameVersion;
    bool isPlayingReplay;
    bool isReplaysForMatchHistoryEnabled;
    bool isReplaysForEndOfGameEnabled;
    bool isReplaysEnabled;
    bool isPatching;
    bool isLoggedIn;
    bool isPlayingGame;
    std::string minServerVersion;
  };

  inline void to_json(nlohmann::json& j, const LolReplaysReplaysConfiguration_t& v) {
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

  inline void from_json(const nlohmann::json& j, LolReplaysReplaysConfiguration_t& v) {
    v.minutesUntilReplayConsideredLost = j.at("minutesUntilReplayConsideredLost").get<double>();
    v.gameVersion = j.at("gameVersion").get<std::string>();
    v.isPlayingReplay = j.at("isPlayingReplay").get<bool>();
    v.isReplaysForMatchHistoryEnabled = j.at("isReplaysForMatchHistoryEnabled").get<bool>();
    v.isReplaysForEndOfGameEnabled = j.at("isReplaysForEndOfGameEnabled").get<bool>();
    v.isReplaysEnabled = j.at("isReplaysEnabled").get<bool>();
    v.isPatching = j.at("isPatching").get<bool>();
    v.isLoggedIn = j.at("isLoggedIn").get<bool>();
    v.isPlayingGame = j.at("isPlayingGame").get<bool>();
    v.minServerVersion = j.at("minServerVersion").get<std::string>();
  }
  inline std::string to_string(const LolReplaysReplaysConfiguration_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
