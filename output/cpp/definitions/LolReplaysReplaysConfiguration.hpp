#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolReplaysReplaysConfiguration_t {
    std::string gameVersion;
    bool isReplaysForMatchHistoryEnabled;
    double minutesUntilReplayConsideredLost;
    std::string minServerVersion;
    bool isReplaysEnabled;
    bool isLoggedIn;
    bool isPlayingReplay;
    bool isPatching;
    bool isReplaysForEndOfGameEnabled;
    bool isPlayingGame;
  };

  inline void to_json(nlohmann::json& j, const LolReplaysReplaysConfiguration_t& v) {
    j["gameVersion"] = v.gameVersion;
    j["isReplaysForMatchHistoryEnabled"] = v.isReplaysForMatchHistoryEnabled;
    j["minutesUntilReplayConsideredLost"] = v.minutesUntilReplayConsideredLost;
    j["minServerVersion"] = v.minServerVersion;
    j["isReplaysEnabled"] = v.isReplaysEnabled;
    j["isLoggedIn"] = v.isLoggedIn;
    j["isPlayingReplay"] = v.isPlayingReplay;
    j["isPatching"] = v.isPatching;
    j["isReplaysForEndOfGameEnabled"] = v.isReplaysForEndOfGameEnabled;
    j["isPlayingGame"] = v.isPlayingGame;
  }

  inline void from_json(const nlohmann::json& j, LolReplaysReplaysConfiguration_t& v) {
    v.gameVersion = j.at("gameVersion").get<std::string>();
    v.isReplaysForMatchHistoryEnabled = j.at("isReplaysForMatchHistoryEnabled").get<bool>();
    v.minutesUntilReplayConsideredLost = j.at("minutesUntilReplayConsideredLost").get<double>();
    v.minServerVersion = j.at("minServerVersion").get<std::string>();
    v.isReplaysEnabled = j.at("isReplaysEnabled").get<bool>();
    v.isLoggedIn = j.at("isLoggedIn").get<bool>();
    v.isPlayingReplay = j.at("isPlayingReplay").get<bool>();
    v.isPatching = j.at("isPatching").get<bool>();
    v.isReplaysForEndOfGameEnabled = j.at("isReplaysForEndOfGameEnabled").get<bool>();
    v.isPlayingGame = j.at("isPlayingGame").get<bool>();
  }
  inline std::string to_string(const LolReplaysReplaysConfiguration_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
