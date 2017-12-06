#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolSuggestedPlayersSuggestedPlayersConfig_t {
    bool Enabled;
    bool FriendsOfFriendsEnabled;
    uint32_t FriendsOfFriendsLimit;
    uint32_t MaxNumReplacements;
    uint32_t MaxNumSuggestedPlayers;
    uint32_t OnlineFriendsLimit;
    uint32_t PreviousPremadesLimit;
    uint32_t VicoriousComradesLimit;
  };

  inline void to_json(nlohmann::json& j, const LolSuggestedPlayersSuggestedPlayersConfig_t& v) {
    j["Enabled"] = v.Enabled;
    j["FriendsOfFriendsEnabled"] = v.FriendsOfFriendsEnabled;
    j["FriendsOfFriendsLimit"] = v.FriendsOfFriendsLimit;
    j["MaxNumReplacements"] = v.MaxNumReplacements;
    j["MaxNumSuggestedPlayers"] = v.MaxNumSuggestedPlayers;
    j["OnlineFriendsLimit"] = v.OnlineFriendsLimit;
    j["PreviousPremadesLimit"] = v.PreviousPremadesLimit;
    j["VicoriousComradesLimit"] = v.VicoriousComradesLimit;
  }

  inline void from_json(const nlohmann::json& j, LolSuggestedPlayersSuggestedPlayersConfig_t& v) {
    v.Enabled = j.at("Enabled").get<bool>();
    v.FriendsOfFriendsEnabled = j.at("FriendsOfFriendsEnabled").get<bool>();
    v.FriendsOfFriendsLimit = j.at("FriendsOfFriendsLimit").get<uint32_t>();
    v.MaxNumReplacements = j.at("MaxNumReplacements").get<uint32_t>();
    v.MaxNumSuggestedPlayers = j.at("MaxNumSuggestedPlayers").get<uint32_t>();
    v.OnlineFriendsLimit = j.at("OnlineFriendsLimit").get<uint32_t>();
    v.PreviousPremadesLimit = j.at("PreviousPremadesLimit").get<uint32_t>();
    v.VicoriousComradesLimit = j.at("VicoriousComradesLimit").get<uint32_t>();
  }
}
