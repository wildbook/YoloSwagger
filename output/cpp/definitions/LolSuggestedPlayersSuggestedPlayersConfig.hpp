#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolSuggestedPlayersSuggestedPlayersConfig_t {
    uint32_t FriendsOfFriendsLimit;
    bool Enabled;
    uint32_t PreviousPremadesLimit;
    uint32_t MaxNumSuggestedPlayers;
    uint32_t VicoriousComradesLimit;
    uint32_t OnlineFriendsLimit;
    uint32_t MaxNumReplacements;
    bool FriendsOfFriendsEnabled;
  };

  inline void to_json(nlohmann::json& j, const LolSuggestedPlayersSuggestedPlayersConfig_t& v) {
    j["FriendsOfFriendsLimit"] = v.FriendsOfFriendsLimit;
    j["Enabled"] = v.Enabled;
    j["PreviousPremadesLimit"] = v.PreviousPremadesLimit;
    j["MaxNumSuggestedPlayers"] = v.MaxNumSuggestedPlayers;
    j["VicoriousComradesLimit"] = v.VicoriousComradesLimit;
    j["OnlineFriendsLimit"] = v.OnlineFriendsLimit;
    j["MaxNumReplacements"] = v.MaxNumReplacements;
    j["FriendsOfFriendsEnabled"] = v.FriendsOfFriendsEnabled;
  }

  inline void from_json(const nlohmann::json& j, LolSuggestedPlayersSuggestedPlayersConfig_t& v) {
    v.FriendsOfFriendsLimit = j.at("FriendsOfFriendsLimit").get<uint32_t>();
    v.Enabled = j.at("Enabled").get<bool>();
    v.PreviousPremadesLimit = j.at("PreviousPremadesLimit").get<uint32_t>();
    v.MaxNumSuggestedPlayers = j.at("MaxNumSuggestedPlayers").get<uint32_t>();
    v.VicoriousComradesLimit = j.at("VicoriousComradesLimit").get<uint32_t>();
    v.OnlineFriendsLimit = j.at("OnlineFriendsLimit").get<uint32_t>();
    v.MaxNumReplacements = j.at("MaxNumReplacements").get<uint32_t>();
    v.FriendsOfFriendsEnabled = j.at("FriendsOfFriendsEnabled").get<bool>();
  }
}
