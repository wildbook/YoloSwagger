#ifndef SWAGGER_TYPES_LolLobbyTeamBuilderTbLobbySlotResource_HPP
#define SWAGGER_TYPES_LolLobbyTeamBuilderTbLobbySlotResource_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct LolLobbyTeamBuilderTbLobbySlotResource {
    // 
    std::string summonerName;
    // 
    std::vector<std::string> draftPositionPreferences;
    // 
    bool autoFillProtectedForPromos;
    // 
    bool autoFillEligible;
    // 
    bool autoFillProtectedForStreaking;
    // 
    int32_t slotId;
    // 
    std::string excludedPositionPreference;
    // 
    bool showPositionExcluder;
    // 
    bool autoFillProtectedForSoloing;
    // 
    uint64_t summonerId;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyTeamBuilderTbLobbySlotResource& v) {
    j["summonerName"] = v.summonerName;
    j["draftPositionPreferences"] = v.draftPositionPreferences;
    j["autoFillProtectedForPromos"] = v.autoFillProtectedForPromos;
    j["autoFillEligible"] = v.autoFillEligible;
    j["autoFillProtectedForStreaking"] = v.autoFillProtectedForStreaking;
    j["slotId"] = v.slotId;
    j["excludedPositionPreference"] = v.excludedPositionPreference;
    j["showPositionExcluder"] = v.showPositionExcluder;
    j["autoFillProtectedForSoloing"] = v.autoFillProtectedForSoloing;
    j["summonerId"] = v.summonerId;
  }

  inline void from_json(const nlohmann::json& j, LolLobbyTeamBuilderTbLobbySlotResource& v) {
    v.summonerName = j.at("summonerName").get<std::string>;
    v.draftPositionPreferences = j.at("draftPositionPreferences").get<std::vector<std::string>>;
    v.autoFillProtectedForPromos = j.at("autoFillProtectedForPromos").get<bool>;
    v.autoFillEligible = j.at("autoFillEligible").get<bool>;
    v.autoFillProtectedForStreaking = j.at("autoFillProtectedForStreaking").get<bool>;
    v.slotId = j.at("slotId").get<int32_t>;
    v.excludedPositionPreference = j.at("excludedPositionPreference").get<std::string>;
    v.showPositionExcluder = j.at("showPositionExcluder").get<bool>;
    v.autoFillProtectedForSoloing = j.at("autoFillProtectedForSoloing").get<bool>;
    v.summonerId = j.at("summonerId").get<uint64_t>;
  }

}
#endif // SWAGGER_TYPES_LolLobbyTeamBuilderTbLobbySlotResource_HPP
