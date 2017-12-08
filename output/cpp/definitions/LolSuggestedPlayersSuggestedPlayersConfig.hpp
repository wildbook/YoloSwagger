#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolSuggestedPlayersSuggestedPlayersConfig_t {
    uint32_t PreviousPremadesLimit;
    uint32_t VicoriousComradesLimit;
    uint32_t OnlineFriendsLimit;
    bool FriendsOfFriendsEnabled;
    uint32_t FriendsOfFriendsLimit;
    bool Enabled;
    uint32_t MaxNumSuggestedPlayers;
    uint32_t MaxNumReplacements;
  };

  inline void to_json(nlohmann::json& j, const LolSuggestedPlayersSuggestedPlayersConfig_t& v) {
    j["PreviousPremadesLimit"] = v.PreviousPremadesLimit;
    j["VicoriousComradesLimit"] = v.VicoriousComradesLimit;
    j["OnlineFriendsLimit"] = v.OnlineFriendsLimit;
    j["FriendsOfFriendsEnabled"] = v.FriendsOfFriendsEnabled;
    j["FriendsOfFriendsLimit"] = v.FriendsOfFriendsLimit;
    j["Enabled"] = v.Enabled;
    j["MaxNumSuggestedPlayers"] = v.MaxNumSuggestedPlayers;
    j["MaxNumReplacements"] = v.MaxNumReplacements;
  }

  inline void from_json(const nlohmann::json& j, LolSuggestedPlayersSuggestedPlayersConfig_t& v) {
    v.PreviousPremadesLimit = j.at("PreviousPremadesLimit").get<uint32_t>();
    v.VicoriousComradesLimit = j.at("VicoriousComradesLimit").get<uint32_t>();
    v.OnlineFriendsLimit = j.at("OnlineFriendsLimit").get<uint32_t>();
    v.FriendsOfFriendsEnabled = j.at("FriendsOfFriendsEnabled").get<bool>();
    v.FriendsOfFriendsLimit = j.at("FriendsOfFriendsLimit").get<uint32_t>();
    v.Enabled = j.at("Enabled").get<bool>();
    v.MaxNumSuggestedPlayers = j.at("MaxNumSuggestedPlayers").get<uint32_t>();
    v.MaxNumReplacements = j.at("MaxNumReplacements").get<uint32_t>();
  }
  inline std::string to_string(const LolSuggestedPlayersSuggestedPlayersConfig_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
