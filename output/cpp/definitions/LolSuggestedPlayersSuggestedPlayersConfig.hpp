#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolSuggestedPlayersSuggestedPlayersConfig_t {
    bool_t Enabled;
    uint32_t_t MaxNumSuggestedPlayers;
    uint32_t_t FriendsOfFriendsLimit;
    uint32_t_t MaxNumReplacements;
    uint32_t_t VicoriousComradesLimit;
    bool_t FriendsOfFriendsEnabled;
    uint32_t_t OnlineFriendsLimit;
    uint32_t_t PreviousPremadesLimit;
  };

  inline void to_json(nlohmann::json& j, const LolSuggestedPlayersSuggestedPlayersConfig_t& v) {
    j["Enabled"] = v.Enabled;
    j["MaxNumSuggestedPlayers"] = v.MaxNumSuggestedPlayers;
    j["FriendsOfFriendsLimit"] = v.FriendsOfFriendsLimit;
    j["MaxNumReplacements"] = v.MaxNumReplacements;
    j["VicoriousComradesLimit"] = v.VicoriousComradesLimit;
    j["FriendsOfFriendsEnabled"] = v.FriendsOfFriendsEnabled;
    j["OnlineFriendsLimit"] = v.OnlineFriendsLimit;
    j["PreviousPremadesLimit"] = v.PreviousPremadesLimit;
  }

  inline void from_json(const nlohmann::json& j, LolSuggestedPlayersSuggestedPlayersConfig_t& v) {
    v.Enabled = j.at("Enabled").get<bool_t>();
    v.MaxNumSuggestedPlayers = j.at("MaxNumSuggestedPlayers").get<uint32_t_t>();
    v.FriendsOfFriendsLimit = j.at("FriendsOfFriendsLimit").get<uint32_t_t>();
    v.MaxNumReplacements = j.at("MaxNumReplacements").get<uint32_t_t>();
    v.VicoriousComradesLimit = j.at("VicoriousComradesLimit").get<uint32_t_t>();
    v.FriendsOfFriendsEnabled = j.at("FriendsOfFriendsEnabled").get<bool_t>();
    v.OnlineFriendsLimit = j.at("OnlineFriendsLimit").get<uint32_t_t>();
    v.PreviousPremadesLimit = j.at("PreviousPremadesLimit").get<uint32_t_t>();
  }
  inline std::string to_string(const LolSuggestedPlayersSuggestedPlayersConfig_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
