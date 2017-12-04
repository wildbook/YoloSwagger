#ifndef SWAGGER_TYPES_LolLobbyTeamBuilderTbLobbySlotResource_HPP
#define SWAGGER_TYPES_LolLobbyTeamBuilderTbLobbySlotResource_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct LolLobbyTeamBuilderTbLobbySlotResource {
    // 
    bool autoFillEligible;
    // 
    bool autoFillProtectedForPromos;
    // 
    bool autoFillProtectedForSoloing;
    // 
    bool autoFillProtectedForStreaking;
    // 
    std::vector<std::string> draftPositionPreferences;
    // 
    std::string excludedPositionPreference;
    // 
    bool showPositionExcluder;
    // 
    int32_t slotId;
    // 
    uint64_t summonerId;
    // 
    std::string summonerName;
  };

  void to_json(nlohmann::json& j, const LolLobbyTeamBuilderTbLobbySlotResource& v) {
    j["autoFillEligible"] = v.autoFillEligible;
    j["autoFillProtectedForPromos"] = v.autoFillProtectedForPromos;
    j["autoFillProtectedForSoloing"] = v.autoFillProtectedForSoloing;
    j["autoFillProtectedForStreaking"] = v.autoFillProtectedForStreaking;
    j["draftPositionPreferences"] = v.draftPositionPreferences;
    j["excludedPositionPreference"] = v.excludedPositionPreference;
    j["showPositionExcluder"] = v.showPositionExcluder;
    j["slotId"] = v.slotId;
    j["summonerId"] = v.summonerId;
    j["summonerName"] = v.summonerName;
  }

  void from_json(const nlohmann::json& j, LolLobbyTeamBuilderTbLobbySlotResource& v) {
    v.autoFillEligible = j.at("autoFillEligible").get<bool>;
    v.autoFillProtectedForPromos = j.at("autoFillProtectedForPromos").get<bool>;
    v.autoFillProtectedForSoloing = j.at("autoFillProtectedForSoloing").get<bool>;
    v.autoFillProtectedForStreaking = j.at("autoFillProtectedForStreaking").get<bool>;
    v.draftPositionPreferences = j.at("draftPositionPreferences").get<std::vector<std::string>>;
    v.excludedPositionPreference = j.at("excludedPositionPreference").get<std::string>;
    v.showPositionExcluder = j.at("showPositionExcluder").get<bool>;
    v.slotId = j.at("slotId").get<int32_t>;
    v.summonerId = j.at("summonerId").get<uint64_t>;
    v.summonerName = j.at("summonerName").get<std::string>;
  }

}
#endif // SWAGGER_TYPES_LolLobbyTeamBuilderTbLobbySlotResource_HPP
