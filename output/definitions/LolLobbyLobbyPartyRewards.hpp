#ifndef SWAGGER_TYPES_LolLobbyLobbyPartyRewards_HPP
#define SWAGGER_TYPES_LolLobbyLobbyPartyRewards_HPP
#include <json.hpp>
#include "LolLobbyPartyReward.hpp"
namespace test {
  // 
  struct LolLobbyLobbyPartyRewards {
'    // 
    bool isCustom;
    // 
    bool isEnabled;
    // 
    std::vector<LolLobbyPartyReward> partyRewards;
    // 
    int32_t queueId;
  };

  void to_json(nlohmann::json& j, const LolLobbyLobbyPartyRewards& v) {
    j["isCustom"] = v.isCustom;
    j["isEnabled"] = v.isEnabled;
    j["partyRewards"] = v.partyRewards;
    j["queueId"] = v.queueId;
  }

  void from_json(const nlohmann::json& j, LolLobbyLobbyPartyRewards& v) {
    v.isCustom = j.at("isCustom").get<bool>;
    v.isEnabled = j.at("isEnabled").get<bool>;
    v.partyRewards = j.at("partyRewards").get<std::vector<LolLobbyPartyReward>>;
    v.queueId = j.at("queueId").get<int32_t>;
  }

}
#endif // SWAGGER_TYPES_LolLobbyLobbyPartyRewards_HPP
