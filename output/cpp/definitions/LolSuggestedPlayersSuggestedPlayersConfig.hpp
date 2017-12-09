#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolSuggestedPlayersSuggestedPlayersConfig_t {
    uint32_t MaxNumReplacements;
    bool FriendsOfFriendsEnabled;
    bool Enabled;
    uint32_t MaxNumSuggestedPlayers;
    uint32_t PreviousPremadesLimit;
    uint32_t VicoriousComradesLimit;
    uint32_t FriendsOfFriendsLimit;
    uint32_t OnlineFriendsLimit;
  };

  inline void to_json(nlohmann::json& j, const LolSuggestedPlayersSuggestedPlayersConfig_t& v) {
    j["MaxNumReplacements"] = v.MaxNumReplacements;
    j["FriendsOfFriendsEnabled"] = v.FriendsOfFriendsEnabled;
    j["Enabled"] = v.Enabled;
    j["MaxNumSuggestedPlayers"] = v.MaxNumSuggestedPlayers;
    j["PreviousPremadesLimit"] = v.PreviousPremadesLimit;
    j["VicoriousComradesLimit"] = v.VicoriousComradesLimit;
    j["FriendsOfFriendsLimit"] = v.FriendsOfFriendsLimit;
    j["OnlineFriendsLimit"] = v.OnlineFriendsLimit;
  }

  inline void from_json(const nlohmann::json& j, LolSuggestedPlayersSuggestedPlayersConfig_t& v) {
    v.MaxNumReplacements = j.at("MaxNumReplacements").get<uint32_t>();
    v.FriendsOfFriendsEnabled = j.at("FriendsOfFriendsEnabled").get<bool>();
    v.Enabled = j.at("Enabled").get<bool>();
    v.MaxNumSuggestedPlayers = j.at("MaxNumSuggestedPlayers").get<uint32_t>();
    v.PreviousPremadesLimit = j.at("PreviousPremadesLimit").get<uint32_t>();
    v.VicoriousComradesLimit = j.at("VicoriousComradesLimit").get<uint32_t>();
    v.FriendsOfFriendsLimit = j.at("FriendsOfFriendsLimit").get<uint32_t>();
    v.OnlineFriendsLimit = j.at("OnlineFriendsLimit").get<uint32_t>();
  }
  inline std::string to_string(const LolSuggestedPlayersSuggestedPlayersConfig_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
