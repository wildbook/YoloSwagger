#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolReplaysReplaysConfiguration_t {
    double_t minutesUntilReplayConsideredLost;
    std::string_t gameVersion;
    bool_t isPlayingReplay;
    bool_t isReplaysForMatchHistoryEnabled;
    bool_t isReplaysForEndOfGameEnabled;
    bool_t isReplaysEnabled;
    bool_t isPatching;
    bool_t isLoggedIn;
    bool_t isPlayingGame;
    std::string_t minServerVersion;
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
    v.minutesUntilReplayConsideredLost = j.at("minutesUntilReplayConsideredLost").get<double_t>();
    v.gameVersion = j.at("gameVersion").get<std::string_t>();
    v.isPlayingReplay = j.at("isPlayingReplay").get<bool_t>();
    v.isReplaysForMatchHistoryEnabled = j.at("isReplaysForMatchHistoryEnabled").get<bool_t>();
    v.isReplaysForEndOfGameEnabled = j.at("isReplaysForEndOfGameEnabled").get<bool_t>();
    v.isReplaysEnabled = j.at("isReplaysEnabled").get<bool_t>();
    v.isPatching = j.at("isPatching").get<bool_t>();
    v.isLoggedIn = j.at("isLoggedIn").get<bool_t>();
    v.isPlayingGame = j.at("isPlayingGame").get<bool_t>();
    v.minServerVersion = j.at("minServerVersion").get<std::string_t>();
  }
  inline std::string to_string(const LolReplaysReplaysConfiguration_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
