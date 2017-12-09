#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolReplaysReplaysConfiguration_t {
    bool isReplaysForEndOfGameEnabled;
    bool isPlayingGame;
    bool isPlayingReplay;
    bool isPatching;
    bool isReplaysEnabled;
    bool isLoggedIn;
    std::string gameVersion;
    std::string minServerVersion;
    double minutesUntilReplayConsideredLost;
    bool isReplaysForMatchHistoryEnabled;
  };

  inline void to_json(nlohmann::json& j, const LolReplaysReplaysConfiguration_t& v) {
    j["isReplaysForEndOfGameEnabled"] = v.isReplaysForEndOfGameEnabled;
    j["isPlayingGame"] = v.isPlayingGame;
    j["isPlayingReplay"] = v.isPlayingReplay;
    j["isPatching"] = v.isPatching;
    j["isReplaysEnabled"] = v.isReplaysEnabled;
    j["isLoggedIn"] = v.isLoggedIn;
    j["gameVersion"] = v.gameVersion;
    j["minServerVersion"] = v.minServerVersion;
    j["minutesUntilReplayConsideredLost"] = v.minutesUntilReplayConsideredLost;
    j["isReplaysForMatchHistoryEnabled"] = v.isReplaysForMatchHistoryEnabled;
  }

  inline void from_json(const nlohmann::json& j, LolReplaysReplaysConfiguration_t& v) {
    v.isReplaysForEndOfGameEnabled = j.at("isReplaysForEndOfGameEnabled").get<bool>();
    v.isPlayingGame = j.at("isPlayingGame").get<bool>();
    v.isPlayingReplay = j.at("isPlayingReplay").get<bool>();
    v.isPatching = j.at("isPatching").get<bool>();
    v.isReplaysEnabled = j.at("isReplaysEnabled").get<bool>();
    v.isLoggedIn = j.at("isLoggedIn").get<bool>();
    v.gameVersion = j.at("gameVersion").get<std::string>();
    v.minServerVersion = j.at("minServerVersion").get<std::string>();
    v.minutesUntilReplayConsideredLost = j.at("minutesUntilReplayConsideredLost").get<double>();
    v.isReplaysForMatchHistoryEnabled = j.at("isReplaysForMatchHistoryEnabled").get<bool>();
  }
  inline std::string to_string(const LolReplaysReplaysConfiguration_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
