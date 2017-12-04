#ifndef SWAGGER_TYPES_LolSuggestedPlayersSuggestedPlayersConfig_HPP
#define SWAGGER_TYPES_LolSuggestedPlayersSuggestedPlayersConfig_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct LolSuggestedPlayersSuggestedPlayersConfig {
    // 
    bool Enabled;
    // 
    uint32_t MaxNumSuggestedPlayers;
    // 
    uint32_t FriendsOfFriendsLimit;
    // 
    uint32_t MaxNumReplacements;
    // 
    uint32_t VicoriousComradesLimit;
    // 
    bool FriendsOfFriendsEnabled;
    // 
    uint32_t OnlineFriendsLimit;
    // 
    uint32_t PreviousPremadesLimit;
  };

  inline void to_json(nlohmann::json& j, const LolSuggestedPlayersSuggestedPlayersConfig& v) {
    j["Enabled"] = v.Enabled;
    j["MaxNumSuggestedPlayers"] = v.MaxNumSuggestedPlayers;
    j["FriendsOfFriendsLimit"] = v.FriendsOfFriendsLimit;
    j["MaxNumReplacements"] = v.MaxNumReplacements;
    j["VicoriousComradesLimit"] = v.VicoriousComradesLimit;
    j["FriendsOfFriendsEnabled"] = v.FriendsOfFriendsEnabled;
    j["OnlineFriendsLimit"] = v.OnlineFriendsLimit;
    j["PreviousPremadesLimit"] = v.PreviousPremadesLimit;
  }

  inline void from_json(const nlohmann::json& j, LolSuggestedPlayersSuggestedPlayersConfig& v) {
    v.Enabled = j.at("Enabled").get<bool>;
    v.MaxNumSuggestedPlayers = j.at("MaxNumSuggestedPlayers").get<uint32_t>;
    v.FriendsOfFriendsLimit = j.at("FriendsOfFriendsLimit").get<uint32_t>;
    v.MaxNumReplacements = j.at("MaxNumReplacements").get<uint32_t>;
    v.VicoriousComradesLimit = j.at("VicoriousComradesLimit").get<uint32_t>;
    v.FriendsOfFriendsEnabled = j.at("FriendsOfFriendsEnabled").get<bool>;
    v.OnlineFriendsLimit = j.at("OnlineFriendsLimit").get<uint32_t>;
    v.PreviousPremadesLimit = j.at("PreviousPremadesLimit").get<uint32_t>;
  }

}
#endif // SWAGGER_TYPES_LolSuggestedPlayersSuggestedPlayersConfig_HPP
